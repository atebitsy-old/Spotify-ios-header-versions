//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRadioRemoteConfigProperties-Protocol.h"

@class NSString, SPTRadioFeatureProperties;
@protocol SPTRemoteConfigurationService;

@interface SPTRadioRemoteConfigPropertiesWrapperImplementation : NSObject <SPTRadioRemoteConfigProperties>
{
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTRadioFeatureProperties *_remoteConfigurationProperties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTRadioFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(readonly, nonatomic) _Bool isRadioURITransitionEnabled;
@property(readonly, nonatomic) _Bool isLegacyRadioEntityPagesEnabled;
@property(readonly, nonatomic) _Bool isRadioContextMenuActionForFreeUsersEnabled;
- (void)lazyLoadRemoteConfigurationProperties;
- (id)initWithRemoteConfigurationService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

