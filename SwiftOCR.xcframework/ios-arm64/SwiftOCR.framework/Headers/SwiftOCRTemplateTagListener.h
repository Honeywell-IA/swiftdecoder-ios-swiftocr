//
//  SwiftOCRTemplateTagListener.h
//  SwiftOCR
//
//  Created by H454944 on 12/03/24.
//

#import <Foundation/Foundation.h>
#import <SwiftDecoder/DecodeResult.h>

@protocol SwiftOCRTemplateTagListener

@optional
-(void) onFrameSelected:(DecodeResult*)resultSelected withResultType:(DecodeResultType)decodeResultType;
@end

