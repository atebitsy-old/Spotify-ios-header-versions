//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNotificationCenter-Protocol.h"

@class NSNotificationCenter, NSString;

@interface SPTNotificationCenterImpl : NSObject <SPTNotificationCenter>
{
    NSNotificationCenter *_nsNotificationCenter;
}

@property(retain, nonatomic) NSNotificationCenter *nsNotificationCenter; // @synthesize nsNotificationCenter=_nsNotificationCenter;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)initWithNotificationCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

