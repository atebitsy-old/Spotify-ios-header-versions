//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, SPTHomeMixMetadataModelEntity;

@interface SPTHomeMixDomainModelBuilder : NSObject
{
    _Bool _loaded;
    _Bool _enabled;
    _Bool _genrePageContextMenuDisabled;
    _Bool _playing;
    _Bool _playingHomeMixContext;
    _Bool _explicitContentRestricted;
    _Bool _offline;
    _Bool _tasteOnboardingRequired;
    _Bool _moodTuningFlagEnabled;
    _Bool _pendingMoodChange;
    _Bool _contextMenuSettingsFlagEnabled;
    _Bool _settingsChangePending;
    _Bool _joinPending;
    NSURL *_homeMixURI;
    NSString *_username;
    SPTHomeMixMetadataModelEntity *_metadataEntity;
    NSArray *_trackEntities;
    NSURL *_currentlyPlayingTrackURI;
    unsigned long long _entityDisplayMode;
    unsigned long long _mood;
}

+ (id)defaultBuilder;
@property(nonatomic, getter=isJoinPending) _Bool joinPending; // @synthesize joinPending=_joinPending;
@property(nonatomic, getter=isSettingsChangePending) _Bool settingsChangePending; // @synthesize settingsChangePending=_settingsChangePending;
@property(nonatomic, getter=isContextMenuSettingsFlagEnabled) _Bool contextMenuSettingsFlagEnabled; // @synthesize contextMenuSettingsFlagEnabled=_contextMenuSettingsFlagEnabled;
@property(nonatomic, getter=isPendingMoodChange) _Bool pendingMoodChange; // @synthesize pendingMoodChange=_pendingMoodChange;
@property(nonatomic) unsigned long long mood; // @synthesize mood=_mood;
@property(nonatomic, getter=isMoodTuningFlagEnabled) _Bool moodTuningFlagEnabled; // @synthesize moodTuningFlagEnabled=_moodTuningFlagEnabled;
@property(nonatomic) unsigned long long entityDisplayMode; // @synthesize entityDisplayMode=_entityDisplayMode;
@property(nonatomic, getter=isTasteOnboardingRequired) _Bool tasteOnboardingRequired; // @synthesize tasteOnboardingRequired=_tasteOnboardingRequired;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic, getter=isExplicitContentRestricted) _Bool explicitContentRestricted; // @synthesize explicitContentRestricted=_explicitContentRestricted;
@property(nonatomic, getter=isPlayingHomeMixContext) _Bool playingHomeMixContext; // @synthesize playingHomeMixContext=_playingHomeMixContext;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(copy, nonatomic) NSURL *currentlyPlayingTrackURI; // @synthesize currentlyPlayingTrackURI=_currentlyPlayingTrackURI;
@property(nonatomic, getter=isGenrePageContextMenuDisabled) _Bool genrePageContextMenuDisabled; // @synthesize genrePageContextMenuDisabled=_genrePageContextMenuDisabled;
@property(copy, nonatomic) NSArray *trackEntities; // @synthesize trackEntities=_trackEntities;
@property(retain, nonatomic) SPTHomeMixMetadataModelEntity *metadataEntity; // @synthesize metadataEntity=_metadataEntity;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSURL *homeMixURI; // @synthesize homeMixURI=_homeMixURI;
- (void).cxx_destruct;
- (id)toModel;

@end

