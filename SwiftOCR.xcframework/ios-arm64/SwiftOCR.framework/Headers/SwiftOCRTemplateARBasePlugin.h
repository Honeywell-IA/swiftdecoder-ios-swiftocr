//
//  SwiftOCRTemplateARBasePlugin.h
//  SwiftOCR
//
//  Created by H454944 on 12/03/24.
//

#import <SwiftDecoder/SwiftDecoder.h>
#import "SwiftOCRTemplateTagListener.h"
NS_ASSUME_NONNULL_BEGIN

@interface SwiftOCRTemplateARBasePlugin : ARBasePlugin

@property (nonatomic, assign) int iFailures;
@property (nonatomic, strong) UIColor *frameColor;

-(void) setTouchListener:(id<SwiftOCRTemplateTagListener>) arTouchListener;
-(void)rotateOCRBounds:(NSArray*)decodedResultsArray withOrientation:(int)orientaion;

-(void)rotateOCRBoundsForTemplateOCR:(NSArray*)decodedResultsArray withOrientation:(int)orientaion;
- (void)resetTimer;
@end

NS_ASSUME_NONNULL_END
