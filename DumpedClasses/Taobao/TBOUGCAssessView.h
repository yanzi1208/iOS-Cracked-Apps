//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString;

@interface TBOUGCAssessView : UIView
{
    NSString *_selectedId;
    NSString *_textFont;
    NSString *_textColorNormal;
    NSString *_textColorSelected;
    NSMutableArray *_btnArray;
}

@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) NSString *textColorSelected; // @synthesize textColorSelected=_textColorSelected;
@property(retain, nonatomic) NSString *textColorNormal; // @synthesize textColorNormal=_textColorNormal;
@property(retain, nonatomic) NSString *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) NSString *selectedId; // @synthesize selectedId=_selectedId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

