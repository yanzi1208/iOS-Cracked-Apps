//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseTableViewController.h"

#import "TBSCSListViewDelegate.h"

@class NSArray, NSString, TBOFeed, TBOFeedDetailPicCell, UITableView;

@interface TBOQuestionCommentDetailViewController : TBOBaseTableViewController <TBSCSListViewDelegate>
{
    NSString *_jump;
    NSString *_feedId;
    UITableView *_listView;
    NSArray *_actions;
    TBOFeed *_feed;
    TBOFeedDetailPicCell *_headerView;
    long long _requestFinishCount;
}

@property(nonatomic) long long requestFinishCount; // @synthesize requestFinishCount=_requestFinishCount;
@property(retain, nonatomic) TBOFeedDetailPicCell *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TBOFeed *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak UITableView *listView; // @synthesize listView=_listView;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *jump; // @synthesize jump=_jump;
- (void).cxx_destruct;
- (void)viewDidRender:(id)arg1;
- (void)listViewWillRequestData:(id)arg1 requestType:(int)arg2;
- (void)shareButtonClicked;
- (void)onMore:(id)arg1;
- (void)loadFinished:(id)arg1;
- (void)configMessage:(id)arg1;
- (void)loadData;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithNavigatorActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

