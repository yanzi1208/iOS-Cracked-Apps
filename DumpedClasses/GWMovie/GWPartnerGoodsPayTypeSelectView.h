//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, UIButton, UILabel;
@protocol GWPartnerGoodsPayTypeSelectViewDelegate;

@interface GWPartnerGoodsPayTypeSelectView : UIView
{
    UIButton *_payBackButton;
    UILabel *_mobileLabel;
    id <GWPartnerGoodsPayTypeSelectViewDelegate> _delegate;
    NSArray *_payTypes;
    UIView *_contentView;
    UIView *_payButtonView;
    NSDictionary *_payIconDic;
}

@property(retain, nonatomic) NSDictionary *payIconDic; // @synthesize payIconDic=_payIconDic;
@property(retain, nonatomic) UIView *payButtonView; // @synthesize payButtonView=_payButtonView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *payTypes; // @synthesize payTypes=_payTypes;
@property(nonatomic) __weak id <GWPartnerGoodsPayTypeSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UIButton *payBackButton; // @synthesize payBackButton=_payBackButton;
- (void).cxx_destruct;
- (void)startHideAnimation:(_Bool)arg1;
- (void)startShowAnimation:(_Bool)arg1;
- (void)payButtonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
