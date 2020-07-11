//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTPodcastTestManager-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTAbbaFeatureFlags, SPTFeatureFlagSignal, SPTLocalSettings, SPTProductState;

@interface SPTPodcastTestManagerImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTFeatureFlagSignalObserver, SPTPodcastTestManager>
{
    _Bool _podcastFeatureEnabled;
    _Bool _videoFeatureEnabled;
    _Bool _videoEntityPagesEnabled;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTLocalSettings> _localSettings;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _freeTierSignal;
    SPTObserverManager *_observerManager;
    id <SPTFeatureFlagSignal> _podcastYourLibrarySignal;
    id <SPTFeatureFlagSignal> _podcastHeaderV2Signal;
    id <SPTFeatureFlagSignal> _podcastHeaderV2CondensedSizeSignal;
    id <SPTFeatureFlagSignal> _yourLibraryAnchorTestSignal;
    id <SPTFeatureFlagSignal> _yourLibraryAnchorTestSignalPhase2;
    id <SPTFeatureFlagSignal> _podcastTrailersRolloutSignal;
    long long _freeTierState;
    long long _podcastHeaderV2State;
    long long _podcastHeaderV2CondensedSizeState;
    long long _podcastHeaderV2IterationsState;
    long long _podcastTrailersRolloutState;
}

@property(nonatomic) long long podcastTrailersRolloutState; // @synthesize podcastTrailersRolloutState=_podcastTrailersRolloutState;
@property(nonatomic) long long podcastHeaderV2IterationsState; // @synthesize podcastHeaderV2IterationsState=_podcastHeaderV2IterationsState;
@property(nonatomic) long long podcastHeaderV2CondensedSizeState; // @synthesize podcastHeaderV2CondensedSizeState=_podcastHeaderV2CondensedSizeState;
@property(nonatomic) long long podcastHeaderV2State; // @synthesize podcastHeaderV2State=_podcastHeaderV2State;
@property(nonatomic) long long freeTierState; // @synthesize freeTierState=_freeTierState;
@property(nonatomic, getter=isVideoEntityPagesEnabled) _Bool videoEntityPagesEnabled; // @synthesize videoEntityPagesEnabled=_videoEntityPagesEnabled;
@property(nonatomic, getter=isVideoFeatureEnabled) _Bool videoFeatureEnabled; // @synthesize videoFeatureEnabled=_videoFeatureEnabled;
@property(nonatomic, getter=isPodcastFeatureEnabled) _Bool podcastFeatureEnabled; // @synthesize podcastFeatureEnabled=_podcastFeatureEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> podcastTrailersRolloutSignal; // @synthesize podcastTrailersRolloutSignal=_podcastTrailersRolloutSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> yourLibraryAnchorTestSignalPhase2; // @synthesize yourLibraryAnchorTestSignalPhase2=_yourLibraryAnchorTestSignalPhase2;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> yourLibraryAnchorTestSignal; // @synthesize yourLibraryAnchorTestSignal=_yourLibraryAnchorTestSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> podcastHeaderV2CondensedSizeSignal; // @synthesize podcastHeaderV2CondensedSizeSignal=_podcastHeaderV2CondensedSizeSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> podcastHeaderV2Signal; // @synthesize podcastHeaderV2Signal=_podcastHeaderV2Signal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> podcastYourLibrarySignal; // @synthesize podcastYourLibrarySignal=_podcastYourLibrarySignal;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierSignal; // @synthesize freeTierSignal=_freeTierSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void).cxx_destruct;
- (_Bool)calculateVideoEntityPagesEnabled;
- (_Bool)calculateVideoFeatureEnabled;
- (_Bool)calculatePodcastFeatureEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)featureFlagsDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isPodcastTrailerEnabled) _Bool podcastTrailerEnabled;
@property(readonly, nonatomic, getter=isPodcastHeaderV2CondensedSizeEnabled) _Bool podcastHeaderV2CondensedSizeEnabled;
@property(readonly, nonatomic, getter=isPodcastHeaderV2Enabled) _Bool podcastHeaderV2Enabled;
@property(readonly, nonatomic, getter=isRefinedPodcastPageEnabled) _Bool refinedPodcastPageEnabled;
@property(readonly, nonatomic, getter=isProductionisedYourLibraryEnabled) _Bool productionisedYourLibraryEnabled;
@property(readonly, nonatomic, getter=isPodcast3DTouchEnabled) _Bool podcast3DTouchEnabled;
@property(readonly, nonatomic, getter=isPodcastPlaybackOrderEnabled) _Bool podcastPlaybackOrderEnabled;
@property(readonly, nonatomic, getter=isLikeActionEnabled) _Bool likeActionEnabled;
@property(readonly, nonatomic, getter=isFollowActionEnabled) _Bool followActionEnabled;
@property(readonly, nonatomic, getter=isOnboardingTabBarTooltipTestEnabled) _Bool onboardingTabBarTooltipTestEnabled;
@property(readonly, nonatomic, getter=isOnboardingShowcaseTestEnabled) _Bool onboardingShowcaseTestEnabled;
@property(readonly, nonatomic, getter=isShowsCollectionFeatureEnabled) _Bool showsCollectionFeatureEnabled;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)createPodcastTrailerSignal:(id)arg1;
- (void)createPodcastHeaderV2IterationsSignal:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlags:(id)arg1 localSettings:(id)arg2 productState:(id)arg3 freeTierSignal:(id)arg4 featureFlagFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

