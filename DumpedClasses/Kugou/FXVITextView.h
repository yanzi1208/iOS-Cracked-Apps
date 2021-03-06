//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UILabel;

@interface FXVITextView : UITextView
{
    UILabel *_holderLabel;
    NSString *_placeHolder;
}

@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (void)updatePlaceHolder;
- (void)textViewTextDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)registerNotification;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

