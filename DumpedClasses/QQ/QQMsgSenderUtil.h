//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQMsgSenderUtil : NSObject
{
}

+ (int)SendHCPttPbMsg:(struct PbSendMsgReq *)arg1 uid:(id)arg2 SendingModel:(id)arg3 Licence:(id)arg4;
+ (int)SendPbMsg:(struct PbSendMsgReq *)arg1 SendingModel:(id)arg2 Licence:(id)arg3;
+ (_Bool)GetSyncCookiesOfCurAccount:(char **)arg1 ResultLen:(unsigned int *)arg2;

@end

