//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMethodSignature;

@interface NVMAspectData : NSObject
{
    _Bool _hasNoReturnValue;
    Class _cls;
    SEL _selector;
    NSMethodSignature *_methodSignature;
    CDUnknownFunctionPointerType _oriIMP;
    id _impBlock;
    NSMethodSignature *_blockSignature;
}

+ (id)aspectDataWithClass:(Class)arg1 selector:(SEL)arg2 impBlock:(id)arg3 error:(id *)arg4;
@property(retain, nonatomic) NSMethodSignature *blockSignature; // @synthesize blockSignature=_blockSignature;
@property(copy, nonatomic) id impBlock; // @synthesize impBlock=_impBlock;
@property(nonatomic) CDUnknownFunctionPointerType oriIMP; // @synthesize oriIMP=_oriIMP;
@property(nonatomic) _Bool hasNoReturnValue; // @synthesize hasNoReturnValue=_hasNoReturnValue;
@property(retain, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) Class cls; // @synthesize cls=_cls;
- (void).cxx_destruct;
- (id)description;

@end

