//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSHongbaoInfo : NSObject
{
    unsigned int _moneySum;
    unsigned int _count;
    unsigned int _type;
    int _state;
    int _leftCount;
    unsigned int _leftMoney;
    NSString *_hongbaoID;
    long long _userID;
    NSString *_userName;
    long long _timeLimit;
    long long _createTime;
    NSString *_comment;
    long long _toUser;
    NSString *_toUserName;
}

@property(copy, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(nonatomic) long long toUser; // @synthesize toUser=_toUser;
@property(nonatomic) unsigned int leftMoney; // @synthesize leftMoney=_leftMoney;
@property(nonatomic) int leftCount; // @synthesize leftCount=_leftCount;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) long long timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) unsigned int moneySum; // @synthesize moneySum=_moneySum;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *hongbaoID; // @synthesize hongbaoID=_hongbaoID;
- (void).cxx_destruct;

@end

