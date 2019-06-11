//
//  XCLViewController.m
//  XCLCategorySDK
//
//  Created by xcltyt on 06/11/2019.
//  Copyright (c) 2019 xcltyt. All rights reserved.
//

#import "XCLViewController.h"
#import <XCLCategories/NSString+XCLAdd.h>
#import <XCLCategories/UIColor+XCLAdd.h>

@interface XCLViewController ()

@end

@implementation XCLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    if ([@"string" isValidString]) {
        NSLog(@"string is valid string");
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
