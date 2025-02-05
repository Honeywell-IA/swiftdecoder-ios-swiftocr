//
//  MultipleROIOCRTemplate.h
//  SwiftOCR
//
//  Created by H454944 on 08/02/24.
//

#import <Foundation/Foundation.h>
#import <SwiftDecoder/DecodeBasePlugin.h>
#import <SwiftDecoder/HSMDecoder.h>
#import "MultipleROIOCRManager.h"

#define kLineWidth 2.0f

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief A SwiftPlugin used for MultiROI
 */
@interface MultipleROIOCRTemplate : DecodeBasePlugin {
    
}

@property (retain, nonatomic) MultipleROIOCRManager * multiROIOCRManager;
@property (assign, nonatomic) CGRect lastCameraFrame;

/**
 * @brief Configure orientation ROI
 */
- (void)configureOrientationROI;

/**
 * @brief Enable fine tuning
 *
 * @param enable - boolean
 *
 */
- (void) enableFineTuning:(BOOL) enable;
-(void)setTouchResizingEnable:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
