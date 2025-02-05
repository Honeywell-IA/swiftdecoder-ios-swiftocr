//
//  BarcodeOCRTemplateManager.h
//  SwiftOCR
//
//  Created on 08/11/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TemplateAddAndScanType) {
    BarcodeTemplateAddAndScanType = 0,
    OCRTemplateAddAndScanType
};

@interface BarcodeOCRTemplateManager : NSObject
/**
 * @brief Creates and return singlton instance
 */
+ (BarcodeOCRTemplateManager*) getInstance;

/**
 * @brief Returns key for passed TemplateAddAndScanType to add/fetch/delete template
 *
 * @param templateId - int
 * @param templateAddAndScanType - TemplateAddAndScanType
 *
 */
-(NSString *)getTemplateKeyUsing:(int)templateId For:(TemplateAddAndScanType)templateAddAndScanType;

/**
 * @brief Returns all template ID's for given TemplateAddAndScanType
 * @param templateAddAndScanType - TemplateAddAndScanType
 *
 */
-(NSMutableArray *)templateIDArray:(TemplateAddAndScanType)templateAddAndScanType;

/**
 * @brief Saving template id for given TemplateAddAndScanType
 *
 * @param templateAddAndScanType - TemplateAddAndScanType
 * @param templateID - int
 *
 */
-(void)saveTemplateID:(int)templateID For:(TemplateAddAndScanType)templateAddAndScanType;

/**
 * @brief Deleting template id for given TemplateAddAndScanType
 *
 * @param templateAddAndScanType - TemplateAddAndScanType
 * @param templateID - int
 *
 */
-(void)removeTemplateID:(int)templateID For:(TemplateAddAndScanType)templateAddAndScanType;

/**
 * @brief Remove all stored template ID's
 *
 */
-(void)clearAllTemplateIDs;
@end

NS_ASSUME_NONNULL_END
