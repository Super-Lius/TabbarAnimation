//
//  TabBarItemAnimation.h
//  TabBarAnimation
//
//  Created by LGC on 16/4/29.
//  Copyright (c) 2015年 LGC, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TabBarAnimationProtocol.h"

@interface TabBarItemAnimation : NSObject<TabBarAnimationProtocol>

@property (nonatomic, assign) CGFloat duration;
@property (nonatomic, strong) UIColor *textSelectedColor;
@property (nonatomic, strong) UIColor *iconSelectedColor;
@property (nonatomic, strong) UIColor *defaultTextColor;

@end
