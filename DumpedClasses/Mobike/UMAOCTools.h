//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMAOCTools : NSObject
{
}

+ (id)blackPrefix:(id)arg1;
+ (void)swizzleSelector:(SEL)arg1 altSelector:(SEL)arg2;
+ (void)setupHook;
- (void)hook_viewDidDisappear:(_Bool)arg1;
- (void)hook_viewDidAppear:(_Bool)arg1;

@end
