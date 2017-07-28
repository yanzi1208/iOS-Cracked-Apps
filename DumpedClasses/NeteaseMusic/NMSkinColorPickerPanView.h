//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface NMSkinColorPickerPanView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_line;
    _Bool _showPalette;
    UITableView *_tableView;
    id <NMSkinColorPickerPanViewDelegate> _delegate;
    Class _cellClass;
    unsigned long long _choosedColorIndex;
    NSArray *_colorArray;
}

@property(nonatomic) _Bool showPalette; // @synthesize showPalette=_showPalette;
@property(copy, nonatomic) NSArray *colorArray; // @synthesize colorArray=_colorArray;
@property(nonatomic) unsigned long long choosedColorIndex; // @synthesize choosedColorIndex=_choosedColorIndex;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(nonatomic) __weak id <NMSkinColorPickerPanViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)refreshPickStateForColor:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic) _Bool showSeparator;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithColors:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
