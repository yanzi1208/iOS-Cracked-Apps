//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CTHotelChatWaitingView : UIView
{
    CDUnknownBlockType _clickBlock;
    UILabel *_lbDesp;
    UILabel *_lbQuery;
    unsigned long long _loopTime;
    long long _waitingCount;
}

@property(nonatomic) long long waitingCount; // @synthesize waitingCount=_waitingCount;
@property(nonatomic) unsigned long long loopTime; // @synthesize loopTime=_loopTime;
@property(retain, nonatomic) UILabel *lbQuery; // @synthesize lbQuery=_lbQuery;
@property(retain, nonatomic) UILabel *lbDesp; // @synthesize lbDesp=_lbDesp;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)viewClicked;
- (void)updateWaitCount:(long long)arg1;
- (void)update:(id)arg1;
- (id)initWithWaitCount:(long long)arg1 viewClicked:(CDUnknownBlockType)arg2;

@end

