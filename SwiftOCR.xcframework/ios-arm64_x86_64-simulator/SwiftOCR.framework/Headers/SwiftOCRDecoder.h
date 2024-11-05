//
//  SwiftOCRDecoder.h
//  SwiftOCR
//
//  Created by H454944 on 10/08/23.
//

#import <Foundation/Foundation.h>
#import <SwiftDecoder/DependencyCallbackManager.h>
#import <SwiftDecoder/PluginManager.h>
#import <SwiftDecoder/SwiftPlugin.h>
#import "SwiftOCRStatus.h"

#import "SwiftOCRResultListener.h"
#import "TargetedSingleROIConfig.h"



/**
 *  @brief This enumeration represents type OCR detection.
 */
typedef enum{
    TEMPLATE_OCR,
    OPEN_OCR
} SwiftOCRDetectionMode;

/**
 *  @brief This enumeration represents type OCR Scan Area.
 */
typedef enum{
    TARGETED_SINGLE_ROI,
    FULL_PREVIEW,
    TARGETED_MULTIPLE_ROI
} SwiftOCRScanArea;

/**
 * @brief This is used for TemplateOCR detection based on the template provided it scans the data and displays the value
 */

@interface SwiftOCRDecoder : NSObject

/**
 * @brief Gets the singleton instance of TemplateOCRDecoder.
 *
 */
+ (SwiftOCRDecoder*) getInstance;
/**
 * @brief Disposes of all resources used by the TemplateOCRDecoder singleton.  This must be called before exiting or the Camera may be left locked!
 *
 */
+ (void) disposeInstance;
/**
 * @brief Decrypts the template OCR data  embeded in the QR code file and maps it to template ID
 * @param imageData encrypted  data stored in QR barcode
 * @return
 *    templateID(OCRTemplateResult_TEMPLATE_ALREADY_ADDED = -2, //When barcode is already added OCRTemplateResult_ERROR = -1, //When barcode is not read or could not decrypt OCRTemplateResult_MAXLIMIT_EXCEEDED = 0, //When template ID value exceeds more than 40)
 */
-(int)addOCRTemplateWithImageData:(NSData*)imageData;


-(int)addOCRTemplateWithBarcodeData:(NSString*)decodeResult;

/**
 * @brief This method registers a SwiftMobile plug-in to be used during a barcode scan operation.  SwiftMobile plug-ins are designed to work on a particular type of data and can render their own User Interface.  There are several plug-ins available within SwiftMobile, however, 3rd party plug-ins can be used as well by extending the SwiftMobile. See the SwiftMobile plug-in documentation for further help.
 *
 * @param plugin - Specifies the SwiftMobile instance to register
 *
 */
- (void) registerPlugin:(SwiftPlugin*) plugin;
/**
 * @brief This method unregisters a SwiftMobile plug-in from the system.  SwiftMobile plug-ins are designed to work on a particular type of data and can render their own User Interface.  There are several plug-ins available within SwiftMobile, however, 3rd party plug-ins can be used as well by extending the SwiftMobile . See the Data Cognition plug-in documentation for further help.
 *
 * @param plugin - Specifies the SwiftMobile instance to unregister
 *
 *
 */
- (void) unregisterPlugin:(SwiftPlugin*) plugin;
/**
 * @brief This method enables or disables template OCR Scanning.
 *
 * @param status - enable or disable template scanning
 *
 *
 * @return
 *  TemplateOCRStatus
 */
- (SwiftOCRStatus) enableSwiftOCRFeature:(BOOL) status;

/**
 * @brief Removes already added template ID using @addOCRTemplateID
 * @param templateID Template Identifier that was added
 * @return
 *  templateID on Success. -1 on failure
 */
-(int)removeOCRTemplateID:(int) templateID;

/**
 * @brief Sets the active template ID to be used which was configured using interface @configureOCRTemplateID
 * @param templateID Template Identifier
 * @return
 *  templateID on Success. -1 if symbology OCR is not set or ADVANCE_TEMPLATE is not set. -2 if templateID is invalid.
 */
-(int)setOCRActiveTemplateID:(int)templateID ;

/**
 * @brief This method adds an OnDecodeResultListener that will be notified of decode results.
 * Anything that wishes to receive results must implement OnDecodeResultListener
 *
 * @param resultListener - The OnDecodeResultListener that will receive decode results on a decode event.
 *
 *
 */
- (void) addOnResultListener:(id<SwiftOCRResultListener>)resultListener;

/**
 * @brief This method removes an OnDecodeResultListener that will be notified of decode results.
 *
 * @param resultListener - The OnDecodeResultListener that will be removed
 *
 *
 */
- (void) removeOnResultListener:(id<SwiftOCRResultListener>)resultListener;

/**
 * @brief Sets the respective symbol with openocr  to be used for OCR detection
 *
 * @return
 *     true if set successfully else false
 */

-(BOOL)enableOCRSymbols;

/**
 * @brief Gets the current version of the SwiftOCR SDK
 *
 * @return
 *     A string containing the decoder SDK version information
 */
- (NSString*) getAPIVersion;

/**
 * @brief Gets the current OCR Detection Mode
 *
 * @return
 *     An  enum of type SwiftOCRDetectionMode
 */
-(SwiftOCRDetectionMode)getSwiftOCRDetectionMode;

/**
 * @brief Allows to set the  Detection Mode. Currently supported mode is TEMPLATE_OCR. which allows to detected OCR based on configured template using barcode as the anchoring/reference.(Note : Needs to be called before enableSwiftOCRFeature)
 *
 * @param  ocrType - Type of detection mode
 *
 */
-(void)setSwiftOCRDetectionMode:(SwiftOCRDetectionMode) ocrType;

/**
 * @brief Sets the Configuration Value for filtering the OCR Output .
 *
 * @param textJson - The Json Format is :  {"regex":"","whitelist":""}
 *
 *
 * @return True if the values are successfully set and False if not.
 */
-(BOOL) setOCRRecognitionFormat:(NSString*) textJson;

/**
 * @brief Allows to set the  configuration required for the Single Region of interest
 *
 * @param  config - Config for Single ROI
 *
 */
-(void)setTargetedSingleROIConfig:(TargetedSingleROIConfig*)config;

/**
 * @brief gets the current configuration for Single Region of interest
 *
 * @return  config for Single ROI
 */
-(TargetedSingleROIConfig*)getTargetedSingleROIConfig;

/**
 * @brief Allows to set the  switch the Single ROI Orientation(Vertical of Horizontal)
 *
 * @param  orientation  - Vertical of Horizontal
 *
 */

-(void)switchTargetedSingleROIOrientation:(TargetedSingleROIOrientation)orientation;

/**
 * @brief Allows to set the  Type of OCR Scan(Single ROI, Full PREview or Multiple ROI) // Note: Mutliple ROI is not supported
 *
 * @param  ocrScanArea - Swift OCR Scan Area
 *
 */
-(void)setSwiftOCRScanArea:(SwiftOCRScanArea)ocrScanArea;

/**
 * @brief gets the current Swift OCR Scan area
 *
 * @return  Swift OCR Scan area
 */
-(SwiftOCRScanArea)getSwiftOCRScanArea;

@end

