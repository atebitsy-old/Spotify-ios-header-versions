//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_LabelContainer_ArtistLabelEventFactory, SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_LabelContainer_TitleLabelEventFactory;

@protocol SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_LabelContainerEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_LabelContainer_ArtistLabelEventFactory>)artistLabelFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_LabelContainer_TitleLabelEventFactory>)titleLabelFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

