//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, QQPageControl, QQRichKeyBoradUICollectionView;

@interface QQRichKeyBorad : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    QQRichKeyBoradUICollectionView *_collectionView;
    QQPageControl *_pageIndicator;
    struct KeyBoradCoordinate _keyBoradCoordinate;
    struct {
        _Bool _show;
        _Bool _animation;
    } _Flags;
    NSArray *_items;
    id <QQRichKeyBoradDelegate> _delegate;
    double _animationTime;
    unsigned long long _newFlags;
    _Bool _isGroupAnonymousMode;
    int _xo;
}

@property(retain, nonatomic) QQRichKeyBoradUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)hiddenAniamtion:(_Bool)arg1;
- (_Bool)showAnimation:(_Bool)arg1;
- (_Bool)isShow;
- (void)clearLocalState:(unsigned long long)arg1;
- (void)setLocalState:(_Bool)arg1 forFlag:(unsigned long long)arg2;
- (_Bool)localStateForFlag:(unsigned long long)arg1;
- (void)markRichControlWithFlag:(unsigned long long)arg1 isNew:(_Bool)arg2 isForce:(_Bool)arg3;
- (void)markRichControlWithFlag:(unsigned long long)arg1 isNew:(_Bool)arg2;
- (id)richControlWithFlag:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchEvent:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfPages;
- (id)richKeyboardItemAtIndexPath:(id)arg1;
@property(nonatomic) unsigned long long newFlags; // @dynamic newFlags;
@property(retain, nonatomic) NSArray *items; // @dynamic items;
- (void)pageControlTapped:(id)arg1;
- (void)configPageControl;
- (void)configCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) double animationTime; // @dynamic animationTime;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQRichKeyBoradDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isGroupAnonymousMode; // @dynamic isGroupAnonymousMode;
@property(readonly) Class superclass;

@end
