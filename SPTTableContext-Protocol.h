//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTTableRowAdapter, UITableViewCell, UIViewController;

@protocol SPTTableContext <NSObject>
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) __weak UIViewController *viewController;
- (void)deselectSelectedCell:(_Bool)arg1;
- (UITableViewCell *)cellForRowAdapter:(SPTTableRowAdapter *)arg1;
- (UITableViewCell *)dequeueReusableCellOfClass:(Class)arg1 forRowAdapter:(SPTTableRowAdapter *)arg2;
- (void)reloadTableData;
@end

