//
//  TargetedSingleROIConfig.h
//  SwiftOCR
//
//  Created by H454944 on 21/02/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef  NS_ENUM(NSInteger, TargetedSingleROIPosition)
{
    TOP = 0,
    BOTTOM,
    CENTER
};

typedef NS_ENUM(NSInteger, TargetedSingleROIOrientation)
{
    TARGETED_SINGLE_ROI_ORIENTATION_VERTICAL = 0,
    TARGETED_SINGLE_ROI_ORIENTATION_HORIZONTAL
};

typedef NS_ENUM(NSInteger, ROIConfigType)  {
    usingSize = 0,
    usingWidthandAspect,
    usingHeightandAspect
};

/**
 * @brief to Configure Targeted Single ROI such as Position, Size ,Orientation and Format of data to be returned (applying Regex,Whitelist)
 */
@interface TargetedSingleROIConfig : NSObject

/**
* @brief Allows to configure the position of ROI on the preview at TOP,BOTTOM,CENTER.
*/
@property(nonatomic,assign) TargetedSingleROIPosition position;

/**
* @brief     Allows to configure the default orientation of the configured ROI. The orientation can be horizontal and vertical.
*/
@property(nonatomic,assign) TargetedSingleROIOrientation orientation;

/**
* @brief     Allows to select type of input to be used for ROI configuration
*/
@property(nonatomic,assign) ROIConfigType roiConfigType;
/**
 * @brief Allows to configure the format for the detected OCR which needs to be checked before returning the result. The settings allows for this format currently are regular expression and character whitelist.
 * Key value pair for keys : regex and whitelist
*/

@property(nonatomic,assign)  CGFloat widthInPercentage;
@property(nonatomic,assign)  CGFloat heightInPercentage;
@property(nonatomic,assign)  CGFloat aspectRatio;

@property(nonatomic,retain)NSDictionary* detectedOCRFormat;
/**
* @brief     Allows to configure Width as per the percentage provided and height as per aspect ratio
 *     @param widthInPercentage
 *      Width In Percentage
 *     @param heightInPercentage
 *      aspectRatio
*/
-(void)setROISizeWithWidth:(CGFloat) widthInPercentage withHeight:(CGFloat)heightInPercentage;

/**
* @brief     Allows to configure Width as per the percentage provided and height as per aspect ratio
 *     @param widthInPercentage
 *      Width In Percentage
 *     @param aspectRatio
 *      Height In Percentage
*/
-(void)setWidth:(CGFloat) widthInPercentage andAspect:(CGFloat) aspectRatio;

/** 
 * @brief  Allows to configure Height as per the percentage provided and width as per aspect ratio
 *     @param heightInPercentage
 *      Height In Percentage
 *     @param aspectRatio
 *      aspectRatio
*/
-(void)setHeight:(CGFloat) heightInPercentage andAspect:(CGFloat) aspectRatio;


/**
 * @brief Allows to configure the format for the detected OCR which needs to be checked before returning the result. The settings allows for this format currently are regular expression and character whitelist.
 *  @param ocrFormat
 *    Key value pair for keys : regex and whitelist
*/
//-(void) setDetectedOCRFormat:(NSDictionary*)ocrFormat;

/** 
 *@brief Allows to get the configured format for detected OCR.
 */
//-(NSDictionary*)getDetectedOCRFormat;
@end

NS_ASSUME_NONNULL_END
