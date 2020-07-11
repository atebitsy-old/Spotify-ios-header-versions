//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBaseViewModelDelegate-Protocol.h"

@class SPTStationViewModel;
@protocol SPTRadioStationViewModel;

@protocol SPTStationViewModelDelegate <SPTBaseViewModelDelegate>
- (void)stationViewModelUpdatedTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelFailedToLoadMoreTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelLoadedMoreTracks:(id <SPTRadioStationViewModel>)arg1;
- (void)stationViewModelPlaybackStateChanged:(SPTStationViewModel *)arg1;
- (void)stationViewModelCurrentTrackDidChange:(SPTStationViewModel *)arg1;
@end

