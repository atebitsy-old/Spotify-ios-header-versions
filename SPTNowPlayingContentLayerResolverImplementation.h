//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingContentLayerProviderDelegate-Protocol.h"
#import "SPTNowPlayingContentLayerResolver-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol SPTNowPlayingContentLayerResolverDelegate;

@interface SPTNowPlayingContentLayerResolverImplementation : NSObject <SPTNowPlayingContentLayerProviderDelegate, SPTNowPlayingContentLayerResolver>
{
    id <SPTNowPlayingContentLayerResolverDelegate> delegate;
    NSMutableDictionary *_providers;
    NSArray *_sortedProviders;
}

@property(copy, nonatomic) NSArray *sortedProviders; // @synthesize sortedProviders=_sortedProviders;
@property(readonly, nonatomic) NSMutableDictionary *providers; // @synthesize providers=_providers;
@property(nonatomic) __weak id <SPTNowPlayingContentLayerResolverDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)provider:(id)arg1 needsRefreshForTrack:(id)arg2;
- (id)allProviders;
- (id)providerForTrack:(id)arg1 playerState:(id)arg2;
- (void)refreshSortedProviders;
- (void)unregisterProvider:(id)arg1;
- (void)registerProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

