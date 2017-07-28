//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FALiveDailyTaskController, FALiveGameListDataProvider, FALiveGameListShowView, NSString, UIView;

@interface FALiveGameController : NSObject
{
    _Bool _isShowTaskRedView;
    _Bool _hasTaskList;
    _Bool _hasShakeActivity;
    _Bool _isNeedHideActionView;
    _Bool _isCrazyCatchDollViewShow;
    id <FALiveGameListControllerDelegate> _delegate;
    UIView *_parentView;
    long long _roomId;
    long long _starUserId;
    NSString *_nickName;
    FALiveGameListShowView *_gameListShowView;
    FALiveGameListDataProvider *_gameListDataProvider;
    long long _bigShakeTimes;
    long long _smallShakeTimes;
    FALiveDailyTaskController *_dailyTaskController;
}

@property(retain, nonatomic) FALiveDailyTaskController *dailyTaskController; // @synthesize dailyTaskController=_dailyTaskController;
@property(nonatomic) _Bool isCrazyCatchDollViewShow; // @synthesize isCrazyCatchDollViewShow=_isCrazyCatchDollViewShow;
@property(nonatomic) _Bool isNeedHideActionView; // @synthesize isNeedHideActionView=_isNeedHideActionView;
@property(nonatomic) _Bool hasShakeActivity; // @synthesize hasShakeActivity=_hasShakeActivity;
@property(nonatomic) _Bool hasTaskList; // @synthesize hasTaskList=_hasTaskList;
@property(nonatomic) long long smallShakeTimes; // @synthesize smallShakeTimes=_smallShakeTimes;
@property(nonatomic) long long bigShakeTimes; // @synthesize bigShakeTimes=_bigShakeTimes;
@property(nonatomic) _Bool isShowTaskRedView; // @synthesize isShowTaskRedView=_isShowTaskRedView;
@property(retain, nonatomic) FALiveGameListDataProvider *gameListDataProvider; // @synthesize gameListDataProvider=_gameListDataProvider;
@property(retain, nonatomic) FALiveGameListShowView *gameListShowView; // @synthesize gameListShowView=_gameListShowView;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long starUserId; // @synthesize starUserId=_starUserId;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <FALiveGameListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fxUserLoginNoti;
- (void)userLogout;
- (void)changeHalfScreenWebViewWithKeyBoardState:(_Bool)arg1 keyBoardHeight:(double)arg2;
- (void)keyBoardHide:(id)arg1;
- (void)keyBoardShow:(id)arg1;
- (void)openH5:(id)arg1;
- (void)showCrazyCatchDollView:(int)arg1 withGameUrl:(id)arg2;
- (void)jumpToFunctionView:(id)arg1;
- (void)dealBottomMoreRedViewShow;
- (void)getLiveShakeTimes;
- (void)getDailyTaskToShowRedView;
- (void)updateShakeTimesAndDailyTaskToShowRedView;
- (void)getLiveGameListShowListView;
- (void)updateRoomId:(long long)arg1 starUserId:(long long)arg2 nickName:(id)arg3;
- (void)showGameListView;
- (void)hideGameListView;
- (void)showGameListViewHeaderRefresh:(_Bool)arg1;
- (void)destory;
- (void)dealloc;
- (id)init;

@end
