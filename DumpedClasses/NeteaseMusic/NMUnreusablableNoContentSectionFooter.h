//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMNoContentSectionFooterProtocol.h"

@class NSString, UIButton, UILabel;

@interface NMUnreusablableNoContentSectionFooter : UIView <NMNoContentSectionFooterProtocol>
{
    UILabel *_textLabel;
    UILabel *_subTextLabel;
    UIButton *_subButton;
}

@property(retain, nonatomic) UIButton *subButton; // @synthesize subButton=_subButton;
@property(retain, nonatomic) UILabel *subTextLabel; // @synthesize subTextLabel=_subTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

