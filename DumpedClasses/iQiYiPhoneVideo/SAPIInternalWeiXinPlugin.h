//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAPIPlugin.h"

@class NSString;

@interface SAPIInternalWeiXinPlugin : SAPIPlugin
{
    id _plugin;
    NSString *_wxScope;
    NSString *_wxAppId;
}

@property(copy, nonatomic) NSString *wxAppId; // @synthesize wxAppId=_wxAppId;
@property(copy, nonatomic) NSString *wxScope; // @synthesize wxScope=_wxScope;
@property(retain, nonatomic) id plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)handleSuccessWithMKey:(id)arg1;
- (void)handleFailureWithErrorCode:(unsigned long long)arg1;
- (void)action_social_weixin_sso:(id)arg1;

@end

