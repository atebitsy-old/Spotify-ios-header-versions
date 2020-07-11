//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUIContinueListeningService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTAbbaService, SPTEventSenderService, SPTFeatureFlagSignal, SPTPodcastFeature, SPTPodcastUITestManager;

@interface SPTPodcastUIContinueListeningServiceImplementation : NSObject <SPTPodcastUIContinueListeningService>
{
    _Bool _forceShowContinueListeningInDebugMode;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTFeatureFlagSignal> _enabledSignal;
    id <SPTPodcastUITestManager> _testManager;
    id <SPTAbbaService> _abbaService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(retain, nonatomic) id <SPTPodcastUITestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) _Bool forceShowContinueListeningInDebugMode; // @synthesize forceShowContinueListeningInDebugMode=_forceShowContinueListeningInDebugMode;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledSignal; // @synthesize enabledSignal=_enabledSignal;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
- (void).cxx_destruct;
- (id)providePodcastContinueListeningContentOperation;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

