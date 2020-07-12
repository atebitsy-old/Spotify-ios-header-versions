//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTThirdPartyUserTracker-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTInhouseUserTracker : NSObject <SPTThirdPartyUserTracker>
{
    _Bool _enableUserTracker;
    NSString *_trackerUserID;
    id <SPTLogCenter> _logCenter;
    NSString *_deviceID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) NSString *trackerUserID; // @synthesize trackerUserID=_trackerUserID;
@property(readonly, nonatomic, getter=shouldEnableUserTracker) _Bool enableUserTracker; // @synthesize enableUserTracker=_enableUserTracker;
- (void)userDidLoginWithProductState:(id)arg1;
- (id)initWithLogCenter:(id)arg1 deviceID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

