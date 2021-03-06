//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBOYoutuFilterOp, NSMutableDictionary;

@interface MQQYoutuCacheManager : NSObject
{
    DBOYoutuFilterOp *_db;
    NSMutableDictionary *_cachedDictionary;
}

+ (id)shareManager;
- (void)clearMemoryCache;
- (_Bool)removeCachePhotoItemsWithType:(long long)arg1;
- (_Bool)removeCachePhotoItemsWithIDs:(id)arg1 cacheType:(long long)arg2;
- (_Bool)addCachePhotoItems:(id)arg1;
- (id)countsForEachCacheItemType;
- (id)cachedPhotoItemsWithAssetIdentifiers:(id)arg1 filterDate:(id)arg2 cacheType:(long long)arg3;
- (id)cachedPhotoItemsWithAssetIdentifiers:(id)arg1 minFileSize:(long long)arg2 cacheType:(long long)arg3;
- (id)cachedPhotoItemsWithAssetIdentifiers:(id)arg1 filterType:(long long)arg2 cacheType:(long long)arg3;
- (id)cachedPhotoItemsWithCacheType:(long long)arg1;
- (void)closeDatabase;
- (id)database;
- (void)dealloc;
- (id)init;

@end

