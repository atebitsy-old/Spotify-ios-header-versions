//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTStorylinesAttributionViewModelDelegate-Protocol.h"
#import "SPTStorylinesLoaderDelegate-Protocol.h"
#import "SPTStorylinesProgressionManagerDelegate-Protocol.h"

@class NSString, SPTStorylinesAttributionViewModel, SPTStorylinesEnabledManager, SPTStorylinesLoader, SPTStorylinesProgressionManager, SPTStorylinesState, SPTStorylinesUBILogger, UIImage;
@protocol SPTOfflineModeState, SPTStorylinesViewModelDelegate, SPTStorylinesViewModelUIDelegate;

@interface SPTStorylinesViewModel : NSObject <SPTStorylinesAttributionViewModelDelegate, SPTStorylinesLoaderDelegate, SPTStorylinesProgressionManagerDelegate, SPTOfflineModeStateObserver>
{
    _Bool _autoplayTriggered;
    _Bool _active;
    SPTStorylinesState *_state;
    id <SPTStorylinesViewModelDelegate> _delegate;
    id <SPTStorylinesViewModelUIDelegate> _uiDelegate;
    SPTStorylinesAttributionViewModel *_attributionViewModel;
    SPTStorylinesLoader *_storylinesLoader;
    SPTStorylinesEnabledManager *_enabledManager;
    SPTStorylinesProgressionManager *_progressionManager;
    SPTStorylinesUBILogger *_logger;
    id <SPTOfflineModeState> _offlineModeState;
    UIImage *_currentImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTStorylinesUBILogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTStorylinesProgressionManager *progressionManager; // @synthesize progressionManager=_progressionManager;
@property(readonly, nonatomic) SPTStorylinesEnabledManager *enabledManager; // @synthesize enabledManager=_enabledManager;
@property(readonly, nonatomic) SPTStorylinesLoader *storylinesLoader; // @synthesize storylinesLoader=_storylinesLoader;
@property(readonly, nonatomic) SPTStorylinesAttributionViewModel *attributionViewModel; // @synthesize attributionViewModel=_attributionViewModel;
@property(nonatomic) __weak id <SPTStorylinesViewModelUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) __weak id <SPTStorylinesViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTStorylinesState *state; // @synthesize state=_state;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isAutoplayTriggered) _Bool autoplayTriggered; // @synthesize autoplayTriggered=_autoplayTriggered;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)didUpdateProgress:(double)arg1 atIndex:(unsigned long long)arg2 isReset:(_Bool)arg3;
- (void)didChangeCurrentCardIndex:(unsigned long long)arg1;
- (void)didFailToLoadImageForStorylinesCard:(id)arg1;
- (void)sendImpressionLog;
- (void)didLoadImage:(id)arg1 forStorylinesCard:(id)arg2;
- (void)didFailToLoadStorylinesForTrack:(id)arg1;
- (void)setupStorylines;
- (void)didLoadStorylines:(id)arg1 forTrack:(id)arg2;
- (void)updateFollowText:(id)arg1 forEntity:(id)arg2;
- (void)didLoadArtistAvatarImage:(id)arg1 forArtist:(id)arg2;
- (id)getCollectionViewFrom:(id)arg1;
- (id)getCollectionViewCellFrom:(id)arg1;
- (double)getPercentInViewFrom:(id)arg1;
- (void)toggleFollowForStoryline;
- (void)navigateToArtistPageFromAttribution:(_Bool)arg1;
- (void)regressToPreviousCard;
- (void)advanceToNextCard;
- (void)resetStoryline;
- (void)pauseCardProgression:(_Bool)arg1;
- (void)didScrollToStorylines;
- (void)loadStorylinesForTrack:(id)arg1 isReload:(_Bool)arg2;
- (void)setState:(id)arg1;
- (id)currentCard;
- (id)track;
- (id)storylines;
@property(readonly, nonatomic) _Bool shouldPlay;
- (void)dealloc;
- (id)initWithAttributionViewModel:(id)arg1 storylinesLoader:(id)arg2 enabledManager:(id)arg3 progressionManager:(id)arg4 logger:(id)arg5 offlineModeState:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

