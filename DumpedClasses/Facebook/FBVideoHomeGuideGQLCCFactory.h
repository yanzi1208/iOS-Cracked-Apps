//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLConnectionControllerConfiguration, FBReactionSessionInfo, FBUserSession;
@protocol FBReactionRequestSupportedStylesProtocol;

@interface FBVideoHomeGuideGQLCCFactory : NSObject
{
    FBUserSession *_session;
    FBGraphQLConnectionControllerConfiguration *_reactionConfiguration;
    id <FBReactionRequestSupportedStylesProtocol> _supportedStyles;
    NSObject *_scenePath;
    FBReactionSessionInfo *_reactionSessionInfo;
}

@property(readonly, nonatomic) FBReactionSessionInfo *reactionSessionInfo; // @synthesize reactionSessionInfo=_reactionSessionInfo;
@property(copy, nonatomic) NSObject *scenePath; // @synthesize scenePath=_scenePath;
- (void).cxx_destruct;
- (id)graphQLConnectionControllerUserInfoWithRequestType:(id)arg1;
- (id)createGraphQLConnectionController;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 reactionSessionInfo:(id)arg3 supportedStyles:(id)arg4;

@end

