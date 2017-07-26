//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ServiceConfig.h"

#import "JSONObjectCoding.h"

@class NSString;

@interface NetcastTVServiceConfig : ServiceConfig <JSONObjectCoding>
{
    NSString *_pairingCode;
}

@property(retain, nonatomic) NSString *pairingCode; // @synthesize pairingCode=_pairingCode;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)addObservers;
- (id)toJSONObject;
- (id)initWithJSONObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
