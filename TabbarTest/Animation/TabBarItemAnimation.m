//
//  TabBarItemAnimation.m
//  TabBarAnimation
//
//  Created by LGC on 16/4/29.
//  Copyright (c) 2015年 LGC, Inc. All rights reserved.
//

#import "TabBarItemAnimation.h"

@implementation TabBarItemAnimation

- (id)init
{
    if (self = [super init])
    {
        _defaultTextColor = [UIColor blackColor];
        _textSelectedColor = [UIColor redColor];
        _iconSelectedColor = [UIColor redColor];
        _duration = 0.2;
    }
    
    return self;
}

- (void)playAnimation:(UIImageView *)icon textLabel:(UILabel *)textLabel
{}

- (void)deselectAnimation:(UIImageView *)icon textLabel:(UILabel *)textLabel
{}

- (void)selectedState:(UIImageView *)icon textLabel:(UILabel *)textLabel
{}

@end
