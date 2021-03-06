//
//  GoodsOrderPayViewController.h
//  hbbciphone
//
//  Created by Handbbc on 2017/11/10.
//  Copyright © 2017年 hbbc. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^timeBlock)(NSString *lockTime);
typedef void(^moneyBlock)(NSString *money);
typedef void (^tittleBlock)(NSString *ttlle);

@interface GoodsOrderPayViewController : UIViewController


@property (nonatomic,strong)id responsBody;
@property (nonatomic,strong)NSString *GoodsSNID;
@property (nonatomic,strong)NSString *money;
@property (nonatomic,strong)NSString *oldTime;
@property (nonatomic,assign) BOOL isPlan;


@property (nonatomic,copy)timeBlock lockTimeBlock;
@property (nonatomic,copy)moneyBlock getMoneyBlock;
@property (nonatomic,copy)tittleBlock ttlleBlock;
@end
