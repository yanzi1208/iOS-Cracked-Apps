//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString;

@interface CTInlandFlightListHuiXuanCellViewModel : CTViewModel
{
    NSString *_departTime;
    NSString *_departAirportTerminal;
    NSString *_arriveAirportTerminal;
    NSString *_stopFlagName;
    NSString *_ticketNumber;
    NSString *_ticketPrice;
    NSString *_imageNameStr;
}

+ (id)convertCellViewModelFromFlightInlandListItemViewModel:(id)arg1 additionInfo:(id)arg2;
@property(copy, nonatomic) NSString *imageNameStr; // @synthesize imageNameStr=_imageNameStr;
@property(copy, nonatomic) NSString *ticketPrice; // @synthesize ticketPrice=_ticketPrice;
@property(copy, nonatomic) NSString *ticketNumber; // @synthesize ticketNumber=_ticketNumber;
@property(copy, nonatomic) NSString *stopFlagName; // @synthesize stopFlagName=_stopFlagName;
@property(copy, nonatomic) NSString *arriveAirportTerminal; // @synthesize arriveAirportTerminal=_arriveAirportTerminal;
@property(copy, nonatomic) NSString *departAirportTerminal; // @synthesize departAirportTerminal=_departAirportTerminal;
@property(copy, nonatomic) NSString *departTime; // @synthesize departTime=_departTime;
- (void).cxx_destruct;

@end

