//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeRemoteConfiguration-Protocol.h"

@class NSString, SPTDrivingFeatureProperties;

@interface SPTDrivingModeRemoteConfigurationImplementation : NSObject <SPTDrivingModeRemoteConfiguration>
{
    SPTDrivingFeatureProperties *_remoteProperties;
}

@property(readonly, nonatomic) SPTDrivingFeatureProperties *remoteProperties; // @synthesize remoteProperties=_remoteProperties;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHomeFeedEnabled) _Bool drivingCarViewHomeFeed;
@property(readonly, nonatomic, getter=isScreenlockPreventionEnabled) _Bool screenlockPreventionEnabled;
@property(readonly, nonatomic, getter=isSwipeToSkipEnabled) _Bool swipeToSkipEnabled;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

