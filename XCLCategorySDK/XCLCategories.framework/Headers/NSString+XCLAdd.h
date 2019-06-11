//
//  NSString+XCLAdd.h
//  XCLCategories
//
//  Created by Apple on 2019/6/11.
//  Copyright © 2019 XCL. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (XCLAdd)

- (BOOL)isValidString;
- (NSDictionary *)jsonStringToDictionary;


@end

NS_ASSUME_NONNULL_END
