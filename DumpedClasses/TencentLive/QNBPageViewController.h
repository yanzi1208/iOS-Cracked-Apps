//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QNBPageCacheDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSString, QNBPageCache, QNBPageScrollView;

@interface QNBPageViewController : UIViewController <UIScrollViewDelegate, QNBPageCacheDelegate>
{
    struct {
        unsigned int willTransitionFromIndex:1;
        unsigned int didTransitionFromIndex:1;
        unsigned int willSwitchFromIndex:1;
        unsigned int didSwitchFromIndex:1;
        unsigned int pageContentOffset:1;
    } _delegateFlags;
    id <QNBPageViewControllerDataSource> _dataSource;
    id <QNBPageViewControllerDelegate> _delegate;
    unsigned long long _pageCacheCountLimit;
    unsigned long long _preLoadLeftPage_count;
    unsigned long long _preLoadRightPage_count;
    QNBPageScrollView *_mainScrollView;
    long long _pageCount;
    long long _lastSelectIndex;
    long long _curSelectIndex;
    long long _guessToIndex;
    double _originOffsetX;
    QNBPageCache *_pageCache;
    NSMutableDictionary *_pageToEvicDic;
    struct CGSize _pageSize;
}

@property(retain, nonatomic) NSMutableDictionary *pageToEvicDic; // @synthesize pageToEvicDic=_pageToEvicDic;
@property(retain, nonatomic) QNBPageCache *pageCache; // @synthesize pageCache=_pageCache;
@property(nonatomic) double originOffsetX; // @synthesize originOffsetX=_originOffsetX;
@property(nonatomic) long long guessToIndex; // @synthesize guessToIndex=_guessToIndex;
@property(nonatomic) long long curSelectIndex; // @synthesize curSelectIndex=_curSelectIndex;
@property(nonatomic) long long lastSelectIndex; // @synthesize lastSelectIndex=_lastSelectIndex;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) QNBPageScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(nonatomic) unsigned long long preLoadRightPage_count; // @synthesize preLoadRightPage_count=_preLoadRightPage_count;
@property(nonatomic) unsigned long long preLoadLeftPage_count; // @synthesize preLoadLeftPage_count=_preLoadLeftPage_count;
@property(nonatomic) unsigned long long pageCacheCountLimit; // @synthesize pageCacheCountLimit=_pageCacheCountLimit;
@property(nonatomic) __weak id <QNBPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QNBPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)currentSubViewController;
- (void)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)__preLoadNeighbourPages;
- (void)__preLoadNeighbourPageWithIndex:(long long)arg1;
- (void)__cleanPageToEvicDic;
- (void)__updatePageViewAfterDragging:(id)arg1;
- (void)__pageSwitchAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)__pageSwitchWholeActions:(_Bool)arg1;
- (void)__pageSwitchEndAction;
- (void)__pageSwitchBeginAction:(_Bool)arg1;
- (void)__removeFromParentViewControllerForController:(id)arg1;
- (void)__addChildViewController:(id)arg1 inView:(id)arg2 withFrame:(struct CGRect)arg3;
- (struct CGRect)__calcViewControllerFrameWithIndex:(long long)arg1;
- (long long)__calcIndexWithOffset:(double)arg1 width:(double)arg2;
- (struct CGPoint)__calcOffsetWithIndex:(long long)arg1 maxWidth:(double)arg2;
- (void)__addChildControllerWithIndex:(long long)arg1;
- (id)__controllerAtIndex:(long long)arg1;
- (_Bool)__isPageIndexValided:(long long)arg1;
- (_Bool)__isPageSwitchValided;
- (void)__configScrollView;
- (void)__initialize;
- (void)showPageAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
