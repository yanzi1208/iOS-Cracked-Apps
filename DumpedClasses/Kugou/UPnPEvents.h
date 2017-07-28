//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BasicHTTPServer_ObjC_Observer.h"

@class BasicHTTPServer_ObjC, NSMutableDictionary, NSRecursiveLock, NSTimer, UPnPEventParser;

@interface UPnPEvents : NSObject <BasicHTTPServer_ObjC_Observer>
{
    NSMutableDictionary *mEventSubscribers;
    BasicHTTPServer_ObjC *server;
    UPnPEventParser *parser;
    NSRecursiveLock *mMutex;
    NSTimer *mTimeoutTimer;
}

- (void)manageSubscriptionTimeouts:(id)arg1;
- (_Bool)response:(id)arg1 returncode:(int *)arg2 headers:(id)arg3 body:(id)arg4;
- (_Bool)request:(id)arg1 method:(id)arg2 path:(id)arg3 version:(id)arg4 headers:(id)arg5 body:(id)arg6;
- (_Bool)canProcessMethod:(id)arg1 requestMethod:(id)arg2;
- (void)unsubscribe:(id)arg1 withSID:(id)arg2;
- (void)subscribe:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscriptionTimeOutTimer;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end
