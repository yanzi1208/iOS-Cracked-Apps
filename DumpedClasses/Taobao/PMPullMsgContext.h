//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PMPullMsgContext : NSObject
{
    long long _bizCode;
    NSString *_topic;
    NSString *_bizTag;
    long long _role;
    long long _period;
    NSString *_offset;
    long long _delayTime;
    long long _sendTag;
}

@property(nonatomic) long long sendTag; // @synthesize sendTag=_sendTag;
@property(nonatomic) long long delayTime; // @synthesize delayTime=_delayTime;
@property(retain, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(nonatomic) long long period; // @synthesize period=_period;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *bizTag; // @synthesize bizTag=_bizTag;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long bizCode; // @synthesize bizCode=_bizCode;
- (void).cxx_destruct;

@end

