//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_HeartButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_LabelContainerEventFactory;

@protocol SPTUBIMobileNowPlayingViewDefault_TrackInformationContainerEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_TrackInformationContainer_LabelContainerEventFactory>)labelContainerFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

