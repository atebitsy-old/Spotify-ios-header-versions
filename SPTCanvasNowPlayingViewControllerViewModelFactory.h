//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTCanvasImageResolverFactory, SPTCanvasTooltipPresentationManager;
@protocol SPTCanvasIdleMonitorObserverDelegate, SPTCanvasTrackChecker, SPTLinkDispatcher;

@interface SPTCanvasNowPlayingViewControllerViewModelFactory : NSObject
{
    id <SPTCanvasTrackChecker> _canvasTrackChecker;
    SPTCanvasImageResolverFactory *_imageResolverFactory;
    SPTCanvasTooltipPresentationManager *_tooltipManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTCanvasIdleMonitorObserverDelegate> _idleMonitorDelegate;
}

@property(readonly, nonatomic) __weak id <SPTCanvasIdleMonitorObserverDelegate> idleMonitorDelegate; // @synthesize idleMonitorDelegate=_idleMonitorDelegate;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTCanvasTooltipPresentationManager *tooltipManager; // @synthesize tooltipManager=_tooltipManager;
@property(readonly, nonatomic) SPTCanvasImageResolverFactory *imageResolverFactory; // @synthesize imageResolverFactory=_imageResolverFactory;
@property(readonly, nonatomic) id <SPTCanvasTrackChecker> canvasTrackChecker; // @synthesize canvasTrackChecker=_canvasTrackChecker;
- (void).cxx_destruct;
- (id)createViewModelForTrack:(id)arg1;
- (id)initWithCanvasTrackChecker:(id)arg1 imageResolverFactory:(id)arg2 linkDispatcher:(id)arg3 idleMonitorDelegate:(id)arg4 tooltipManager:(id)arg5;

@end

