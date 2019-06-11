//
//  UIButton+XCLAdd.h
//  XCLCategories
//
//  Created by Apple on 2019/6/11.
//  Copyright © 2019 XCL. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (XCLAdd)

- (void)setEnlargeEdge:(CGFloat)edge;

- (void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;

@end

NS_ASSUME_NONNULL_END
