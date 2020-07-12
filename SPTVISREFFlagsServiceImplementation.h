//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVISREFFlagsService-Protocol.h"

@class NSString, SPTAllocationContext, SPTGLUEFeatureProperties;
@protocol SPTRemoteConfigurationService;

@interface SPTVISREFFlagsServiceImplementation : NSObject <SPTVISREFFlagsService>
{
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTGLUEFeatureProperties *_properties;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTGLUEFeatureProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(readonly, nonatomic, getter=isVisualRefreshAnimatedHeartEnabled) _Bool visualRefreshAnimatedHeartEnabled;
@property(readonly, nonatomic, getter=isEncorePlaylistHeaderEnabled) _Bool encorePlaylistHeaderEnabled;
@property(readonly, nonatomic, getter=isEncoreAlbumHeaderEnabled) _Bool encoreAlbumHeaderEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshGreenButtonEnabled) _Bool visualRefreshGreenButtonEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshHeaderEnabled) _Bool visualRefreshHeaderEnabled;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

