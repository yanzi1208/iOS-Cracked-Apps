//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SctxRoutePassengerConfigModel;

@interface SctxRoutePassengerConfig : NSObject
{
    SctxRoutePassengerConfigModel *_globalConfig;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SctxRoutePassengerConfigModel *globalConfig; // @synthesize globalConfig=_globalConfig;
- (void).cxx_destruct;
- (void)updateSCTXRoutePassengerGlobalConfig:(CDUnknownBlockType)arg1;

@end
