//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeSystemAPI-Protocol.h"

@class AVAudioSession, MPMusicPlayerController, NSString, SPTObserverManager, SPTVolumeMPMusicPlayerControllerFactory;

@interface SPTVolumeSystemController : NSObject <SPTVolumeSystemAPI>
{
    AVAudioSession *_audioSession;
    SPTVolumeMPMusicPlayerControllerFactory *_musicPlayerFactory;
    MPMusicPlayerController *_musicPlayerController;
    SPTObserverManager *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) MPMusicPlayerController *musicPlayerController; // @synthesize musicPlayerController=_musicPlayerController;
@property(retain, nonatomic) SPTVolumeMPMusicPlayerControllerFactory *musicPlayerFactory; // @synthesize musicPlayerFactory=_musicPlayerFactory;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (void)dealloc;
- (void)alertObserversOfSystemVolumeChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)outputVolumeSelectorString;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didStartRemoteVolumeSyncing;
- (void)updateSystemVolume:(double)arg1;
- (double)currentSystemVolume;
- (void)observeLocalVolume;
- (id)initWithAudioSession:(id)arg1 musicPlayerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

