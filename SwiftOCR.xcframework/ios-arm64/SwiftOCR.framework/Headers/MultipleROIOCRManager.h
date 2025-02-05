//
//  MultiROIOCRManager.h
//  SwiftOCR
//
//  Created on 20/09/24.
//

#import <Foundation/Foundation.h>
#import "MultipleROICountTemplateOCRHolder.h"
#import <SwiftDecoder/PluginHelper.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief OCR Manager handling MultiROI
 */

@interface MultipleROIOCRManager : NSObject

@property (retain, nonatomic) NSString *decryptedString;
@property (assign, nonatomic) CGRect frameCamera;
@property (retain, nonatomic) NSMutableArray * allScanningAreaFrames;
@property (retain, nonatomic) NSArray * scannedTemplateTags;

/**
 * @brief init with decrypted string
 *
 * @param decryptedString - decrypted json string
 *
 */
- (id)initWith:(NSString *) decryptedString;

/**
 * @brief init with decrypted string and camera frame
 *
 * @param decryptedString - decrypted json string
 *
 * @param rect - Camera frame
 *
 */
- (id)initWith:(NSString *) decryptedString cameraFrame:(CGRect) rect;

/**
 * @brief Generate all scanning areas for camera frame
 *
 * @param frameCamera - Camera frame
 *
 */
- (void)generateAllScanningAreasFor:(CGRect) frameCamera;

/**
 * @brief Resize for single touch at point
 *
 * @param point - Touch poing on screen
 *
 */
- (void)resizeForSingleTouchAtPoint:(CGPoint) point;

/**
 * @brief Generate all scanning areas for camera frame and CMTOCRHolder instance
 *
 * @param frameCamera - Camera frame
 *
 *
 * @param cmtOCRHolder - CountMultipleTemplateOCRHolder instance
 *
 */
- (void)generateAllScanningAreasFor:(CGRect) frameCamera CMTOCRHolder:(MultipleROICountTemplateOCRHolder *) cmtOCRHolder;

/**
 * @brief Placing all windows in center of Camera
 *
 * @param frameCamera - Camera frame
 *
 */
- (NSMutableArray *)adjustAllScanningAreaFramesToCenterOfScreen:(CGRect)frameCamera;

/**
 * @brief Returns device current orientation
 *
 */
- (UIInterfaceOrientation)getCurrentOrientation;

@end

NS_ASSUME_NONNULL_END
