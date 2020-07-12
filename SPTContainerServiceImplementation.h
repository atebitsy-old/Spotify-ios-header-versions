//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContainerService-Protocol.h"

@class MetaViewController, NSString, SPTAllocationContext, SPTKeychainManagerImpl, SPTNavigationManager, SPTPageRegistryImplementation, SpotifyAppDelegate;
@protocol SPTContainerUIService, SPTNotificationSystemDelegate, SPTUICompletionNotifier, SPTURIDispatchService;

@interface SPTContainerServiceImplementation : NSObject <SPTContainerService>
{
    SpotifyAppDelegate *_appDelegate;
    id <SPTContainerUIService> _containerUIService;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTPageRegistryImplementation *_pageRegistry;
    MetaViewController *_metaViewController;
    id <SPTUICompletionNotifier> _UICompletionNotifier;
    SPTNavigationManager *_navigationManager;
    SPTKeychainManagerImpl *_keychainManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTKeychainManagerImpl *keychainManager; // @synthesize keychainManager=_keychainManager;
@property(retain, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) id <SPTUICompletionNotifier> UICompletionNotifier; // @synthesize UICompletionNotifier=_UICompletionNotifier;
@property(retain, nonatomic) MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTPageRegistryImplementation *pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak SpotifyAppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTNotificationSystemDelegate> notificationSystemDelegate;
- (id)provideKeychainManager;
- (CDUnknownBlockType)provideContainerLogoutHandler;
- (id)providePageRegistry;
- (id)provideStartupTracer;
- (id)provideLogCenter;
- (id)provideUICompletionNotifier;
- (id)provideNavigationRouter;
- (id)provideNavigationManager;
- (id)provideMetaViewController;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

