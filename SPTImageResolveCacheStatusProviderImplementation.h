//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageResolveCacheStatusProvider-Protocol.h"

@class NSString;
@protocol SPTResolver;

@interface SPTImageResolveCacheStatusProviderImplementation : NSObject <SPTImageResolveCacheStatusProvider>
{
    id <SPTResolver> _resolver;
}

@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)lookupCacheStatusForImageURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCosmosResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

