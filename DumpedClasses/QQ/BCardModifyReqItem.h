//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class BCardInfoModel;

@interface BCardModifyReqItem : SAMRequestItem
{
    BCardInfoModel *_MOD_CARD_INFO;
}

@property(retain, nonatomic) BCardInfoModel *MOD_CARD_INFO; // @synthesize MOD_CARD_INFO=_MOD_CARD_INFO;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end
