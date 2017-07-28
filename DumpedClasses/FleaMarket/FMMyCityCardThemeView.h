//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMComponentViewProtocol.h"

@class FMImageView, NSString, UILabel;

@interface FMMyCityCardThemeView : UIView <FMComponentViewProtocol>
{
    FMImageView *_leftImgView;
    FMImageView *_upImgView;
    FMImageView *_downImgView;
    UILabel *_leftTitleLabel;
    UILabel *_leftSubTitleLabel;
    UILabel *_upTitleLabel;
    UILabel *_upSubTitleLabel;
    UILabel *_downTitleLabel;
    UILabel *_downSubTitleLabel;
    UIView *_leftBgView;
    UIView *_upBgView;
    UIView *_downBgView;
    UIView *_grayBgView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIView *grayBgView; // @synthesize grayBgView=_grayBgView;
@property(retain, nonatomic) UIView *downBgView; // @synthesize downBgView=_downBgView;
@property(retain, nonatomic) UIView *upBgView; // @synthesize upBgView=_upBgView;
@property(retain, nonatomic) UIView *leftBgView; // @synthesize leftBgView=_leftBgView;
@property(retain, nonatomic) UILabel *downSubTitleLabel; // @synthesize downSubTitleLabel=_downSubTitleLabel;
@property(retain, nonatomic) UILabel *downTitleLabel; // @synthesize downTitleLabel=_downTitleLabel;
@property(retain, nonatomic) UILabel *upSubTitleLabel; // @synthesize upSubTitleLabel=_upSubTitleLabel;
@property(retain, nonatomic) UILabel *upTitleLabel; // @synthesize upTitleLabel=_upTitleLabel;
@property(retain, nonatomic) UILabel *leftSubTitleLabel; // @synthesize leftSubTitleLabel=_leftSubTitleLabel;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(retain, nonatomic) FMImageView *downImgView; // @synthesize downImgView=_downImgView;
@property(retain, nonatomic) FMImageView *upImgView; // @synthesize upImgView=_upImgView;
@property(retain, nonatomic) FMImageView *leftImgView; // @synthesize leftImgView=_leftImgView;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
