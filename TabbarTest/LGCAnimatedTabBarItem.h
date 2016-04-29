//
//  AnimatedTabBarItem.h
//  TabBarAnimation
//
//  Created by 刘国超 on 16/4/29.
//  Copyright (c) 2015年 刘国超. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TabBarAnimationProtocol.h"

@class TabBarItemAnimation;

@interface LGCAnimatedTabBarItem : UITabBarItem<TabBarAnimationProtocol>

@property (nonatomic, strong)TabBarItemAnimation *animation;

@end
