//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMUserProfileRequest : NMBaseRequest
{
    NSString *_userId;
    _Bool _needPlaylistCount;
    _Bool _needGotoRecommend;
}

@property(nonatomic) _Bool needGotoRecommend; // @synthesize needGotoRecommend=_needGotoRecommend;
@property(nonatomic) _Bool needPlaylistCount; // @synthesize needPlaylistCount=_needPlaylistCount;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1;

@end
