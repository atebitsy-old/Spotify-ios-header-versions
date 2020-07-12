//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEntitySeeAllSongsService, SPTHubCommandHandlerFactory, SPTHubsRendererFactory, SPTPlayerFeature;

@interface SPTFreeTierArtistCommandHandlerFactory : NSObject
{
    id <SPTHubCommandHandlerFactory> _defaultCommandHandlerFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTEntitySeeAllSongsService> _allSongsService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTEntitySeeAllSongsService> allSongsService; // @synthesize allSongsService=_allSongsService;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <SPTHubCommandHandlerFactory> defaultCommandHandlerFactory; // @synthesize defaultCommandHandlerFactory=_defaultCommandHandlerFactory;
- (id)createLoggerForViewURI:(id)arg1;
- (id)createArtistReleasesCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3;
- (id)createArtistViewCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3 explicitContentAccessManager:(id)arg4 ageVerificationProvider:(id)arg5 inAppMessageRequester:(id)arg6;
- (id)createCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3 explicitContentAccessManager:(id)arg4 ageVerificationProvider:(id)arg5 inAppMessageRequester:(id)arg6;
- (id)initWithDefaultCommandHandlerFactory:(id)arg1 playerService:(id)arg2 hubsRendererFactory:(id)arg3 allSongsService:(id)arg4;

@end

