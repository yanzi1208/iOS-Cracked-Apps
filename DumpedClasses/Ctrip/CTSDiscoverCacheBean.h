//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSMutableArray, NSString;

@interface CTSDiscoverCacheBean : CTCacheBean
{
    _Bool _hasNext;
    _Bool _loadFailed;
    NSString *_viewState;
    NSMutableArray *_discoveryList;
    NSString *_headImage;
}

@property(nonatomic) _Bool loadFailed; // @synthesize loadFailed=_loadFailed;
@property(copy, nonatomic) NSString *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) NSMutableArray *discoveryList; // @synthesize discoveryList=_discoveryList;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(copy, nonatomic) NSString *viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;
- (void)initCache;

@end

