//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class FragmentConfig, NSString;

@interface QQARFragmentModel : QQModel
{
    _Bool _playing;
    int _playedCount;
    long long _trackMode;
    long long _arType;
    NSString *_colorConfig;
    FragmentConfig *_fragmentConfig;
    NSString *_Url;
    long long _fileSize;
    NSString *_Md5;
    NSString *_fileLocalPath;
    long long _repeatCount;
    long long _connectType;
    NSString *_tips;
    QQARFragmentModel *_before;
    QQARFragmentModel *_next;
}

@property int playedCount; // @synthesize playedCount=_playedCount;
@property _Bool playing; // @synthesize playing=_playing;
@property(retain) QQARFragmentModel *next; // @synthesize next=_next;
@property(retain) QQARFragmentModel *before; // @synthesize before=_before;
@property(retain) NSString *tips; // @synthesize tips=_tips;
@property long long connectType; // @synthesize connectType=_connectType;
@property long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain) NSString *fileLocalPath; // @synthesize fileLocalPath=_fileLocalPath;
@property(retain) NSString *Md5; // @synthesize Md5=_Md5;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSString *Url; // @synthesize Url=_Url;
@property(retain) FragmentConfig *fragmentConfig; // @synthesize fragmentConfig=_fragmentConfig;
@property(retain) NSString *colorConfig; // @synthesize colorConfig=_colorConfig;
@property long long arType; // @synthesize arType=_arType;
@property long long trackMode; // @synthesize trackMode=_trackMode;
- (void).cxx_destruct;
- (id)localVideoPath;
- (void)stop;
- (void)play;
- (_Bool)isSameFragment:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
