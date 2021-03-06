//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOrderRecCom.h"

@class NSURLSessionDataTask, ONETimer;

@interface SDriverOrderRecUnit : SOrderRecCom
{
    _Bool _orderRecovering;
    ONETimer *_timer;
    NSURLSessionDataTask *_orderRecoverSession;
}

@property(nonatomic) _Bool orderRecovering; // @synthesize orderRecovering=_orderRecovering;
@property(retain, nonatomic) NSURLSessionDataTask *orderRecoverSession; // @synthesize orderRecoverSession=_orderRecoverSession;
@property(retain, nonatomic) ONETimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)switchSDriverPageByOrderModel:(id)arg1 isFromOrderList:(_Bool)arg2;
- (void)gotoEndServicePage:(_Bool)arg1;
- (void)handleOrder:(id)arg1 isFromOrderList:(_Bool)arg2 beforeJumpOrFailCallback:(CDUnknownBlockType)arg3;
- (void)processRequestFailedCase;
- (void)restoreOrderWithOrder:(id)arg1 fromNewVersion:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)showRecoverAlertWithOrder:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)handleRecoverOrder:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)handleMainMenuOrder:(id)arg1;

@end

