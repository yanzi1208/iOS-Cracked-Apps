//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseModel.h"

@class DGPMetroBusModel, NSString;

@interface DGPRouteLineModel : DGPBaseModel
{
    DGPMetroBusModel *_metrobus;
    NSString *_captcha;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *captcha; // @synthesize captcha=_captcha;
@property(retain, nonatomic) DGPMetroBusModel *metrobus; // @synthesize metrobus=_metrobus;
- (void).cxx_destruct;
- (id)transformToOneResonse;

@end
