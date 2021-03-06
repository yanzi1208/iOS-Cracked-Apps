//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLOnlineConfigBaseModel.h"

@class NSArray, NSMutableDictionary;

@interface QLIOSSearchIndexModel : QLOnlineConfigBaseModel
{
    NSMutableDictionary *_dicImgCaches;
    NSArray *_aryDatas;
    double _lastTimeInterval;
}

@property(nonatomic) double lastTimeInterval; // @synthesize lastTimeInterval=_lastTimeInterval;
@property(retain) NSArray *aryDatas; // @synthesize aryDatas=_aryDatas;
- (void).cxx_destruct;
- (id)DataFromURL:(id)arg1 with:(id)arg2;
- (void)resetSeachKeywords;
- (int)onlineConfigRefreshPoint;
- (id)getArrayValueForKey:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)refreshModel;
- (void)doRefreshModel;
- (id)init;

@end

