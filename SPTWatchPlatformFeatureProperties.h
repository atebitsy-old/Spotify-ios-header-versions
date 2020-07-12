//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTWatchPlatformFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _appleWatchOffline;
    _Bool _watchIosLogging;
    _Bool _watchIosIntegration;
    _Bool _credentialStoreSendCredentials;
    _Bool _watchIntentsHandling;
    _Bool _appleWatchStreaming;
    _Bool _appleWatchMockingbird;
    _Bool _appleWatchHoneyBees;
    unsigned long long _appleWatchPubsubTransport;
    unsigned long long _appleWatchBitrate;
    NSString *_appleWatchPubsubTransportString;
    NSString *_appleWatchBitrateString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appleWatchBitrateString; // @synthesize appleWatchBitrateString=_appleWatchBitrateString;
@property(retain, nonatomic) NSString *appleWatchPubsubTransportString; // @synthesize appleWatchPubsubTransportString=_appleWatchPubsubTransportString;
@property(readonly, nonatomic) unsigned long long appleWatchBitrate; // @synthesize appleWatchBitrate=_appleWatchBitrate;
@property(readonly, nonatomic) unsigned long long appleWatchPubsubTransport; // @synthesize appleWatchPubsubTransport=_appleWatchPubsubTransport;
@property(readonly, nonatomic) _Bool appleWatchHoneyBees; // @synthesize appleWatchHoneyBees=_appleWatchHoneyBees;
@property(readonly, nonatomic) _Bool appleWatchMockingbird; // @synthesize appleWatchMockingbird=_appleWatchMockingbird;
@property(readonly, nonatomic) _Bool appleWatchStreaming; // @synthesize appleWatchStreaming=_appleWatchStreaming;
@property(readonly, nonatomic) _Bool watchIntentsHandling; // @synthesize watchIntentsHandling=_watchIntentsHandling;
@property(readonly, nonatomic) _Bool credentialStoreSendCredentials; // @synthesize credentialStoreSendCredentials=_credentialStoreSendCredentials;
@property(readonly, nonatomic) _Bool watchIosIntegration; // @synthesize watchIosIntegration=_watchIosIntegration;
@property(readonly, nonatomic) _Bool watchIosLogging; // @synthesize watchIosLogging=_watchIosLogging;
@property(readonly, nonatomic) _Bool appleWatchOffline; // @synthesize appleWatchOffline=_appleWatchOffline;
- (unsigned long long)mapAppleWatchBitrateToEnumValue:(id)arg1;
- (unsigned long long)mapAppleWatchPubsubTransportToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

