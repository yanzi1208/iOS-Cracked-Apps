//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Article, ExploreDetailManager, ExploreOrderedData, NSDictionary, NSNumber, NSString, TTVideoShareMovie, UIView;

@interface TTDetailModel : NSObject
{
    _Bool _beginShowComment;
    _Bool _isArticleReliable;
    _Bool _isFlagsReliable;
    _Bool _isPGCUser;
    _Bool _isConcernPGCUser;
    _Bool _ttDragToRoot;
    _Bool _needQuickExit;
    _Bool _isFloatVideoController;
    int _fromSource;
    ExploreOrderedData *_orderedData;
    Article *_article;
    ExploreDetailManager *_detailManager;
    TTVideoShareMovie *_shareMovie;
    NSString *_adOpenUrl;
    NSDictionary *_paramDicts;
    NSString *_adLogExtra;
    NSString *_gdLabel;
    NSNumber *_adID;
    NSString *_msgID;
    NSNumber *_relateReadFromGID;
    NSDictionary *_statParams;
    NSNumber *_beginShowCommentUGC;
    NSNumber *_beginWriteCommentUGC;
    NSNumber *_enterFromClickComment;
    NSNumber *_fromU11Cell;
    NSDictionary *_gdExtJsonDict;
    NSString *_originalSchema;
    NSString *_categoryID;
    NSString *_clickLabel;
    long long _ansCount;
    NSString *_pgcUserName;
    NSString *_pgcAvatar;
    NSString *_mediaID;
    NSString *_dongtaiID;
    long long _picViewStyle;
    UIView *_targetView;
    struct CGRect _picViewFrame;
}

@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) long long picViewStyle; // @synthesize picViewStyle=_picViewStyle;
@property(nonatomic) struct CGRect picViewFrame; // @synthesize picViewFrame=_picViewFrame;
@property(copy, nonatomic) NSString *dongtaiID; // @synthesize dongtaiID=_dongtaiID;
@property(nonatomic) _Bool isFloatVideoController; // @synthesize isFloatVideoController=_isFloatVideoController;
@property(nonatomic) _Bool needQuickExit; // @synthesize needQuickExit=_needQuickExit;
@property(nonatomic) _Bool ttDragToRoot; // @synthesize ttDragToRoot=_ttDragToRoot;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *pgcAvatar; // @synthesize pgcAvatar=_pgcAvatar;
@property(copy, nonatomic) NSString *pgcUserName; // @synthesize pgcUserName=_pgcUserName;
@property(nonatomic) _Bool isConcernPGCUser; // @synthesize isConcernPGCUser=_isConcernPGCUser;
@property(nonatomic) _Bool isPGCUser; // @synthesize isPGCUser=_isPGCUser;
@property(nonatomic) long long ansCount; // @synthesize ansCount=_ansCount;
@property(nonatomic) _Bool isFlagsReliable; // @synthesize isFlagsReliable=_isFlagsReliable;
@property(nonatomic) _Bool isArticleReliable; // @synthesize isArticleReliable=_isArticleReliable;
@property(nonatomic) int fromSource; // @synthesize fromSource=_fromSource;
@property(copy, nonatomic) NSString *clickLabel; // @synthesize clickLabel=_clickLabel;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *originalSchema; // @synthesize originalSchema=_originalSchema;
@property(retain, nonatomic) NSDictionary *gdExtJsonDict; // @synthesize gdExtJsonDict=_gdExtJsonDict;
@property(retain, nonatomic) NSNumber *fromU11Cell; // @synthesize fromU11Cell=_fromU11Cell;
@property(retain, nonatomic) NSNumber *enterFromClickComment; // @synthesize enterFromClickComment=_enterFromClickComment;
@property(retain, nonatomic) NSNumber *beginWriteCommentUGC; // @synthesize beginWriteCommentUGC=_beginWriteCommentUGC;
@property(retain, nonatomic) NSNumber *beginShowCommentUGC; // @synthesize beginShowCommentUGC=_beginShowCommentUGC;
@property(nonatomic) _Bool beginShowComment; // @synthesize beginShowComment=_beginShowComment;
@property(retain, nonatomic) NSDictionary *statParams; // @synthesize statParams=_statParams;
@property(retain, nonatomic) NSNumber *relateReadFromGID; // @synthesize relateReadFromGID=_relateReadFromGID;
@property(copy, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *gdLabel; // @synthesize gdLabel=_gdLabel;
@property(copy, nonatomic) NSString *adLogExtra; // @synthesize adLogExtra=_adLogExtra;
@property(retain, nonatomic) NSDictionary *paramDicts; // @synthesize paramDicts=_paramDicts;
@property(copy, nonatomic) NSString *adOpenUrl; // @synthesize adOpenUrl=_adOpenUrl;
@property(retain, nonatomic) TTVideoShareMovie *shareMovie; // @synthesize shareMovie=_shareMovie;
@property(retain, nonatomic) ExploreDetailManager *detailManager; // @synthesize detailManager=_detailManager;
@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
- (void).cxx_destruct;
- (_Bool)tt_isArticleReliable;
- (id)uniqueID;
- (void)sendDetailTrackEventWithTag:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)sendDetailTrackEventWithTag:(id)arg1 label:(id)arg2;
- (_Bool)isFromList;
- (id)newsDetailRightButtons;
- (id)clickFromLabel;
- (void)updateShouldShowNewsHelpView;
- (_Bool)shouldShowNewsHelpView;
- (_Bool)shouldBeginShowComment;
- (id)sharedDetailManager;
- (id)init;

@end
