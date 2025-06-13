/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  OCRResult.h
//  HSMDecoderAPI
//
//

#import <Foundation/Foundation.h>
#import <SwiftDecoder/DecodeResult.h>
#import "SwiftOCRBounds.h"

NS_ASSUME_NONNULL_BEGIN
/**
 *  @brief This class contains all the necessary information about OCR Result
 */

@interface SwiftOCRResult : DecodeResult

/**
 * @brief This property contains the OCR data in bytes
 */
@property(strong) NSData *ocrByteData;
/**
 * @brief This property contains the OCR Recognition Time
 */
@property(assign) double ocrRecognitionTime;
/**
 * @brief This property contains the OCR Total Time
 */
@property(assign) double ocrTotalTime;
/**
 * @brief This property contains the OCR data Length
 */
@property(assign) int ocrDataLength;
/**
 * @brief This property contains the bounds of the decoded OCR within the image.
 */
@property(retain) SwiftOCRBounds *ocrBounds;
/**
 * @brief Tag reference for identification of OCR.
 */
@property(assign) int tagReference;

@property(assign) NSString * ocrTagName;

@end

NS_ASSUME_NONNULL_END
