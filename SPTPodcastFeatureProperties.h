//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTPodcastFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _podcastEpisodeFollowEnabled;
    _Bool _podcastEntityPageShowPlayButton;
    _Bool _podcastDataAccessLayerPodcastRequestEnabled;
    _Bool _podcastNewPlaybackSpeedsEnabled;
    _Bool _podcastShowPageSearchEnabled;
    _Bool _podcastShowPageHtmlDescriptionEnabled;
    unsigned long long _followShowConfirmationOverride;
    unsigned long long _unfollowShowConfirmationOverride;
    NSString *_followShowConfirmationOverrideString;
    NSString *_unfollowShowConfirmationOverrideString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *unfollowShowConfirmationOverrideString; // @synthesize unfollowShowConfirmationOverrideString=_unfollowShowConfirmationOverrideString;
@property(retain, nonatomic) NSString *followShowConfirmationOverrideString; // @synthesize followShowConfirmationOverrideString=_followShowConfirmationOverrideString;
@property(readonly, nonatomic) unsigned long long unfollowShowConfirmationOverride; // @synthesize unfollowShowConfirmationOverride=_unfollowShowConfirmationOverride;
@property(readonly, nonatomic) unsigned long long followShowConfirmationOverride; // @synthesize followShowConfirmationOverride=_followShowConfirmationOverride;
@property(readonly, nonatomic) _Bool podcastShowPageHtmlDescriptionEnabled; // @synthesize podcastShowPageHtmlDescriptionEnabled=_podcastShowPageHtmlDescriptionEnabled;
@property(readonly, nonatomic) _Bool podcastShowPageSearchEnabled; // @synthesize podcastShowPageSearchEnabled=_podcastShowPageSearchEnabled;
@property(readonly, nonatomic) _Bool podcastNewPlaybackSpeedsEnabled; // @synthesize podcastNewPlaybackSpeedsEnabled=_podcastNewPlaybackSpeedsEnabled;
@property(readonly, nonatomic) _Bool podcastDataAccessLayerPodcastRequestEnabled; // @synthesize podcastDataAccessLayerPodcastRequestEnabled=_podcastDataAccessLayerPodcastRequestEnabled;
@property(readonly, nonatomic) _Bool podcastEntityPageShowPlayButton; // @synthesize podcastEntityPageShowPlayButton=_podcastEntityPageShowPlayButton;
@property(readonly, nonatomic) _Bool podcastEpisodeFollowEnabled; // @synthesize podcastEpisodeFollowEnabled=_podcastEpisodeFollowEnabled;
- (unsigned long long)mapUnfollowShowConfirmationOverrideToEnumValue:(id)arg1;
- (unsigned long long)mapFollowShowConfirmationOverrideToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

