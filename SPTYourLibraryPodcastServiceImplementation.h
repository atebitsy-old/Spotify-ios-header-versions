//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastYourLibraryPageProviderDelegate-Protocol.h"
#import "SPTYourLibraryPodcastService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTContainerService, SPTExplicitContentService, SPTGLUEService, SPTPerformanceMetricsService, SPTPodcastFeature, SPTPodcastUIService, SPTRecentlyPlayedService, SPTSessionService, SPTYourLibraryService;

@interface SPTYourLibraryPodcastServiceImplementation : NSObject <SPTPodcastYourLibraryPageProviderDelegate, SPTYourLibraryPodcastService>
{
    _Bool _podcastEntityContentTypeRegistered;
    id <SPTContainerService> _containerService;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTYourLibraryService> _yourLibraryService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTGLUEService> _glueService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool podcastEntityContentTypeRegistered; // @synthesize podcastEntityContentTypeRegistered=_podcastEntityContentTypeRegistered;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <SPTYourLibraryService> yourLibraryService; // @synthesize yourLibraryService=_yourLibraryService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (id)podcastYourLibraryPageProvider:(id)arg1 podcastPlayerWithViewURI:(id)arg2 featureIdentifier:(id)arg3 referrerIdentifier:(id)arg4;
- (id)showsPageProvider;
- (id)downloadsPageProvider;
- (id)episodesPageProvider;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

