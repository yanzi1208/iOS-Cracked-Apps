//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGGChatTipBaseCell.h"

@class UILabel, UIView;

@interface KQGChatDownMusicCell : KGGChatTipBaseCell
{
    UIView *_backView;
    UILabel *_titleLabel;
}

+ (double)heightForCell:(id)arg1 nickName:(id)arg2 isHideTime:(_Bool)arg3 isGChat:(_Bool)arg4;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateUIWithMessageInfo:(id)arg1 isHideTime:(_Bool)arg2 iconUrl:(id)arg3 nickName:(id)arg4 relationshipBean:(id)arg5;
- (void)setIsHideTime:(_Bool)arg1 addTime:(id)arg2;
- (void)viewInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
