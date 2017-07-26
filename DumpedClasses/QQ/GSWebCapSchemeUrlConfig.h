//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GSWebCapSchemeUrlConfig : NSObject
{
    NSArray *_gsWebCapEmbeddedConfig;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)loadConfigsToCache;
- (id)getSchemeConfigPath;
- (struct _NSRange)getServerNameIndexInSchemeUrl:(id)arg1;
- (id)resetWebCapEmbeddedScheme:(id)arg1;
- (_Bool)isSupportGSWebCapSchemeUrl:(id)arg1;
- (id)getWebCapEmbeddedConfigByScheme:(id)arg1;
- (id)restoreURLInfoFromNewURLInfo:(id)arg1;
- (id)getActionModelByServerAndActionName:(id)arg1 actionName:(id)arg2;
- (id)getActionClassByServerAndActionName:(id)arg1 actionName:(id)arg2;
- (id)synchronizedWebCapConfig;
- (id)init;

@end
