//
//  DXShareView.h
//  SharePanel
//
//  Created by dyy on 2018/1/18.
//  Copyright © 2018年 d. All rights reserved.
//  分享面板及分享功能的实现

#import <UIKit/UIKit.h>
#import "DXShareModel.h"

typedef NS_ENUM(NSUInteger , DXShareType) {
    DXShareTypeWechatSession    = 1,               //微信好友
    DXShareTypeWechatTimeline   = 2,               //微信朋友圈
    DXShareTypeQQ               = 3,               //QQ好友
    DXShareTypeQzone            = 4,               //QQ空间
    DXShareTypeUrl              = 5,              //链接
};

typedef NS_ENUM(NSUInteger , DXShareContentType) {
    DXShareContentTypeText    = 1,               //文本分享
    DXShareContentTypeImage   = 2,               //图片分享
    DXShareContentTypeLink    = 3,               //链接分享
    //...其它自行扩展
};

@interface DXShareView : UIView

/**
 分享视图弹窗

 @param shareModel 分享的数据
 @param shareContentType 分享类型
 */
-(void)showShareViewWithDXShareModel:(DXShareModel*)shareModel shareContentType:(DXShareContentType)shareContentType;

@end
