//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTNSegmentBarItemData, TTNSegmentView, UIResponder;

@protocol TTNSegmentViewDataSource <NSObject>
- (unsigned long long)numberOfItemsInSegmentView:(TTNSegmentView *)arg1;
- (UIResponder *)segmentView:(TTNSegmentView *)arg1 viewOfIndex:(unsigned long long)arg2;
- (TTNSegmentBarItemData *)segmentView:(TTNSegmentView *)arg1 itemOfIndex:(unsigned long long)arg2;
@end
