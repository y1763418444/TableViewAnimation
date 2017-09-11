//
//  UITableView+AnimationKit.m
//  TableViewAnimationKit-OC
//
//  Created by msy on 2017/9/11.
//  Copyright © 2017年 com.cn.fql. All rights reserved.
//

#import "UITableView+AnimationKit.h"
#import "TableViewAnimationKit.h"

@implementation UITableView (AnimationKit)

- (void)showTableViewAnimationWithType:(TableViewAnimationType)animationType{
    [TableViewAnimationKit showWithAnimationType:animationType tableView:self];
}

@end
