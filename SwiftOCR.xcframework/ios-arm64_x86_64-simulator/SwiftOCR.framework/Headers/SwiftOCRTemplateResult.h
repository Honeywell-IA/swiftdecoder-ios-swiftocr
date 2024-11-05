/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  SwiftOCRTemplateResult.h
//  SwiftOCR
//
//

#import <SwiftDecoder/DecodeResult.h>
#import <SwiftDecoder/HSMDecodeResult.h>

/**
 *  @brief This class holds the result for Template based OCR detection mode. It include both barcode and OCR details
 *  for the tags defined in the confgured templates.
 */
@interface SwiftOCRTemplateResult : DecodeResult

/**
 * @brief This property contains the OCR Results
 */
@property (retain) NSArray* ocrResults;

/**
 * @brief This property contains the barcode data
 */
@property (retain) HSMDecodeResult* barcodeDecodeResult;

@end

