//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWCinemaBaseCell.h"

@class GWDateMovieCellObject, GWDateMovieForCinemaView, NSMutableArray;

@interface GWDateMovieCell : GWCinemaBaseCell
{
    GWDateMovieCellObject *_dateMovieobject;
    CDUnknownBlockType _selcetedTime;
    CDUnknownBlockType _pushSwithOn;
    GWDateMovieForCinemaView *_dateMovieView;
    id _delegate;
    NSMutableArray *_imageArray;
}

+ (double)calculateDateMovieViewFrame:(id)arg1;
+ (double)rowHeightWithCellObject:(id)arg1;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GWDateMovieForCinemaView *dateMovieView; // @synthesize dateMovieView=_dateMovieView;
@property(copy, nonatomic) CDUnknownBlockType pushSwithOn; // @synthesize pushSwithOn=_pushSwithOn;
@property(copy, nonatomic) CDUnknownBlockType selcetedTime; // @synthesize selcetedTime=_selcetedTime;
@property(retain, nonatomic) GWDateMovieCellObject *dateMovieobject; // @synthesize dateMovieobject=_dateMovieobject;
- (void).cxx_destruct;
- (void)showCellWithCellObject:(id)arg1;
- (void)externalEvent;
- (void)loadDateMovieView;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

