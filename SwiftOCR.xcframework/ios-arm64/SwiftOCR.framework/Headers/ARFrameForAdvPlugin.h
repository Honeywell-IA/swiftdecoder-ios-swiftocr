/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  ARFrameForAdvPlugin.h
//  HSMDecoderAPI
//
//

#import <SwiftOCR/SwiftOCRTemplateResult.h>

@interface ARFrameForAdvPlugin : NSObject

@property (nonatomic, strong) SwiftOCRTemplateResult *result;
@property (nonatomic, assign) CGPoint tl;
@property (nonatomic, assign) CGPoint tr;
@property (nonatomic, assign) CGPoint bl;
@property (nonatomic, assign) CGPoint br;
@property (nonatomic, assign) int number;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, assign) BOOL isFrameBarcode;

- (instancetype)initWithResult:(SwiftOCRTemplateResult*)result
                       topLeft:(CGPoint)tl
                      topRight:(CGPoint)tr
                    bottomLeft:(CGPoint)bl
                   bottomRight:(CGPoint)br
                        number:(int)number;

- (CGPoint)getCentroid;
- (BOOL)isPointWithin:(CGPoint)point;

@end

