//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAudioMix, NSArray, NSDate, NSError, NSTimer, QQPlayeravplayerItem, QQSelfPlayerItem;

@interface QQPlayerItem : NSObject
{
    NSTimer *sliderTimer;
    int _mPlayerItemType;
    _Bool _addedqqplayerObserver;
    _Bool _playbackLikelyToKeepUp;
    _Bool _playbackBufferFull;
    _Bool _playbackBufferEmpty;
    NSArray *_loadedTimeRanges;
    AVAsset *_asset;
    id _delegate;
    QQPlayeravplayerItem *_AVPlayerItem;
    QQSelfPlayerItem *_QQSelfPlayerItem;
    AVAudioMix *_audioMix;
    id _qqselfMediaPlayer;
    long long _status;
    struct CGSize _presentationSize;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _currentTime;
}

@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic, getter=isPlaybackBufferEmpty) _Bool playbackBufferEmpty; // @synthesize playbackBufferEmpty=_playbackBufferEmpty;
@property(nonatomic, getter=isPlaybackBufferFull) _Bool playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
@property(nonatomic) long long status; // @synthesize status=_status;
@property __weak id qqselfMediaPlayer; // @synthesize qqselfMediaPlayer=_qqselfMediaPlayer;
@property(copy, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) QQSelfPlayerItem *QQSelfPlayerItem; // @synthesize QQSelfPlayerItem=_QQSelfPlayerItem;
@property(retain, nonatomic) QQPlayeravplayerItem *AVPlayerItem; // @synthesize AVPlayerItem=_AVPlayerItem;
@property _Bool addedqqplayerObserver; // @synthesize addedqqplayerObserver=_addedqqplayerObserver;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSError *error;
@property(readonly, retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void)removeOutput:(id)arg1;
- (id)accessLog;
- (id)errorLog;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (int)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)addOutput:(id)arg1;
@property(readonly, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
- (void)cancelPendingSeeks;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)addObserverForPlayerItem:(id)arg1;
- (void)removeAllObserver;
- (void)sendQQPlayerCallbackEvent:(id)arg1 eventID:(int)arg2 message:(id)arg3;
- (void)sendEvent:(id)arg1 eventid:(int)arg2 currenttime:(CDStruct_1b6d18a9)arg3;
- (void)sendLogInfo:(id)arg1 loglevel:(int)arg2;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (void)updateURLArray:(id)arg1;
- (void)setURLArray:(id)arg1 contentTimes:(id)arg2;
- (void)setPlayerInputParam:(int)arg1 playeravformat:(int)arg2 playertype:(int)arg3 decodemode:(int)arg4 startposition:(long long)arg5 endposition:(long long)arg6 definition:(int)arg7;
- (void)setPlayerParamDict:(id)arg1;
- (void)setQQselfMediaPlayer:(id)arg1;
- (id)initWithURL:(id)arg1 playerType:(int)arg2;
- (id)initWithAsset:(id)arg1 playerType:(int)arg2;

@end

