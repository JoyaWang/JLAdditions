//
//  UILabel+CZAddition.h
//
//  Created by 刘凡 on 16/4/21.
//  Copyright © 2016年 itcast. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (CZAddition)

/// 创建文本标签
///
/// @param text     文本
/// @param font 字体
/// @param color    颜色
///
/// @return UILabel
+ (instancetype)cz_labelWithText:(NSString *)text font:(UIFont)font color:(UIColor *)color;

@end
