//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGTableViewDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITextFieldDelegate.h"

@class IDVertifyBLL, KGDefaultNetErrorView, KGRefreshController, KGTableView, KGTopSearchView, NSArray, NSMutableArray, NSString, PersonalInfoBlankViewController, PersonalInfoSearchBLL, UILabel;

@interface PersonalInfoSearchViewController : KGViewController <KGTableViewDelegate, UITableViewDataSource, UITextFieldDelegate, RefreshControlDelegate>
{
    long long _memberCount;
    _Bool _hasMore;
    _Bool _isLoading;
    _Bool _isEditing;
    NSString *_searchKey;
    KGTopSearchView *_searchBar;
    KGTableView *_tableView;
    NSMutableArray *_data;
    NSArray *_sources;
    UILabel *_footView;
    PersonalInfoBlankViewController *_blankVC;
    KGRefreshController *_refreshController;
    KGDefaultNetErrorView *_retryAndErrorView;
    PersonalInfoSearchBLL *_personalInfoSearchBLL;
    IDVertifyBLL *_vertifyBll;
}

@property(retain, nonatomic) IDVertifyBLL *vertifyBll; // @synthesize vertifyBll=_vertifyBll;
@property(retain, nonatomic) PersonalInfoSearchBLL *personalInfoSearchBLL; // @synthesize personalInfoSearchBLL=_personalInfoSearchBLL;
@property(retain, nonatomic) KGDefaultNetErrorView *retryAndErrorView; // @synthesize retryAndErrorView=_retryAndErrorView;
@property(retain, nonatomic) KGRefreshController *refreshController; // @synthesize refreshController=_refreshController;
@property(retain, nonatomic) PersonalInfoBlankViewController *blankVC; // @synthesize blankVC=_blankVC;
@property(retain, nonatomic) UILabel *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) KGTopSearchView *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)onClickedCencelButton:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hiddenBlankView;
- (void)showBlankView;
- (void)loadingFinishAndRefresh;
- (long long)showPlayBarWay;
- (void)showFilterButton:(_Bool)arg1;
- (void)requestAgain;
- (void)hiddenErrorView;
- (void)showErrorView;
- (void)requestVertifyData:(id)arg1;
- (void)requestData;
- (void)didReceiveMemoryWarning;
- (void)showDisAppearAnimationAndPopSelf;
- (void)showAppearAnimation;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
