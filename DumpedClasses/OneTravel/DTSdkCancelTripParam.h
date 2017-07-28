//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTSdkBaseParam.h"

@class NSString;

@interface DTSdkCancelTripParam : DTSdkBaseParam
{
    NSString *_orderId;
    long long _cancelTime;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long cancelTime; // @synthesize cancelTime=_cancelTime;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)buildParams;
- (id)responseClass;
- (unsigned long long)requestMethod;
- (id)apiPath;
- (id)apiHost;
- (id)init;

@end
