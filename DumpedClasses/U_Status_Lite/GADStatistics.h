//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADStatisticsCore, GADTimingManager;

@interface GADStatistics : NSObject
{
    GADStatisticsCore *_statisticsCore;
    GADTimingManager *_timingManager;
}

- (void).cxx_destruct;
- (void)endTimingNamed:(id)arg1;
- (void)startTimingNamed:(id)arg1 withExplicitEnd:(_Bool)arg2;
- (id)timingNamed:(id)arg1;

@end

