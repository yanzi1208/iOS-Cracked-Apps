//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class XYPHPlaceholder;

@interface XYPHConfigPlaceholder : XYRKModel
{
    XYPHPlaceholder *_homePlaceholder;
    XYPHPlaceholder *_explorePlaceholder;
    XYPHPlaceholder *_storePlaceholder;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) XYPHPlaceholder *storePlaceholder; // @synthesize storePlaceholder=_storePlaceholder;
@property(retain, nonatomic) XYPHPlaceholder *explorePlaceholder; // @synthesize explorePlaceholder=_explorePlaceholder;
@property(retain, nonatomic) XYPHPlaceholder *homePlaceholder; // @synthesize homePlaceholder=_homePlaceholder;
- (void).cxx_destruct;

@end

