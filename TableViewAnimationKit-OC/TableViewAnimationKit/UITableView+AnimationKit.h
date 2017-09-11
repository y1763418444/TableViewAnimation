//
//  UITableView+AnimationKit.h
//  TableViewAnimationKit-OC
//
//  Created by msy on 2017/9/11.
//  Copyright © 2017年 com.cn.fql. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewAnimationKitConfig.h"

@interface UITableView (AnimationKit)

/**
 show the tableView animation 
 
 @param animationType type of animation to show TableView
 */
- (void)showTableViewAnimationWithType:(TableViewAnimationType )animationType;
@end
