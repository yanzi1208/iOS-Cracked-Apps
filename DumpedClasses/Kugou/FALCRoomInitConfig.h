//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class FALCRoomVideoShowMode;

@interface FALCRoomInitConfig : FAModel
{
    _Bool _shouldSendTypeWhenDailyTask;
    _Bool _shouldDailyTaskSetHaveGetBtnName;
    _Bool _shouldHaveBindPhone;
    long long _followAnnoSwitch;
    FALCRoomVideoShowMode *_videoShowMode;
}

@property(nonatomic) _Bool shouldHaveBindPhone; // @synthesize shouldHaveBindPhone=_shouldHaveBindPhone;
@property(nonatomic) _Bool shouldDailyTaskSetHaveGetBtnName; // @synthesize shouldDailyTaskSetHaveGetBtnName=_shouldDailyTaskSetHaveGetBtnName;
@property(nonatomic) _Bool shouldSendTypeWhenDailyTask; // @synthesize shouldSendTypeWhenDailyTask=_shouldSendTypeWhenDailyTask;
@property(retain, nonatomic) FALCRoomVideoShowMode *videoShowMode; // @synthesize videoShowMode=_videoShowMode;
@property(nonatomic) long long followAnnoSwitch; // @synthesize followAnnoSwitch=_followAnnoSwitch;
- (void).cxx_destruct;

@end
