//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KTVOpusIdKrcIdInfo : KTVObjectModel
{
    long long _opusId;
    long long _ajust;
    NSString *_hashKey;
    long long _lrcId;
    NSString *_singerName;
    long long _snippetAjust;
    long long _channelId;
    long long _timeSpan;
    NSString *_songName;
    NSString *_toke;
}

@property(retain, nonatomic) NSString *toke; // @synthesize toke=_toke;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) long long timeSpan; // @synthesize timeSpan=_timeSpan;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) long long snippetAjust; // @synthesize snippetAjust=_snippetAjust;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(nonatomic) long long lrcId; // @synthesize lrcId=_lrcId;
@property(retain, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(nonatomic) long long ajust; // @synthesize ajust=_ajust;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
- (void).cxx_destruct;

@end
