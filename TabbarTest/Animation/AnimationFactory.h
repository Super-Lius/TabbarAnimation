//
//  AnimationFactory.h
//  TabBarAnimation
//
//  Created by LGC on 16/4/29.
//  Copyright (c) 2015年 LGC, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AnimationType.h"

@class TabBarItemAnimation;

@interface AnimationFactory : NSObject

+ (TabBarItemAnimation *)animationWithType:(AnimationType)type;

@end
