//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSNumber, NSString;

@interface GWNotificationMsg : GWObject
{
    NSNumber *_notifyId;
    NSString *_content;
    NSString *_title;
    NSString *_tag;
    NSNumber *_isRead;
    NSString *_url;
    NSString *_headimg;
    NSNumber *_addTime;
}

+ (id)modeArrWithDicArr:(id)arg1;
+ (id)modelWithDic:(id)arg1;
@property(retain, nonatomic) NSNumber *addTime; // @synthesize addTime=_addTime;
@property(copy, nonatomic) NSString *headimg; // @synthesize headimg=_headimg;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *isRead; // @synthesize isRead=_isRead;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *notifyId; // @synthesize notifyId=_notifyId;
- (void).cxx_destruct;

@end
