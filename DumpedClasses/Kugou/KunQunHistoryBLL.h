//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KunQunHistoryBLL : NSObject
{
}

- (id)p_handleSomeKuqunWithDic:(id)arg1;
- (id)p_handleMyKuqunResponse:(id)arg1;
- (void)netWorkKqGroupHistoryInfoWithGroupids:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 withFailBlock:(CDUnknownBlockType)arg3;
- (_Bool)updateKqGroupHistoryInfoList:(id)arg1;
- (id)getLocalKqGroupHistoryInfoWithPageSize:(int)arg1 andPage:(int)arg2 andUserId:(id)arg3;
- (id)getAllLocalKqGroupHistoryInfoWithUserId:(id)arg1;
- (unsigned long long)historyCountWithUid:(id)arg1;
- (_Bool)insertKqGroupHistoryToDB:(id)arg1;

@end
