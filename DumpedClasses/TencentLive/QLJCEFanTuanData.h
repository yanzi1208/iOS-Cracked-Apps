//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCEFanTuanData : JceObjectV2
{
    NSString *jcev2_p_0_r_fanTuanId;
    NSString *jcev2_p_1_r_feedId;
    NSString *jcev2_p_2_o_seq;
    NSString *jcev2_p_3_o_h5ShareUrl;
    QLJCEAction *jcev2_p_4_o_feedAction;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_feedAction, setter=setJce_feedAction:) QLJCEAction *jcev2_p_4_o_feedAction; // @synthesize jcev2_p_4_o_feedAction;
@property(retain, nonatomic, getter=jce_h5ShareUrl, setter=setJce_h5ShareUrl:) NSString *jcev2_p_3_o_h5ShareUrl; // @synthesize jcev2_p_3_o_h5ShareUrl;
@property(retain, nonatomic, getter=jce_seq, setter=setJce_seq:) NSString *jcev2_p_2_o_seq; // @synthesize jcev2_p_2_o_seq;
@property(retain, nonatomic, getter=jce_feedId, setter=setJce_feedId:) NSString *jcev2_p_1_r_feedId; // @synthesize jcev2_p_1_r_feedId;
@property(retain, nonatomic, getter=jce_fanTuanId, setter=setJce_fanTuanId:) NSString *jcev2_p_0_r_fanTuanId; // @synthesize jcev2_p_0_r_fanTuanId;
- (void).cxx_destruct;
- (id)init;

@end
