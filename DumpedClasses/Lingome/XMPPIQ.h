//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPElement.h"

@interface XMPPIQ : XMPPElement
{
}

+ (id)iqWithType:(id)arg1 child:(id)arg2;
+ (id)iqWithType:(id)arg1 elementID:(id)arg2 child:(id)arg3;
+ (id)iqWithType:(id)arg1 elementID:(id)arg2;
+ (id)iqWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3 child:(id)arg4;
+ (id)iqWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3;
+ (id)iqWithType:(id)arg1 to:(id)arg2;
+ (id)iqWithType:(id)arg1;
+ (id)iq;
+ (id)iqFromElement:(id)arg1;
+ (id)wrapValueElementAroundElement:(id)arg1;
+ (id)wrapElement:(id)arg1 aroundElement:(id)arg2;
+ (id)valueElementFromElementWithName:(id)arg1 value:(id)arg2;
+ (id)valueElementFromData:(id)arg1;
+ (id)valueElementFromDate:(id)arg1;
+ (id)valueElementFromString:(id)arg1;
+ (id)valueElementFromNumber:(id)arg1;
+ (id)valueElementFromBoolean:(struct __CFBoolean *)arg1;
+ (id)valueElementFromDictionary:(id)arg1;
+ (id)valueElementFromArray:(id)arg1;
+ (id)valueElementFromObject:(id)arg1;
+ (id)paramElementFromObject:(id)arg1;
+ (id)elementRpcFeature;
+ (id)elementRpcIdentity;
+ (id)elementParams;
+ (id)elementMethodName:(id)arg1;
+ (id)elementMethodCall;
+ (id)elementRpcQuery;
+ (id)rpcTo:(id)arg1 methodName:(id)arg2 parameters:(id)arg3;
+ (id)lastActivityResponseForbiddenToIQ:(id)arg1;
+ (id)lastActivityResponseToIQ:(id)arg1 withSeconds:(unsigned long long)arg2 status:(id)arg3;
+ (id)lastActivityResponseToIQ:(id)arg1 withSeconds:(unsigned long long)arg2;
+ (id)lastActivityQueryTo:(id)arg1;
- (id)childErrorElement;
- (id)childElement;
- (_Bool)requiresResponse;
- (_Bool)isErrorIQ;
- (_Bool)isResultIQ;
- (_Bool)isSetIQ;
- (_Bool)isGetIQ;
- (id)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 child:(id)arg2;
- (id)initWithType:(id)arg1 elementID:(id)arg2 child:(id)arg3;
- (id)initWithType:(id)arg1 elementID:(id)arg2;
- (id)initWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3 child:(id)arg4;
- (id)initWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3;
- (id)initWithType:(id)arg1 to:(id)arg2;
- (id)initWithType:(id)arg1;
- (id)init;
- (id)pubsubid;
- (id)lastActivityQueryElement;
- (id)lastActivityUnavailableStatus;
- (unsigned long long)lastActivitySeconds;
- (_Bool)isLastActivityQuery;
- (id)parseData:(id)arg1;
- (id)parseDate:(id)arg1;
- (id)parseString:(id)arg1;
- (id)parseBoolean:(id)arg1;
- (id)parseDouble:(id)arg1;
- (id)parseInteger:(id)arg1;
- (id)parseDateString:(id)arg1 withFormat:(id)arg2;
- (id)parseMember:(id)arg1;
- (id)parseStruct:(id)arg1;
- (id)parseArray:(id)arg1;
- (id)objectFromElement:(id)arg1;
- (id)methodResponse:(id *)arg1;
- (_Bool)isJabberRPC;
- (_Bool)isFault;
- (_Bool)isMethodResponse;
- (id)methodResponseElement;

@end

