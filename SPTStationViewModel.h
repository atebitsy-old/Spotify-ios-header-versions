//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBaseViewModel.h"

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"
#import "SPTRadioPlaybackObserver-Protocol.h"
#import "SPTRadioStationViewModel-Protocol.h"
#import "SPTRadioStationsObserver-Protocol.h"

@class NSArray, NSString, NSURL, SPTRadioPlaybackService, SPTRadioStation, SPTRadioStationsService, SPTUser;
@protocol SPTExplicitContentAccessManager, SPTProductState, SPTStationViewModelDelegate;

@interface SPTStationViewModel : SPTBaseViewModel <SPTRadioPlaybackObserver, SPTRadioStationsObserver, SPTProductStateObserver, SPTExplicitContentEnabledStateObserver, SPTRadioStationViewModel>
{
    NSURL *_stationURL;
    SPTRadioStation *_station;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioStationsService *_stationsService;
    SPTUser *_currentUser;
    long long _stationType;
    id <SPTProductState> _productState;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
}

+ (long long)typeForStationURL:(id)arg1;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) long long stationType; // @synthesize stationType=_stationType;
@property(retain, nonatomic) SPTUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak SPTRadioStationsService *stationsService; // @synthesize stationsService=_stationsService;
@property(nonatomic) __weak SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) SPTRadioStation *station; // @synthesize station=_station;
@property(readonly, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)radioStationService:(id)arg1 loadingTracksError:(id)arg2 forStation:(id)arg3;
- (void)radioStationService:(id)arg1 loadedTracksForStation:(id)arg2;
- (void)radioPlaybackService:(id)arg1 error:(id)arg2;
- (void)radioPlaybackServiceCurrentTrackChanged:(id)arg1;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id *)arg3;
- (_Bool)isOfflineError:(id)arg1;
- (id)displayableErrorMessageForError:(id)arg1;
@property(readonly, nonatomic, getter=isAlbumStation) _Bool albumStation;
@property(readonly, nonatomic, getter=isArtistStation) _Bool artistStation;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (_Bool)playTrackAtIndex:(long long)arg1 didUserTapTrackRow:(_Bool)arg2 referrerIdentifier:(id)arg3;
- (_Bool)playTrackAtIndex:(long long)arg1 referrerIdentifier:(id)arg2;
- (void)loadMoreTracks:(CDUnknownBlockType)arg1;
- (void)pausePlayback;
- (_Bool)startPlaybackDidUserTapTrackRow:(_Bool)arg1 referrerIdentifier:(id)arg2;
- (_Bool)startPlaybackWithReferrerIdentifier:(id)arg1;
- (void)togglePlaybackWithReferrerIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *trackURIs;
@property(readonly, nonatomic) long long numberOfTracks;
@property(readonly, nonatomic, getter=areTracksShuffled) _Bool tracksShuffled;
@property(readonly, nonatomic) long long imageStyle;
@property(readonly, nonatomic) NSString *relatedArtistsText;
@property(readonly, nonatomic) NSArray *relatedArtists;
- (_Bool)trackIsDisabledAtIndexPath:(id)arg1;
- (_Bool)trackIsCurrentlyPlayingAtIndexPath:(id)arg1;
- (id)trackAtIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *primaryActionText;
@property(readonly, nonatomic) NSURL *imageURI;
@property(readonly, copy, nonatomic) NSString *saveToPlaylistTitle;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *seedURL;
- (void)dealloc;
- (void)requestDataForKey:(id)arg1;
- (void)digestNewStation:(id)arg1;
- (id)initWithStationURL:(id)arg1 productState:(id)arg2 playbackService:(id)arg3 stationsService:(id)arg4 offlineModeState:(id)arg5 dataLoader:(id)arg6 currentUser:(id)arg7 radioTestManager:(id)arg8 explicitContentAccessManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTStationViewModelDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSuccessfullyLoadedData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

