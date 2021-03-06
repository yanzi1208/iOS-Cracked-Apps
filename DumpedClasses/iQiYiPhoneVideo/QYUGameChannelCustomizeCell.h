//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class QYBisonAlbum, QYBisonAlbumClick, UIButton, UILabel;

@interface QYUGameChannelCustomizeCell : QYUPhoneCardBaseCell
{
    UILabel *_titleLabel;
    UIButton *_addButton;
    QYBisonAlbum *_bisonAlbum;
    QYBisonAlbumClick *_click;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
@property(retain, nonatomic) QYBisonAlbumClick *click; // @synthesize click=_click;
@property(retain, nonatomic) QYBisonAlbum *bisonAlbum; // @synthesize bisonAlbum=_bisonAlbum;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)updateConstraints;
- (void)buttonDidClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

