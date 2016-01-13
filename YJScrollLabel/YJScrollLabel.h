//
//  YJScrollLabel.h
//  YJScrollLabel
//
//  Created by zyc on 16/1/13.
//  Copyright © 2016年 zyc. All rights reserved.
//

#import <UIKit/UIKit.h>
/// 跑马灯label
@interface YJScrollLabel : UIView

/// 总是出现滚动动画， 当为NO时，文本显示全不滚动，显示不全才滚动 默认为NO
@property (nonatomic,assign) BOOL isAllwaysAnimate;
/// 和下一条文本显示的间隔，默认为半个自己的宽度
@property (nonatomic,assign) CGFloat space;
/// 字体颜色. 默认为白色
@property (nonatomic,retain) UIColor *textColor;
/// 滚动速度，由1-10，速度由慢到快，默认为5
@property (nonatomic,assign) NSInteger speed;
/**
 *  初始化方法
 *
 *  @param frame 尺寸
 *  @param title 要显示的文本
 *
 *  @return ALDScrollLabel对象
 */
-(instancetype)initWithFrame:(CGRect)frame title:(NSString *)title;

@end
