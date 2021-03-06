//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSString;

@interface SAPILocationHelper : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CLLocation *_cacheLocation;
}

+ (id)lastKnownLocation;
+ (id)sharedInstance;
@property(retain, nonatomic) CLLocation *cacheLocation; // @synthesize cacheLocation=_cacheLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)updateCurrentLocationIfAuthorized;
- (_Bool)isLocationTimestampAvailable:(id)arg1;
- (id)locationStringForDeviceInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

