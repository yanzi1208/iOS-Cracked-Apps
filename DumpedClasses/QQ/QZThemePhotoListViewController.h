//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZCommonPhotoListViewController.h"

#import "QZDatePickerWithToolBarViewDelegate.h"
#import "QZPhotoModuleDownloaderInterfaceDelegate.h"

@class NSMutableDictionary, NSString, QZDatePickerWithToolBarView, QZEventPhotoModel, UIView;

@interface QZThemePhotoListViewController : QZCommonPhotoListViewController <QZDatePickerWithToolBarViewDelegate, QZPhotoModuleDownloaderInterfaceDelegate>
{
    QZEventPhotoModel *_selectedEventModel;
    long long _untimePhotoTotalCount;
    NSMutableDictionary *_untimePhotoDict;
    _Bool _shouldLoadUntimePhoto;
    _Bool _firstLoadUntimePhoto;
    long long _loadedUntimePhotoCount;
    QZDatePickerWithToolBarView *_datePickerWithToolBar;
    UIView *_loverFooterView;
}

@property(retain, nonatomic) QZEventPhotoModel *selectedEventModel; // @synthesize selectedEventModel=_selectedEventModel;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onClickPickerDone:(double)arg1;
- (void)datePickerShouldHide;
- (void)datePickerDidShow;
- (void)createDatePicker;
- (void)onEditClickTimeModify:(id)arg1;
- (void)onClickUntimeEventConfirm:(id)arg1;
- (void)onClickUntimeCollectionConfirm;
- (void)onClickMoreUntimePhotos;
- (void)onClickEventDescModify:(id)arg1;
- (long long)restUntimeNum;
- (_Bool)hasMoreUntimePhotos;
- (long long)currentLoadedUntimePhotoCount;
- (void)addObjectsForNormalStatus:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)updateParamForChild:(id)arg1;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (id)loverFooterView;
- (void)checkFootViewState;
- (_Bool)requestPhotoList:(_Bool)arg1;
- (_Bool)onHasMore;
- (_Bool)onLoadMore;
- (id)bottomBarArray;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
