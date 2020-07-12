//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobileIosLockScreen_MainControlsEventFactory, SPTUBIMobileIosLockScreen_PlaybackProgressEventFactory;

@protocol SPTUBIMobileIosLockScreenEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitUiNavigateWithDestination:(NSURL *)arg1;
- (id <SPTUBIMobileIosLockScreen_MainControlsEventFactory>)mainControlsFactory;
- (id <SPTUBIMobileIosLockScreen_PlaybackProgressEventFactory>)playbackProgressFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
