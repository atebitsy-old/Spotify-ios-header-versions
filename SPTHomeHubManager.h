//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentRegistry, SPTHomeCommandHandlerFactory, SPTHomeEndpointFactory, SPTHomeViewModelLoaderFactory;
@protocol GLUETheme, SPTCreatePlaylistCommandHandlerFactory, SPTHomeUIService, SPTHubsRendererFactory, SPTLinkDispatcher, SPTOfflineModeState, SPTShareDragDelegateFactory;

@interface SPTHomeHubManager : NSObject
{
    _Bool _isSeedASessionEnabled;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    SPTHomeEndpointFactory *_endpointFactory;
    SPTHomeCommandHandlerFactory *_commandHandlerFactory;
    HUBComponentRegistry *_componentRegistry;
    id <GLUETheme> _GLUETheme;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTHomeUIService> _homeUIService;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    SPTHomeViewModelLoaderFactory *_viewModelLoaderFactory;
    id <SPTCreatePlaylistCommandHandlerFactory> _playlistCreationCommandHandlerFactory;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) _Bool isSeedASessionEnabled; // @synthesize isSeedASessionEnabled=_isSeedASessionEnabled;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTCreatePlaylistCommandHandlerFactory> playlistCreationCommandHandlerFactory; // @synthesize playlistCreationCommandHandlerFactory=_playlistCreationCommandHandlerFactory;
@property(readonly, nonatomic) SPTHomeViewModelLoaderFactory *viewModelLoaderFactory; // @synthesize viewModelLoaderFactory=_viewModelLoaderFactory;
@property(readonly, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(readonly, nonatomic) __weak id <SPTHomeUIService> homeUIService; // @synthesize homeUIService=_homeUIService;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) SPTHomeCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTHomeEndpointFactory *endpointFactory; // @synthesize endpointFactory=_endpointFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
- (void).cxx_destruct;
- (id)makeCommandDispatcherWithURL:(id)arg1 referrerIdentifier:(id)arg2 hubLogger:(id)arg3 viewModelProvider:(id)arg4 overrides:(id)arg5;
- (id)makeViewModelProviderForSourceIdentifier:(id)arg1 overrides:(id)arg2;
- (id)provideHubViewControllerForURL:(id)arg1 sourceIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)initWithHubsRendererFactory:(id)arg1 endpointFactory:(id)arg2 commandHandlerFactory:(id)arg3 componentRegistry:(id)arg4 GLUETheme:(id)arg5 offlineModeState:(id)arg6 homeUIService:(id)arg7 shareDragDelegateFactory:(id)arg8 viewModelLoaderFactory:(id)arg9 playlistCreationCommandHandlerFactory:(id)arg10 linkDispatcher:(id)arg11 seedASessionEnabled:(_Bool)arg12;

@end

