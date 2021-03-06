//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBLigerProvidesConnectionLogger-Protocol.h"

@class NSString;
@protocol FBLigerProvidesNetworkStatusMonitor;

@interface FBLigerConnectionLogger : NSObject <FBLigerProvidesConnectionLogger>
{
    unsigned int _sampleWeight;
    id <FBLigerProvidesNetworkStatusMonitor> _monitor;
    struct unique_ptr<proxygen::ConnectionLogger, std::__1::default_delete<proxygen::ConnectionLogger>> _connLogger;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (struct TraceEventObserver *)getConnectionLogger;
- (void)logConnectionInfo:(vector_31c84f95 *)arg1;
- (id)initWithSampleWeight:(unsigned int)arg1 withNetworkStatusMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

