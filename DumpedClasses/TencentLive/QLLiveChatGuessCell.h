//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLLiveChatBaseCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, QLAppLiveSubject, QLRichLabel, UIButton, UIImageView, UILabel, UITableView;

@interface QLLiveChatGuessCell : QLLiveChatBaseCell <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isPlain;
    QLRichLabel *_contentLable;
    id <QLLiveChatGuessCellDelegate> _guessDelegate;
    UILabel *_descLbl;
    UILabel *_votedNumLbl;
    UILabel *_optionNumLbl;
    UITableView *_optionTbl;
    UIButton *_lottBtn;
    UIImageView *_statusIcon;
    UIButton *_voteBtn;
    UIImageView *_voteBgView;
    QLAppLiveSubject *_voteSubject;
}

+ (double)heightOfSubViewWithBaseInfo:(id)arg1 withScene:(int)arg2 contentLines:(long long)arg3;
+ (double)heightForOptionTable:(id)arg1 withScene:(int)arg2;
@property(retain, nonatomic) QLAppLiveSubject *voteSubject; // @synthesize voteSubject=_voteSubject;
@property(retain, nonatomic) UIImageView *voteBgView; // @synthesize voteBgView=_voteBgView;
@property(retain, nonatomic) UIButton *voteBtn; // @synthesize voteBtn=_voteBtn;
@property(retain, nonatomic) UIImageView *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) UIButton *lottBtn; // @synthesize lottBtn=_lottBtn;
@property(retain, nonatomic) UITableView *optionTbl; // @synthesize optionTbl=_optionTbl;
@property(retain, nonatomic) UILabel *optionNumLbl; // @synthesize optionNumLbl=_optionNumLbl;
@property(retain, nonatomic) UILabel *votedNumLbl; // @synthesize votedNumLbl=_votedNumLbl;
@property(retain, nonatomic) UILabel *descLbl; // @synthesize descLbl=_descLbl;
@property(nonatomic) __weak id <QLLiveChatGuessCellDelegate> guessDelegate; // @synthesize guessDelegate=_guessDelegate;
@property(nonatomic) _Bool isPlain; // @synthesize isPlain=_isPlain;
@property(retain, nonatomic) QLRichLabel *contentLable; // @synthesize contentLable=_contentLable;
- (void).cxx_destruct;
- (void)didTapVoteBtn:(id)arg1;
- (void)reComputePercentProgress:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshInterfaceUI;
- (void)refreshVoteStatus;
- (void)setObject:(id)arg1;
- (void)reOrderOptionList;
- (void)sortOptions:(id)arg1;
- (void)testAjust:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)resetCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

