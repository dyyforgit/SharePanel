//
//  ViewController.m
//  SharePanel
//
//  Created by dyy on 2018/1/23.
//  Copyright © 2018年 dyy. All rights reserved.
//

#warning 有问题站内回复

#import "ViewController.h"
#import "DXShareView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    DXShareView *shareView = [[DXShareView alloc] init];
    DXShareModel *shareModel = [[DXShareModel alloc] init];
//    shareModel.title = @"测试分享功能";
//    shareModel.descr = @"这里是描述内容";
//    shareModel.url = @"https://www.baidu.com";
//    UIImage *thumbImage = [UIImage imageNamed:@"weixin_allshare"];
//    shareModel.thumbImage = thumbImage;
    [shareView showShareViewWithDXShareModel:shareModel shareContentType:DXShareContentTypeImage];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
