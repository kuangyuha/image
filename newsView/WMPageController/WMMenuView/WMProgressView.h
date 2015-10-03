//
//  WMProgressView.h
//  WMPageController
//
//  Created by Mark on 15/6/20.
//  Copyright (c) 2015年 灰哥哥. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMProgressView : UIView
@property (nonatomic, strong) NSArray *itemFrames;
@property (nonatomic, assign) CGColorRef color;
@property (nonatomic, assign) CGFloat progress;

- (void)setProgressWithOutAnimate:(CGFloat)progress;
@end
