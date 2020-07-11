//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTArtistAboutService-Protocol.h"

@class NSString, SPTAllocationContext, SPTArtistAboutGLUETheme, SPTArtistAboutHubComponentFactoryImplementation, SPTArtistAboutModerationRegistrar;
@protocol SPContextMenuFeature, SPTContainerService, SPTCoreService, SPTGLUEService, SPTModerationService, SPTNetworkService, SPTPerformanceMetricsService, SPTURIDispatchService;

@interface SPTArtistAboutServiceImplementation : NSObject <SPTArtistAboutService>
{
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTModerationService> _moderationService;
    SPTArtistAboutGLUETheme *_glueTheme;
    SPTArtistAboutHubComponentFactoryImplementation *_hubComponentFactory;
    SPTArtistAboutModerationRegistrar *_moderationRegistrar;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTArtistAboutModerationRegistrar *moderationRegistrar; // @synthesize moderationRegistrar=_moderationRegistrar;
@property(retain, nonatomic) SPTArtistAboutHubComponentFactoryImplementation *hubComponentFactory; // @synthesize hubComponentFactory=_hubComponentFactory;
@property(retain, nonatomic) SPTArtistAboutGLUETheme *glueTheme; // @synthesize glueTheme=_glueTheme;
@property(nonatomic) __weak id <SPTModerationService> moderationService; // @synthesize moderationService=_moderationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideArtistAboutViewController:(id)arg1;
- (id)provideHubComponentFactory;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

