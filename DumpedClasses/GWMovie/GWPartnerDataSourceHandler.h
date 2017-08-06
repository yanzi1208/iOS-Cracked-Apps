//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBasePartnerDataSourceHandler.h"

@class GWPartnerViewController;

@interface GWPartnerDataSourceHandler : GWBasePartnerDataSourceHandler
{
    GWPartnerViewController *_visiblePartnerController;
    GWPartnerViewController *_createPartnerController;
}

+ (_Bool)autoReginOrCancleNotification:(id)arg1;
+ (void)handlePushByTradeNo:(id)arg1 partnerType:(id)arg2;
+ (void)reginNotificationConfigWithModel:(id)arg1;
+ (id)timeoutNotificationConfigWithModel:(id)arg1;
+ (void)savePartnerClockArray;
+ (id)instance;
+ (id)showUserCenterPartnerController:(id)arg1;
+ (void)showInitPartnerController;
+ (void)fliterForceShowList:(id)arg1;
+ (_Bool)showPartnerControllerWhenActive;
+ (void)showPartnerController:(id)arg1 tradeNo:(id)arg2 partnerType:(unsigned long long)arg3;
+ (void)showPartnerController:(id)arg1;
+ (_Bool)nearbyCinema:(id)arg1;
+ (id)locationPartnerList;
+ (id)partnerListOnShow;
+ (void)clearPartnerListFromCache;
@property(nonatomic) __weak GWPartnerViewController *createPartnerController; // @synthesize createPartnerController=_createPartnerController;
@property(nonatomic) __weak GWPartnerViewController *visiblePartnerController; // @synthesize visiblePartnerController=_visiblePartnerController;
- (void).cxx_destruct;
- (void)requestPushSettingByTradeNo:(id)arg1 partnerType:(unsigned long long)arg2 selectStatus:(_Bool)arg3;
- (void)cancelAllLocalNotification;
- (void)cancelAllLocalNotificationWithKey:(id)arg1;
- (void)cancelLocalNotificationOnMainList:(id)arg1;
- (void)cancelLocalNotificationExceptList:(id)arg1 withKey:(id)arg2;
- (void)logoutSuccess:(id)arg1;
- (void)loginScuess:(id)arg1;
- (void)homeViewLoadSuccess:(id)arg1;
- (void)resetReginNotification;
- (void)relpaceListWithNewList:(id)arg1 isAllPartner:(_Bool)arg2;
- (void)requestFullSinglePartner;
- (void)handleLoginSuccess:(id)arg1 withReadCache:(_Bool)arg2;
- (void)savePartnerArray;
- (void)handleLocationChanged:(id)arg1;
- (void)handleRefreshPartner:(id)arg1;
- (id)init;
- (void)dealloc;

@end
