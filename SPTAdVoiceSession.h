//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseRegistryObserver-Protocol.h"

@class NSString, SPTAdFeatureFlagChecks, SPTAdPlayerObservable, SPTAdVoiceManager, SPTAdVoiceManagerLegacy, SPTNowPlayingAudioAdMode;
@protocol SPTAccessoryStateManager, SPTAdsBaseCosmosBridge, SPTAdsBaseRegistry, SPTEventSender, SPTLinkDispatcher, SPTVoiceLibrarySession, SPTVoiceSession;

@interface SPTAdVoiceSession : NSObject <SPTAdsBaseRegistryObserver>
{
    id <SPTAdsBaseRegistry> _adRegistry;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTVoiceLibrarySession> _voiceLibrarySession;
    id <SPTVoiceSession> _voiceSession;
    SPTAdVoiceManager *_adVoiceManager;
    SPTAdVoiceManagerLegacy *_legacyAdVoiceManager;
    SPTNowPlayingAudioAdMode *_audioAdMode;
    SPTAdPlayerObservable *_playerObserver;
    SPTAdFeatureFlagChecks *_featureFlagChecker;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    id <SPTEventSender> _eventSender;
}

@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(retain, nonatomic) SPTAdFeatureFlagChecks *featureFlagChecker; // @synthesize featureFlagChecker=_featureFlagChecker;
@property(retain, nonatomic) SPTAdPlayerObservable *playerObserver; // @synthesize playerObserver=_playerObserver;
@property(retain, nonatomic) SPTNowPlayingAudioAdMode *audioAdMode; // @synthesize audioAdMode=_audioAdMode;
@property(retain, nonatomic) SPTAdVoiceManagerLegacy *legacyAdVoiceManager; // @synthesize legacyAdVoiceManager=_legacyAdVoiceManager;
@property(retain, nonatomic) SPTAdVoiceManager *adVoiceManager; // @synthesize adVoiceManager=_adVoiceManager;
@property(retain, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(retain, nonatomic) id <SPTVoiceLibrarySession> voiceLibrarySession; // @synthesize voiceLibrarySession=_voiceLibrarySession;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak id <SPTAdsBaseRegistry> adRegistry; // @synthesize adRegistry=_adRegistry;
- (void).cxx_destruct;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)dealloc;
- (id)initWithAdRegistry:(id)arg1 voiceSession:(id)arg2 voiceLibrarySession:(id)arg3 linkDispatcher:(id)arg4 cosmosBridge:(id)arg5 audioAdMode:(id)arg6 playerObserver:(id)arg7 featureFlagChecker:(id)arg8 accessoryStateManager:(id)arg9 eventSender:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

