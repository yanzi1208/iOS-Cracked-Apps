//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ListMenuInfo : NSObject
{
    _Bool _enableSelect;
    NSString *_title;
    NSString *_imageName;
    unsigned long long _tag;
}

@property(nonatomic) _Bool enableSelect; // @synthesize enableSelect=_enableSelect;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 withImageName:(id)arg2 withTag:(unsigned long long)arg3;

@end
