//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQReadInJoyUGCUploadViewController.h"

#import "UINavigationControllerDelegate.h"

@class AVAsset, NSString, QQReadInJoyUGCUploadVideoInfoModel, QQUGCVideoPickerWrapper, QQVideoUGCUploadArticleView;

@interface QQReadInJoyUGCVideoPublishViewController : QQReadInJoyUGCUploadViewController <UINavigationControllerDelegate>
{
    int _videoEntry;
    AVAsset *_avasset;
    QQReadInJoyUGCUploadVideoInfoModel *_selectedVideo;
    QQReadInJoyUGCUploadVideoInfoModel *_compressedVideo;
    QQUGCVideoPickerWrapper *_videoPicker;
    QQVideoUGCUploadArticleView *_videoPreviewView;
    NSString *_coverImagePath;
    NSString *_videoTitle;
}

@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) NSString *coverImagePath; // @synthesize coverImagePath=_coverImagePath;
@property(retain, nonatomic) QQVideoUGCUploadArticleView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) QQUGCVideoPickerWrapper *videoPicker; // @synthesize videoPicker=_videoPicker;
@property(retain, nonatomic) QQReadInJoyUGCUploadVideoInfoModel *compressedVideo; // @synthesize compressedVideo=_compressedVideo;
@property(retain, nonatomic) QQReadInJoyUGCUploadVideoInfoModel *selectedVideo; // @synthesize selectedVideo=_selectedVideo;
@property(retain, nonatomic) AVAsset *avasset; // @synthesize avasset=_avasset;
@property(nonatomic) int videoEntry; // @synthesize videoEntry=_videoEntry;
- (void).cxx_destruct;
- (void)onClickExpressionBtn;
- (void)refreshArticleViewLayout;
- (void)sendUGC;
- (void)onBiuClick:(id)arg1;
- (_Bool)isSendBtnShouldEnable;
- (void)onClickCancelUpload;
- (void)onLeftButton:(id)arg1;
- (void)delayCheckCommitState:(id)arg1;
- (void)cancelPublish;
- (void)myPresentMoviePlayerViewControllerAnimated:(id)arg1 aliasSelf:(id)arg2;
- (void)myPushViewControllerAnimated:(id)arg1 aliasSelf:(id)arg2;
- (void)presentInViewController:(id)arg1;
- (void)showVideoPreviewWithPath:(id)arg1 andText:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)chooseImage;
- (id)biuArticleView;
- (void)SetSelectedAndUploadVideoInfo:(id)arg1 compressedVideo:(id)arg2 compressPics:(id)arg3 asset:(id)arg4 title:(id)arg5;
- (void)checkAndPopPreviousView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithJSWebQuery:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
