//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue;

@interface FXBllManager : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_keyOperDic;
}

+ (id)shareInstance;
+ (void)handleError:(id)arg1 error:(id)arg2;
+ (void)cancelOperWithKey:(id)arg1;
+ (void)startOperWithKey:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)startOperWithKeyArray:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)makeTheOperation:(id)arg1 dependency:(id)arg2;
+ (id)createOperationInMain:(CDUnknownBlockType)arg1;
+ (id)createOperationWaitFor:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
+ (id)createOperation:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)executeInMainQueue:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableDictionary *keyOperDic; // @synthesize keyOperDic=_keyOperDic;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)handleError:(id)arg1 error:(id)arg2;
- (void)toCancelOperWithKey:(id)arg1;
- (void)cancelOperWithKey:(id)arg1;
- (void)toStartOperWithKey:(id)arg1 repeatPool:(id)arg2 complete:(id)arg3;
- (void)startOperWithKey:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)startOperWithKeyArray:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)makeTheOperation:(id)arg1 dependency:(id)arg2;
- (id)createOperationInMain:(CDUnknownBlockType)arg1;
- (id)createOperationWaitFor:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (id)createOperation:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
