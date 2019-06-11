//
//  UIColor+XCLAdd.h
//  XCLCategories
//
//  Created by Apple on 2019/6/11.
//  Copyright © 2019 XCL. All rights reserved.
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (XCLAdd)

+ (UIColor *)colorWithARGBHex:(NSInteger)hexValue;

+ (UIColor *)colorWithRGBHex:(NSInteger)hexValue;

+ (UIColor *)whiteColorWithAlpha:(CGFloat)alphaValue;

+ (UIColor *)blackColorWithAlpha:(CGFloat)alphaValue;

+ (UIColor *)colorWithRGBHex:(NSInteger)hexValue alpha:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
