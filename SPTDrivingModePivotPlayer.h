//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol SPTExternalIntegrationPlaybackController, SPTOnDemandSet;

@interface SPTDrivingModePivotPlayer : NSObject
{
    NSURL *_queuedURI;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTOnDemandSet> _onDemandSet;
    NSMutableDictionary *_resumePoints;
    NSMutableDictionary *_resumeURIs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *resumeURIs; // @synthesize resumeURIs=_resumeURIs;
@property(readonly, nonatomic) NSMutableDictionary *resumePoints; // @synthesize resumePoints=_resumePoints;
@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) NSURL *queuedURI; // @synthesize queuedURI=_queuedURI;
- (id)playOptionsForSkipTo:(id)arg1 seekTo:(id)arg2;
- (id)resumeOptionsFor:(id)arg1;
- (void)updatePlaybackStatusFromPlayerState:(id)arg1;
- (void)clearQueuedURI;
- (void)resumePlaybackForContextURI:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 onDemandSet:(id)arg2;

@end

