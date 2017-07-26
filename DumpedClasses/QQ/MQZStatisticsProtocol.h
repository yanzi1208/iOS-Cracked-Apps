//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZStatisticsItem.h"

@class NSString;

@interface MQZStatisticsProtocol : MQZStatisticsItem
{
    NSString *_cmdID;
    NSString *_serverIP;
    NSString *_oDetails;
    long long _reqSize;
    int _rspSize;
    int _seq;
    int _port;
    long long _dType;
    NSString *_busiserverip;
}

@property(copy, nonatomic) NSString *busiserverip; // @synthesize busiserverip=_busiserverip;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int rspSize; // @synthesize rspSize=_rspSize;
@property(nonatomic) long long reqSize; // @synthesize reqSize=_reqSize;
@property(copy, nonatomic) NSString *cmdID; // @synthesize cmdID=_cmdID;
- (void).cxx_destruct;
- (void)endMonitor;
- (void)reportDownloadFlow:(long long)arg1 requestCmd:(id)arg2;
- (void)reportUploadFlow:(long long)arg1 requestCmd:(id)arg2;
- (id)init;

@end
