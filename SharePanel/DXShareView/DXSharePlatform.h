//
//  DXSharePlatform.h
//  SharePanel
//
//  Created by dyy on 2018/1/18.
//  Copyright © 2018年 d. All rights reserved.
//  分享平台信息

#import <Foundation/Foundation.h>
#import "DXShareView.h"

@interface DXSharePlatform : NSObject
@property (nonatomic,copy) NSString *iconStateNormal;
@property (nonatomic,copy) NSString *iconStateHighlighted;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,assign) DXShareType sharePlatform;

@end
