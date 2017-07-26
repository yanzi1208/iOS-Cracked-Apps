//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZLVLikeAnimationTaskDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIView;

@interface QZLVLikeAnimationController : NSObject <QZLVLikeAnimationTaskDelegate>
{
    NSTimer *_likeTimer;
    long long _animaLikeNum;
    long long _maxPraiseNum;
    long long _animaLikeNumDone;
    long long _likeNumLoop;
    long long _colorNum;
    NSTimer *_likeCountTimer;
    long long _normalLikeCount;
    NSMutableArray *_tasks;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)addLikeAnimationFinished:(id)arg1;
- (void)addLikeAnimation:(id)arg1 Type:(long long)arg2 isRandomColor:(_Bool)arg3;
- (void)anims:(id)arg1 addMajorityType:(unsigned long long)arg2 majorityCount:(long long)arg3 minorityType:(unsigned long long)arg4 minorityCount:(long long)arg5;
- (void)handlePlayLikeAnim:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
