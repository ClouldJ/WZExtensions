//
//  UILabel+ChangeLineSpaceing.h
//  HappyChildren
//
//  Created by WillyZhao on 2017/5/25.
//  Copyright © 2017年 WillyZhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (ChangeLineSpaceing)

/**
 *  改变行间距
 */
- (void)changeLineSpaceForLabel:(UILabel *)label WithSpace:(float)space;

/**
 *  改变字间距
 */
- (void)changeWordSpaceForLabel:(UILabel *)label WithSpace:(float)space;

/**
 *  改变行间距和字间距
 */
- (void)changeSpaceForLabel:(UILabel *)label withLineSpace:(float)lineSpace WordSpace:(float)wordSpace;

@end
