//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SpritePositionInfo, SpriteRoleModel, sa_gl_view;

@interface SpriteInstance : NSObject
{
    long long _totalDressCount;
    _Bool _roleIsSucceed;
    SpritePositionInfo *position;
    NSString *name;
    sa_gl_view *weakglview;
    SpriteRoleModel *roleModel;
    NSMutableArray *dressArray;
    long long _roleId;
    id <SpriteInstanceDelegate> _delegate;
    NSString *_currentBubbleContent;
    CDStruct_00b794ac _currentBubbleInfo;
}

@property(nonatomic) CDStruct_00b794ac currentBubbleInfo; // @synthesize currentBubbleInfo=_currentBubbleInfo;
@property(retain, nonatomic) NSString *currentBubbleContent; // @synthesize currentBubbleContent=_currentBubbleContent;
@property(nonatomic) id <SpriteInstanceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long roleId; // @synthesize roleId=_roleId;
@property(retain, nonatomic) NSMutableArray *dressArray; // @synthesize dressArray;
@property(retain, nonatomic) SpriteRoleModel *roleModel; // @synthesize roleModel;
@property(nonatomic) sa_gl_view *weakglview; // @synthesize weakglview;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) SpritePositionInfo *position; // @synthesize position;
- (void)handleSpriteActionStart:(struct bkSkeletonAnimation *)arg1 eventCode:(int)arg2 animationName:(const char *)arg3 taskId:(int)arg4;
- (void)handleSpriteActionFinish:(struct bkSkeletonAnimation *)arg1 eventCode:(int)arg2 animationName:(const char *)arg3 taskId:(int)arg4;
- (void)onAniEnd;
- (void)onAniStart;
- (_Bool)execScript:(id)arg1 jsonInfo:(id)arg2 atlasInfo:(id)arg3 pngInfo:(id)arg4;
- (_Bool)removeBubble;
- (_Bool)playBubbleWithBubbleInfo:(CDStruct_00b794ac)arg1;
- (_Bool)playBubble:(id)arg1 bubbleId:(int)arg2;
- (void)getDressRects:(CDUnknownBlockType)arg1;
- (void)dispose;
- (_Bool)exeActionWithActionModel:(id)arg1 detailInfo:(CDStruct_6778d593)arg2;
- (_Bool)execWearDressWithJsonFile:(id)arg1 atlasFile:(id)arg2 pngfile:(id)arg3;
- (_Bool)execWearRoleWithJsonFile:(id)arg1 atlasFile:(id)arg2 pngFile:(id)arg3;
- (void)wearDressWithDressids:(id)arg1 completeBlk:(CDUnknownBlockType)arg2;
- (void)wearRoleWithId:(long long)arg1 completeBlk:(CDUnknownBlockType)arg2;
- (void)wearRoleWithId:(long long)arg1 withDressids:(id)arg2 needLayout:(_Bool)arg3 completeBlk:(CDUnknownBlockType)arg4;
- (void)boundCallback;
- (void)changeRoleAndDressBySex;
- (void)changeRoleAndDefaultDress:(long long)arg1;
- (void)changeDefaultZeroRoleCompleteBlk:(CDUnknownBlockType)arg1;
- (void)changeRoleAndDefaultDress:(long long)arg1 CompleteBlk:(CDUnknownBlockType)arg2;
- (void)changeDefaultRoleDress;
- (void)playSayHiWithActionModel:(id)arg1;
- (void)playAIActionWithActionId:(int)arg1 isRepeat:(_Bool)arg2;
- (void)playSayHiActionIsRandom:(_Bool)arg1 withRoleId:(long long)arg2 sayHiActionId:(long long)arg3;
- (void)playAppearActionWithID:(long long)arg1 animationName:(id)arg2;
- (void)playDrawerActionWithID:(long long)arg1 animationName:(id)arg2;
- (void)playActionWithId:(long long)arg1 isPeer:(_Bool)arg2;
- (void)reWearAllRoleDress:(CDUnknownBlockType)arg1;
- (void)changeDressWithIds:(id)arg1;
- (void)changeRoleWithID:(long long)arg1 DressIDs:(id)arg2 NeedLayout:(_Bool)arg3;
- (void)changeRoleWithId:(long long)arg1 withDressids:(id)arg2;
- (void)lazyChangeRoleWithId:(long long)arg1 withDressids:(id)arg2;
- (void)dealloc;
- (void)dataInit;
- (id)initWithName:(id)arg1;

@end
