//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCDataSourceProtocol.h"

@class NSString;

@protocol MCGroupFixDataSourceProtocol <MCDataSourceProtocol>
- (void)loadNoticeByCCode:(NSString *)arg1 requestData:(NSString *)arg2 apiName:(NSString *)arg3 apiVersion:(NSString *)arg4;
- (void)removeDelegate:(id <MCGroupFixDataSourceDelegate>)arg1;
- (void)addDelegate:(id <MCGroupFixDataSourceDelegate>)arg1;
@end

