//
//  AnimatedTabBarItem.m
//  TabBarAnimation
//
//  Created by 刘国超 on 16/4/29.
//  Copyright (c) 2015年 刘国超. All rights reserved.
//

#import "LGCAnimatedTabBarItem.h"
#import "TabBarItemAnimation.h"
#import "AnimationFactory.h"

@interface LGCAnimatedTabBarItem ()

@end

@implementation LGCAnimatedTabBarItem

- (void)playAnimation:(UIImageView *)icon textLabel:(UILabel *)textLabel
{
    assert(_animation != nil);
    
    [_animation playAnimation:icon textLabel:textLabel];
}

- (void)deselectAnimation:(UIImageView *)icon textLabel:(UILabel *)textLabel
{
    assert(_animation != nil);
    
    [_animation deselectAnimation:icon textLabel:textLabel];
}

- (void)selectedState:(UIImageView *)icon textLabel:(UILabel *)textLabel
{
    assert(_animation != nil);
    
    [_animation selectedState:icon textLabel:textLabel];
}


@end
