//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYUploadTask.h"

#import "NSCoding.h"

@class NSString;

@interface TXYFileUploadTask : TXYUploadTask <NSCoding>
{
    NSString *_directory;
    NSString *_attrs;
}

@property(retain, nonatomic) NSString *attrs; // @synthesize attrs=_attrs;
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 sign:(id)arg2 bucket:(id)arg3 customAttribute:(id)arg4 uploadDirectory:(id)arg5 msgContext:(id)arg6;

@end

