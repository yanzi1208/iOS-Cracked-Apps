//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelReserveInvoiceModel, NSString, RequestHead;

@interface HotelInvoiceSubscribeRequest : CTBusinessBean
{
    RequestHead *_head;
    long long _orderId;
    NSString *_uid;
    HotelReserveInvoiceModel *_reserveInvoiceModel;
}

@property(retain, nonatomic) HotelReserveInvoiceModel *reserveInvoiceModel; // @synthesize reserveInvoiceModel=_reserveInvoiceModel;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

