//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModePivotSubtitleIconResolverObserver-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSError, NSString, SPTDrivingModePivotDataLoader, SPTDrivingModePivotItem, SPTDrivingModePivotItemDecorator, SPTDrivingModePivotSubtitleIconResolver, SPTObserverManager;
@protocol SPTOfflineModeState, SPTPlayer;

@interface SPTDrivingModePivotList : NSObject <SPTOfflineModeStateObserver, SPTPlayerObserver, SPTDrivingModePivotSubtitleIconResolverObserver>
{
    NSError *_error;
    SPTDrivingModePivotDataLoader *_dataLoader;
    id <SPTPlayer> _player;
    SPTDrivingModePivotItemDecorator *_decorator;
    NSArray *_loadedItems;
    SPTDrivingModePivotItem *_nowPlayingItem;
    SPTObserverManager *_observerManager;
    id <SPTOfflineModeState> _offlineModeState;
    SPTDrivingModePivotSubtitleIconResolver *_subtitleIconResolver;
}

+ (_Bool)array:(id)arg1 containsItemWithURI:(id)arg2;
@property(readonly, nonatomic) SPTDrivingModePivotSubtitleIconResolver *subtitleIconResolver; // @synthesize subtitleIconResolver=_subtitleIconResolver;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTDrivingModePivotItem *nowPlayingItem; // @synthesize nowPlayingItem=_nowPlayingItem;
@property(copy, nonatomic) NSArray *loadedItems; // @synthesize loadedItems=_loadedItems;
@property(readonly, nonatomic) SPTDrivingModePivotItemDecorator *decorator; // @synthesize decorator=_decorator;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTDrivingModePivotDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)decorateLoadedItems:(id)arg1;
- (void)decorateNowPlayingItemWithURI:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)createErrorForOfflineState:(_Bool)arg1;
- (id)providePivotItems;
- (void)updateSubtitleIconForNowPlayingItem;
- (_Bool)updateNowPlayingItemWithURI:(id)arg1;
- (void)onSubtitleIconResolverDidChange:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)triggerReloadIfEmptyOrFailed;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 player:(id)arg2 offlineModeState:(id)arg3 decorator:(id)arg4 subtitleIconResolver:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

