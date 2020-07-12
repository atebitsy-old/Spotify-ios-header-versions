//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastTestManager-Protocol.h"

@class NSString, SPTPodcastFeatureProperties;
@protocol SPTLocalSettings, SPTProductState;

@interface SPTPodcastTestManagerImplementation : NSObject <SPTPodcastTestManager>
{
    _Bool _podcastFeatureEnabled;
    id <SPTLocalSettings> _localSettings;
    id <SPTProductState> _productState;
    SPTPodcastFeatureProperties *_featureProperties;
}

@property(nonatomic, getter=isPodcastFeatureEnabled) _Bool podcastFeatureEnabled; // @synthesize podcastFeatureEnabled=_podcastFeatureEnabled;
@property(readonly, nonatomic) SPTPodcastFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (_Bool)calculatePodcastFeatureEnabled;
@property(readonly, nonatomic, getter=isPodcastShowPageSearchEnabled) _Bool podcastShowPageSearchEnabled;
@property(readonly, nonatomic, getter=isPodcastNewPlaybackSpeedsEnabled) _Bool podcastNewPlaybackSpeedsEnabled;
@property(readonly, nonatomic, getter=isPodcastDataAccessLayerPodcastRequestEnabled) _Bool podcastDataAccessLayerPodcastRequestEnabled;
@property(readonly, nonatomic, getter=isPodcastPlayButtonShown) _Bool podcastPlayButtonShown;
@property(readonly, nonatomic, getter=isShowsCollectionFeatureEnabled) _Bool showsCollectionFeatureEnabled;
- (id)initWithLocalSettings:(id)arg1 productState:(id)arg2 featureProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

