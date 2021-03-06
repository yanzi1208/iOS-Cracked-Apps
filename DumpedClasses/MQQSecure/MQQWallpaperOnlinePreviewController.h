//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQWallpaperPreviewController.h"

#import "MQQSharkRequestDelegate-Protocol.h"
#import "MQQWallpaperImageViewDelegate-Protocol.h"

@class MQQButton, MQQProgressHUD, MQQWallpaperCategory, MQQWallpaperListRequest, MQQWallpaperPreviewMoreView, NSString;
@protocol MQQWallpaperOnlinePreviewControllerDelegate;

@interface MQQWallpaperOnlinePreviewController : MQQWallpaperPreviewController <MQQWallpaperImageViewDelegate, MQQSharkRequestDelegate>
{
    MQQButton *_aboutButton;
    _Bool _isLoadingData;
    _Bool _reachedTheEnd;
    id <MQQWallpaperOnlinePreviewControllerDelegate> _delegate;
    MQQWallpaperCategory *_category;
    MQQWallpaperListRequest *_listRequest;
    MQQWallpaperPreviewMoreView *_moreView;
    MQQProgressHUD *_noMoreProgressView;
}

@property(retain, nonatomic) MQQProgressHUD *noMoreProgressView; // @synthesize noMoreProgressView=_noMoreProgressView;
@property(retain, nonatomic) MQQWallpaperPreviewMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) MQQWallpaperListRequest *listRequest; // @synthesize listRequest=_listRequest;
@property(retain, nonatomic) MQQWallpaperCategory *category; // @synthesize category=_category;
@property(nonatomic) _Bool reachedTheEnd; // @synthesize reachedTheEnd=_reachedTheEnd;
@property(nonatomic) id <MQQWallpaperOnlinePreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)hideMoreProgressView:(_Bool)arg1;
- (void)showMoreProgressView;
- (void)requestMoreWallpapers;
- (id)failedImageForWPImageView:(id)arg1;
- (void)wpImageViewDidFailToLoadImage:(id)arg1;
- (void)wpImageView:(id)arg1 didLoadImage:(id)arg2;
- (void)aboutButtonClicked:(id)arg1;
- (void)showFailedProgressWithMessage:(id)arg1;
- (_Bool)hasSavedCurrentWallpaper;
- (void)didSaveWallpapers:(id)arg1;
- (id)willSaveWallpapers;
- (void)enumerateSaveTypeUsingBlock:(CDUnknownBlockType)arg1;
- (void)didScrollOverRightEdge;
- (id)imageCellForIndex:(long long)arg1;
- (void)currentIndexWillChange:(long long)arg1;
- (long long)colorTypeOfCurrentWallpaper;
- (long long)numberOfPages;
- (void)updateDisplayEx:(id)arg1;
- (id)currentImageLoaded:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCategory:(id)arg1 wallpapers:(id)arg2 currentWallpaper:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

