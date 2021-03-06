//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REAuthViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class GIFTPRODGiftCrowdDetailResult, NSDictionary, NSString, REBaseResultViewController, REDataEngine, REReceivePopView;

@interface REPrepareDataManager : NSObject <REAuthViewControllerDelegate, UIAlertViewDelegate>
{
    _Bool _exit;
    REDataEngine *_dataEngine;
    NSDictionary *_options;
    REReceivePopView *_popView;
    GIFTPRODGiftCrowdDetailResult *_result;
    REBaseResultViewController *_resultVC;
}

+ (id)shareInstance;
@property(retain, nonatomic) REBaseResultViewController *resultVC; // @synthesize resultVC=_resultVC;
@property(retain, nonatomic) GIFTPRODGiftCrowdDetailResult *result; // @synthesize result=_result;
@property(retain, nonatomic) REReceivePopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) REDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(nonatomic) _Bool exit; // @synthesize exit=_exit;
- (void).cxx_destruct;
- (void)onAuthenticationSuccess:(id)arg1;
- (void)runUnpackAnimationForNormalHelper:(id)arg1;
- (void)runUnpackAnimationForNormal:(id)arg1;
- (void)runUnpackAnimationForDIY:(id)arg1;
- (void)runUnpackAnimationForResult:(id)arg1;
- (void)handleAuth;
- (void)gotoUserCertify;
- (void)gotoAuthPage;
- (void)gotoEnvelopeResultController:(id)arg1 animated:(_Bool)arg2;
- (void)lookUpFriendsDetail:(id)arg1;
- (void)gotoReceivedDetail:(id)arg1;
- (void)gotoAuthTimeoutDetail:(id)arg1;
- (void)displayOverdue:(id)arg1 animated:(_Bool)arg2;
- (void)displayNoCoupon:(id)arg1 animated:(_Bool)arg2;
- (void)displayReadyToReceive:(id)arg1 animated:(_Bool)arg2;
- (void)unpackRPC;
- (void)unpackRPCWithProgress:(_Bool)arg1;
- (void)requestDataRPC;
- (void)startAppNotification:(id)arg1;
- (void)exitRedEnvelopeAppNotification:(id)arg1;
- (void)handleWidthOptions:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

