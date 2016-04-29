//
//  TabBarAnimationProtocol.h
//  TabBarAnimation
//
//  Created by LGC on 16/4/29.
//  Copyright (c) 2015年 LGC, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TabBarAnimationProtocol <NSObject>

- (void)playAnimation:(UIImageView *)icon textLabel:(UILabel *)textLabel;

- (void)deselectAnimation:(UIImageView *)icon textLabel:(UILabel *)textLabel;

- (void)selectedState:(UIImageView *)icon textLabel:(UILabel *)textLabel;

@end
