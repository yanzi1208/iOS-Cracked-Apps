//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KrcShowPlane, KrcTimeMarking, NSTimer;

@interface KrcEaraSelectPlane : UIView
{
    _Bool _isSingletonRecord;
    _Bool _isFromFragmentRecord;
    _Bool _everMoved;
    _Bool _bottomAside;
    _Bool _topAside;
    long long _defaultStartIndex;
    long long _defaultEndIndex;
    KrcTimeMarking *_starTimeMarking;
    KrcTimeMarking *_endTimeMarking;
    long long _krcFragmentStartTime;
    CDUnknownBlockType _markBeginMovingBlock;
    CDUnknownBlockType _markEndMovingBlcok;
    CDUnknownBlockType _markPlayOrStopBlock;
    long long _defaultStartTime;
    long long _defaultEndTime;
    UIView *_bgLayer;
    KrcShowPlane *_oprationPlane;
    NSTimer *_timer;
    NSTimer *_playTimer;
}

@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(nonatomic) _Bool topAside; // @synthesize topAside=_topAside;
@property(nonatomic) _Bool bottomAside; // @synthesize bottomAside=_bottomAside;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) KrcShowPlane *oprationPlane; // @synthesize oprationPlane=_oprationPlane;
@property(nonatomic) _Bool everMoved; // @synthesize everMoved=_everMoved;
@property(retain, nonatomic) UIView *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(nonatomic) long long defaultEndTime; // @synthesize defaultEndTime=_defaultEndTime;
@property(nonatomic) long long defaultStartTime; // @synthesize defaultStartTime=_defaultStartTime;
@property(copy, nonatomic) CDUnknownBlockType markPlayOrStopBlock; // @synthesize markPlayOrStopBlock=_markPlayOrStopBlock;
@property(copy, nonatomic) CDUnknownBlockType markEndMovingBlcok; // @synthesize markEndMovingBlcok=_markEndMovingBlcok;
@property(copy, nonatomic) CDUnknownBlockType markBeginMovingBlock; // @synthesize markBeginMovingBlock=_markBeginMovingBlock;
@property(nonatomic) long long krcFragmentStartTime; // @synthesize krcFragmentStartTime=_krcFragmentStartTime;
@property(nonatomic) _Bool isFromFragmentRecord; // @synthesize isFromFragmentRecord=_isFromFragmentRecord;
@property(nonatomic) _Bool isSingletonRecord; // @synthesize isSingletonRecord=_isSingletonRecord;
@property(retain, nonatomic) KrcTimeMarking *endTimeMarking; // @synthesize endTimeMarking=_endTimeMarking;
@property(retain, nonatomic) KrcTimeMarking *starTimeMarking; // @synthesize starTimeMarking=_starTimeMarking;
@property(nonatomic) long long defaultEndIndex; // @synthesize defaultEndIndex=_defaultEndIndex;
@property(nonatomic) long long defaultStartIndex; // @synthesize defaultStartIndex=_defaultStartIndex;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changePlayButtonState;
- (void)updateFoTimer;
- (void)endMoveMarking;
- (void)beginMoveMarking;
- (void)stopTimer;
- (void)startTimer;
- (void)updateTheSelectedEara;
- (void)configureForOprationPlane:(id)arg1 gap:(double)arg2;
- (void)configureForOprationPlane:(id)arg1;
- (void)updateBgLayer;
- (void)hiddenSelectPlane:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)signForBottomAside;
- (void)signForTopAside;
- (id)init;

@end

