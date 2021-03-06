//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IOMCopyLabel, IOMGoodsDetailTextSepView, NSMutableArray, UIButton, UIImageView;

@interface IOMGoodsDetailDescTableViewCell : UITableViewCell
{
    _Bool _didSetupConstraints;
    IOMGoodsDetailTextSepView *_textSepView;
    IOMCopyLabel *_bodyLabel;
    CDUnknownBlockType _handleVideoClick;
    CDUnknownBlockType _handleGoodsParamClick;
    UIButton *_videoView;
    NSMutableArray *_vConstraints;
    UIImageView *_playImageView;
    UIImageView *_moreImageView;
    UIButton *_moreImageBtn;
}

@property(retain, nonatomic) UIButton *moreImageBtn; // @synthesize moreImageBtn=_moreImageBtn;
@property(retain, nonatomic) UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) NSMutableArray *vConstraints; // @synthesize vConstraints=_vConstraints;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIButton *videoView; // @synthesize videoView=_videoView;
@property(copy, nonatomic) CDUnknownBlockType handleGoodsParamClick; // @synthesize handleGoodsParamClick=_handleGoodsParamClick;
@property(copy, nonatomic) CDUnknownBlockType handleVideoClick; // @synthesize handleVideoClick=_handleVideoClick;
@property(retain, nonatomic) IOMCopyLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) IOMGoodsDetailTextSepView *textSepView; // @synthesize textSepView=_textSepView;
- (void).cxx_destruct;
- (void)clickedGoodsParams;
- (void)clickedVideo;
- (void)showVideoView:(double)arg1 imageUrl:(id)arg2;
- (void)updateFonts;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

