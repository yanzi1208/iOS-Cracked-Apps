//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DYCDynamicProperty : NSObject
{
    _Bool _isInstance;
    _Bool _optional;
    NSString *_name;
    NSString *_attrs;
    unsigned long long _attrCount;
}

@property(nonatomic) unsigned long long attrCount; // @synthesize attrCount=_attrCount;
@property(nonatomic) _Bool optional; // @synthesize optional=_optional;
@property(nonatomic) _Bool isInstance; // @synthesize isInstance=_isInstance;
@property(retain, nonatomic) NSString *attrs; // @synthesize attrs=_attrs;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
