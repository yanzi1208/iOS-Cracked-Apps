//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMFavorUserDO>;

@interface FMFavorUserListDO : NSObject
{
    _Bool _nextPage;
    NSArray<FMFavorUserDO> *_items;
    long long _totalCount;
}

@property(nonatomic) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSArray<FMFavorUserDO> *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

