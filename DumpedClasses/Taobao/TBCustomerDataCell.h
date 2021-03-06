//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class TBCustomerData, TBXSearchService, UIView;

@interface TBCustomerDataCell : UICollectionReusableView
{
    UIView *_bottomSplitView;
    TBCustomerData *_customerData;
    TBXSearchService *_xSearchService;
    id <TBSearchBaseCellContainer> _container;
}

+ (float)heigthOfComponent:(id)arg1;
@property(nonatomic) __weak id <TBSearchBaseCellContainer> container; // @synthesize container=_container;
@property(retain, nonatomic) TBXSearchService *xSearchService; // @synthesize xSearchService=_xSearchService;
@property(retain, nonatomic) TBCustomerData *customerData; // @synthesize customerData=_customerData;
@property(retain, nonatomic) UIView *bottomSplitView; // @synthesize bottomSplitView=_bottomSplitView;
- (void).cxx_destruct;
- (void)switchButtonClicked:(id)arg1;
- (void)babyNavAction:(id)arg1;
- (void)navAction:(id)arg1;
- (void)renderDataClosedUI;
- (void)renderEditBabyDataUI;
- (void)renderEditCarDataUI;
- (void)renderAddBabyDataUI;
- (void)renderAddCarDataUI;
- (void)configWithData:(id)arg1 andService:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

