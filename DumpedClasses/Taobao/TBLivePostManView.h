//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface TBLivePostManView : UIView
{
    UILabel *_postContent;
}

@property(retain, nonatomic) UILabel *postContent; // @synthesize postContent=_postContent;
- (void).cxx_destruct;
- (void)addAnimationWithPostionX:(double)arg1 width:(double)arg2;
- (void)delayPostManHandler;
- (void)refreshWithData:(id)arg1;
- (void)setupUIView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

