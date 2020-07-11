//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTExternalIntegrationContent, SPTExternalIntegrationContentControllerObserver, SPTExternalIntegrationContentRequestOptions;

@protocol SPTExternalIntegrationContentController <NSObject>
- (void)removeObserver:(id <SPTExternalIntegrationContentControllerObserver>)arg1;
- (void)addObserver:(id <SPTExternalIntegrationContentControllerObserver>)arg1;
- (void)requestRecommendedRootItemsFromSpacesWithIdentifier:(NSString *)arg1 accessorySessionID:(NSString *)arg2 withCompletionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)resolveChildContentAsFlatListOfParentsWithURIs:(NSArray *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 accessorySessionID:(NSString *)arg3 withCompletionHandler:(void (^)(NSArray *))arg4;
- (void)resolveChildContentOfParentWithURI:(NSURL *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 accessorySessionID:(NSString *)arg3 withCompletionHandler:(void (^)(NSArray *, NSError *))arg4;
- (_Bool)canResolveChildContentWithParentURI:(NSURL *)arg1;
- (void)resolveContentWithURIs:(NSArray *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 withCompletionHandler:(void (^)(NSArray *))arg3;
- (void)resolveContentWithURI:(NSURL *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2 withCompletionHandler:(void (^)(id <SPTExternalIntegrationContent>, NSError *))arg3;
- (id <SPTExternalIntegrationContent>)createPlaceholderContentItemForURI:(NSURL *)arg1 options:(id <SPTExternalIntegrationContentRequestOptions>)arg2;
@end

