//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSMutableArray, NSOperationQueue, NSString;

@interface MATraceManager : NSObject <CLLocationManagerDelegate>
{
    NSOperationQueue *_operationQueue;
    CLLocationManager *_locManager;
    NSMutableArray *_locationsBuffer;
    CDUnknownBlockType _traceLocationCallback;
    long long _autoTraceQueryCount;
    long long _autoTraceQueryId;
    long long _autoTraceRequestCallbackId;
    NSMutableArray *_pendingQueryArray;
    NSMutableArray *_pendingOperations;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain, nonatomic) NSMutableArray *pendingQueryArray; // @synthesize pendingQueryArray=_pendingQueryArray;
@property(nonatomic) long long autoTraceRequestCallbackId; // @synthesize autoTraceRequestCallbackId=_autoTraceRequestCallbackId;
@property(nonatomic) long long autoTraceQueryId; // @synthesize autoTraceQueryId=_autoTraceQueryId;
@property(nonatomic) long long autoTraceQueryCount; // @synthesize autoTraceQueryCount=_autoTraceQueryCount;
@property(copy, nonatomic) CDUnknownBlockType traceLocationCallback; // @synthesize traceLocationCallback=_traceLocationCallback;
@property(retain, nonatomic) NSMutableArray *locationsBuffer; // @synthesize locationsBuffer=_locationsBuffer;
@property(retain, nonatomic) CLLocationManager *locManager; // @synthesize locManager=_locManager;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)tryToTriggerAutoQueryCallback;
- (void)doQueryWith:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)requestLocationAuthorizationIfNeed;
- (void)resetAutoQueryStatus;
- (void)stopTrace;
- (void)startTraceWith:(CDUnknownBlockType)arg1;
- (id)queryProcessedTraceWith:(id)arg1 type:(unsigned long long)arg2 processingCallback:(CDUnknownBlockType)arg3 finishCallback:(CDUnknownBlockType)arg4 failedCallback:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
