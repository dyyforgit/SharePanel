//
//  DXShareModel.h
//  SharePanel
//
//  Created by dyy on 2018/1/18.
//  Copyright © 2018年 d. All rights reserved.
//  分享内容模型

#import <Foundation/Foundation.h>

@interface DXShareModel : NSObject
//分享标题 只分享文本是也用这个字段
@property (nonatomic,copy) NSString *title;
//描述内容
@property (nonatomic,copy) NSString *descr;
//缩略图
@property (nonatomic,strong) id thumbImage;
//链接
@property (nonatomic,copy) NSString *url;

@end
