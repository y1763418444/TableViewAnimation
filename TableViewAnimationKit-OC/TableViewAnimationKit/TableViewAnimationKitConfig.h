//
//  TableViewAnimationKitConfig.h
//  TableViewAnimationKit-OC
//
//  Created by msy on 2017/9/11.
//  Copyright © 2017年 com.cn.fql. All rights reserved.
//

#ifndef TableViewAnimationKitConfig_h
#define TableViewAnimationKitConfig_h

typedef NS_ENUM(NSInteger,TableViewAnimationType){
    TableViewAnimationTypeMove = 0, //左到右出现
    TableViewAnimationTypeAlpha, //上到下慢慢显示
    TableViewAnimationTypeFall, //上到下掉落
    TableViewAnimationTypeShake, //左右交叉
    TableViewAnimationTypeOverTurn, //上到下翻转
    TableViewAnimationTypeToTop, //下到上叠加
    TableViewAnimationTypeSpringList, //上到下逐一显示
    TableViewAnimationTypeShrinkToTop, //下到上缩放
    TableViewAnimationTypeLayDown, //上到下逐级显示
    TableViewAnimationTypeRote, //上到下旋转
};

#endif /* TableViewAnimationKitConfig_h */
