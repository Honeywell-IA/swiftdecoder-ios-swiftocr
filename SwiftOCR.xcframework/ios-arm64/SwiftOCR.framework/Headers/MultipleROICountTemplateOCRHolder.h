//
//  CountMultipleTemplateOCRHolder.h
//  SwiftOCR
//
//  Created on 27/09/24.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ScanningAreaFrameCorners) {
    TopLeft = 1,
    TopRight,
    BottomLeft,
    BottomRight,
    //Center,
    NoCorner
};

typedef NS_ENUM(NSInteger, TemplateOCRTypes) {
    GeneralTemplateOCRTypes,
    MultipleTemplateOCRTypes,
    CountMultipleTemplateOCRTypes,
    OverlayScanTemplateOCRTypes,
    NoTemplateOCRTypes
};

NS_ASSUME_NONNULL_BEGIN

@interface MultipleROICountTemplateOCRHolder : NSObject

@property (assign, nonatomic) int count;
@property (assign, nonatomic) int width;
@property (assign, nonatomic) int height;
@property (assign, nonatomic) TemplateOCRTypes templateOCRTypes;

@end

NS_ASSUME_NONNULL_END

