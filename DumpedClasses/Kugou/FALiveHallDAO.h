//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FALiveHallDAO : NSObject
{
}

+ (id)getLiveListByLevel:(long long)arg1 WithPage:(long long)arg2 withpageSize:(long long)arg3 sort:(unsigned long long)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (id)getLiveListByStyle:(long long)arg1 WithPage:(long long)arg2 withpageSize:(long long)arg3 sort:(unsigned long long)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (id)getLiveListByType:(long long)arg1 WithPage:(long long)arg2 withpageSize:(long long)arg3 sort:(unsigned long long)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (id)getLiveListByFeatured:(long long)arg1 WithPage:(long long)arg2 withpageSize:(long long)arg3 sort:(unsigned long long)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (id)getSingerArtistsListWithPage:(long long)arg1 withpageSize:(long long)arg2 sort:(unsigned long long)arg3 succeed:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (id)getProvinceArtistsWithAreaV2:(long long)arg1 withPage:(long long)arg2 withpageSize:(long long)arg3 sort:(unsigned long long)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (id)getSameCityArtistsListWithCityId:(long long)arg1 withCityName:(id)arg2 withPage:(long long)arg3 withpageSize:(long long)arg4 sort:(unsigned long long)arg5 succeed:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;
+ (id)getRoomAreaListWithPositionIdV2:(long long)arg1 areaCode:(long long)arg2 page:(long long)arg3 pageSize:(long long)arg4 sort:(unsigned long long)arg5 succeed:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;
+ (id)getLiveHallHotListWithPage:(long long)arg1 pageSize:(long long)arg2 succeed:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
+ (id)getLiveHallFollowListWithKugouId:(long long)arg1 page:(long long)arg2 pageSize:(long long)arg3 succeed:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;

@end
