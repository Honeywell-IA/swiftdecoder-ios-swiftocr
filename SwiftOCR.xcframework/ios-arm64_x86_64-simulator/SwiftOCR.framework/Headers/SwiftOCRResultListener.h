/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  SwiftOCRResultListener.h
//  SwiftOCR
//
//


#import <SwiftDecoder/PluginResultListener.h>
#import <SwiftDecoder/DecodeResult.h>

/**
 * @brief This protocol must be implemented by any class that wishes to receive template OCRdecoder results
 * @author H454944
 */

@protocol SwiftOCRResultListener <PluginResultListener>

/**
* @brief This method is called when a decode event has occurred.  This will be called when a barcode was successfully decode or when a decode attempt has been terminated
*
* @param ocrData
*    This is an array of ocrData objects that contains all the data associated with  OCR Objects of type SwiftOCRResult.
*
*/
- (void) onSwiftOCRResult:(NSArray*)ocrData;
/**
* @brief This method is called when a decode event has occurred.  This will be called when a barcode was successfully decode or when a decode attempt has been terminated
*
* @param ocrData
*    This is an array of ocrData objects that contains all the data associated with each barcode decoded and OCRObjects of type SwiftOCRTemplateResult(OCR with Barcode).
*
*/
- (void) onSwiftOCRTemplateResult:(NSArray*)ocrData;
@end
