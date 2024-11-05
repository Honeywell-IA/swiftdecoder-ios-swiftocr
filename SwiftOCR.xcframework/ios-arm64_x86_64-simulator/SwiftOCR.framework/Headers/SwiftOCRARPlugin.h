/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s): https://www.honeywellaidc.com/Pages/patents.aspx
 */

//
//  SwiftOCRARPlugin.h
//  SwiftOCR
//
//


#import <SwiftDecoder/DecodeBasePlugin.h>
#import <SwiftDecoder/HSMDecoder.h>
#import <SwiftDecoder/HSMDecodeResultArray.h>
#import "SwiftOCRTemplateResult.h"

/**
 @brief A SwiftPlugin used for Template OCR decoding
 */
@interface SwiftOCRARPlugin : DecodeBasePlugin {
    
@private
    NSMutableArray *ARresults;
}
@property (nonatomic, strong) UIColor *frameColor;
@property (nonatomic, strong) UIColor *touchColor;
@property (assign) BOOL isTouched;


/**
 @brief This method changes the color of the Accent(frame and number text)

 @param color color that has to be set
 */
- (void)setAccentColor:(UIColor *)color;

/**
 @brief  Only override drawRect: if you perform custom drawing. An empty implementation adversely affects performance during animation.

 @param rect The portion of the view’s bounds that needs to be updated.
 */
-(void)drawRect:(CGRect)rect;

/**
 * @brief Called when video preview comes to the foreground. This should be used to initialize the plug-in on each scan attempt.
 */
- (void)onStart;

/**
 * @brief Called when a barcode(s) has been decoded in the image
 *
 * @param results
 *      An array results for all decode barcodes
 */
-(void)onDecode:(HSMDecodeResultArray *)results;

/**
 * @brief Called each time a frame cannot be successfully decoded
 */
-(void)onDecodeFailed;

/**
 @brief Touch Delegate methods of begin

 @param touches A set of UITouch instances
 @param event The event to which the touches belong.
 */
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;

/**
 @brief Touch Delegate methods of move

 @param touches A set of UITouch instances
 @param event The event to which the touches belong.
 */
- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;

/**
 @brief Touch Delegate method of end

 @param touches A set of UITouch instances
 @param event The event to which the touches belong.
 */
- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;

/**
 @brief Touch Delegate method of cancel

 @param touches A set of UITouch instances
 @param event The event to which the touches belong.
 */
- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;

@end

