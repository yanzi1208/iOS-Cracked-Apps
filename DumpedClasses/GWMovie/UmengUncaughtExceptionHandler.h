//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UmengUncaughtExceptionHandler : NSObject
{
    _Bool dismissed;
}

+ (id)signals;
+ (id)backtrace:(id)arg1;
- (void)handleException:(id)arg1;
- (void)validateAndSaveCriticalApplicationData:(id)arg1;

@end
