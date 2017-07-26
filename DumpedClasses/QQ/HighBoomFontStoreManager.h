//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface HighBoomFontStoreManager : NSObject
{
    NSMutableDictionary *_allHighBoomFontModelDic;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)getInstance;
- (void)onSvipChange:(id)arg1;
- (void)onVipChange:(id)arg1;
- (_Bool)jsonFileExistsWithFontID:(long long)arg1 bizType:(long long)arg2;
- (_Bool)ttfFileExistsWithFontID:(long long)arg1 fontType:(long long)arg2 bizType:(long long)arg3;
- (_Bool)createDirPathIfNecessary:(id)arg1;
- (id)jsonFilePathWithFontID:(long long)arg1 bizType:(long long)arg2;
- (id)ttfFilePathWithFontID:(long long)arg1 fontType:(long long)arg2 bizType:(long long)arg3;
- (id)imageBaseDirPathWithFontID:(long long)arg1 bizType:(long long)arg2;
- (id)fontBaseDirPathWithFontID:(long long)arg1 bizType:(long long)arg2;
- (id)resDirPathWithBizType:(long long)arg1;
- (id)baseDirPathWithBizType:(long long)arg1;
- (id)getHighBoomFontModelByFontID:(long long)arg1 bizType:(long long)arg2;
- (void)dealWithHighBoomFontStatusNotExists:(id)arg1;
- (id)getHighBoomFontModelWithFontID:(long long)arg1 bizType:(long long)arg2;
- (void)initAllFontModel;
- (void)dealloc;
- (id)init;

@end
