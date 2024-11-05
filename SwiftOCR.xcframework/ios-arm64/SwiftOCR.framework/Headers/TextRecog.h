//
//  TextRecog.h
//  SwiftOCR
//
//  Created by H454944 on 08/02/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TextRecog : NSObject

@property(nonatomic, retain) NSString* regex;
@property(nonatomic, retain) NSString* whitelist;
@end

NS_ASSUME_NONNULL_END
