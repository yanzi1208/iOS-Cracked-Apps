//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTaoPasswordBaseView.h"

@class UIButton, UILabel;

@interface TBTaoPasswordLoadingView : TBTaoPasswordBaseView
{
    UILabel *_textLabel;
    UIButton *_closeButton;
    CDUnknownBlockType _buttonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)closeLoadingView;
- (id)init;

@end

