//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface Decomposer : NSObject
{
    NSMutableArray *_blocks;
    id _owner;
}

@property(readonly) id owner; // @synthesize owner=_owner;
@property(readonly) NSMutableArray *blocks; // @synthesize blocks=_blocks;
- (void).cxx_destruct;
- (void)decomposer;
- (void)addDecomposer:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

