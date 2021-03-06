//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MomViewPickerDelegate.h"

@class MomViewPicker, MomWaterWaveView, NSMutableArray, NSString, UILabel;

@interface MomMilkingCupView : UIView <MomViewPickerDelegate>
{
    long long _capacity;
    MomViewPicker *_mlPicker;
    UILabel *_mlLabel;
    MomWaterWaveView *_waterView;
    NSMutableArray *_dataSource;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MomWaterWaveView *waterView; // @synthesize waterView=_waterView;
@property(retain, nonatomic) UILabel *mlLabel; // @synthesize mlLabel=_mlLabel;
@property(retain, nonatomic) MomViewPicker *mlPicker; // @synthesize mlPicker=_mlPicker;
@property(nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)viewPickerDidScroll:(long long)arg1;
- (void)viewPicker:(id)arg1 valueDidChanged:(id)arg2;
- (void)stop;
- (void)wave;
- (void)updateWaterWaveHeight;
- (void)setUpTimePicker:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

