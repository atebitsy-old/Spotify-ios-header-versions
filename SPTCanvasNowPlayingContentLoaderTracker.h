//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasContentLayerViewControllerViewModelLoadDelegate-Protocol.h"
#import "SPTCanvasViewControllerViewModelLoadDelegate-Protocol.h"

@class NSMapTable, NSString, SPTCanvasLoadEventLogger, SPTCanvasLoadStateTracker;

@interface SPTCanvasNowPlayingContentLoaderTracker : NSObject <SPTCanvasViewControllerViewModelLoadDelegate, SPTCanvasContentLayerViewControllerViewModelLoadDelegate>
{
    SPTCanvasLoadEventLogger *_loadEventLogger;
    SPTCanvasLoadStateTracker *_loadStateTracker;
    NSMapTable *_loadStates;
}

@property(retain, nonatomic) NSMapTable *loadStates; // @synthesize loadStates=_loadStates;
@property(retain, nonatomic) SPTCanvasLoadStateTracker *loadStateTracker; // @synthesize loadStateTracker=_loadStateTracker;
@property(retain, nonatomic) SPTCanvasLoadEventLogger *loadEventLogger; // @synthesize loadEventLogger=_loadEventLogger;
- (void).cxx_destruct;
- (void)didFailToLoadViewModel:(id)arg1 withError:(id)arg2;
- (void)didLoadViewModel:(id)arg1;
- (void)willLoadViewModel:(id)arg1;
- (void)setCanvasLoaded:(_Bool)arg1 forCanvasWithCanvasId:(id)arg2 usingLegacyViewModel:(id)arg3;
- (id)canvasLoadStateForCanvasWithCanvasId:(id)arg1 usingLegacyViewModel:(id)arg2;
- (void)didFailToLoadViewControllerViewModel:(id)arg1 withError:(id)arg2;
- (void)didLoadViewControllerViewModel:(id)arg1;
- (void)willLoadViewControllerViewModel:(id)arg1;
- (void)setCanvasLoaded:(_Bool)arg1 forCanvasWithCanvasId:(id)arg2 usingViewModel:(id)arg3;
- (id)canvasLoadStateForCanvasWithCanvasId:(id)arg1 usingViewModel:(id)arg2;
- (id)initWithLoadEventLogger:(id)arg1 loadStateTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

