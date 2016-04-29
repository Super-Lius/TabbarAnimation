# TabbarTest
tabbar动画

![image](https://github.com/2601896757/TabbarTest/blob/master/AnimationTabbar.gif)

讲解
动画类型有五种
FumeAnimationType,
BounceAnimationType,
RotationAnimationType,
FrameAnimationType,
TransitionAnimationType,
其中第四中动画截图中没有展示，它需要多个图片才能看到动画效果。
主要代码是遍历系统tabbar中的item，分别取出image和label文字，然后自己添加一个imageView和一个label,这样才能给自己添加的imageView和label添加动画。
[self.tabBar.items enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        LGCAnimatedTabBarItem *tabBarItem = obj;
        
        UIView *container = containers[idx];
        container.tag = idx;
        
        UIImageView *imageView = [[UIImageView alloc] initWithImage:tabBarItem.image];
        imageView.tag = ImageViewTag;
        imageView.translatesAutoresizingMaskIntoConstraints = NO;
        [container addSubview:imageView];
        
        [imageView makeConstraints:^(MASConstraintMaker *make) {
            make.size.equalTo(tabBarItem.image.size);
            make.centerY.equalTo(container).offset(-5);
            make.centerX.equalTo(container);
        }];
        
        UILabel *label = [[UILabel alloc] init];
        label.backgroundColor = [UIColor clearColor];
        label.textColor = [UIColor blackColor];
        label.font = [UIFont systemFontOfSize:10];
        label.textAlignment = NSTextAlignmentCenter;
        label.tag = LabelTag;
        label.text = tabBarItem.title;
        label.translatesAutoresizingMaskIntoConstraints = NO;
        [container addSubview:label];
        
        CGFloat width = self.tabBar.frame.size.width / self.tabBar.items.count;
        
        [label makeConstraints:^(MASConstraintMaker *make) {
            make.size.equalTo(CGSizeMake(width, 10));
            make.centerY.equalTo(container).offset(16);
            make.centerX.equalTo(container);
        }];
        
        if (idx == 0)
        {
            [tabBarItem selectedState:imageView textLabel:label];
        }
        
        // 去除原有设置
        tabBarItem.title = @"";
        tabBarItem.image = nil;
    }];
