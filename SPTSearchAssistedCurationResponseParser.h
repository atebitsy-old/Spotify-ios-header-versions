//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchPlatformResponseParser-Protocol.h"

@class HUBViewModelBuilderFactory, NSString, NSURL;
@protocol SPTExplicitContentAccessManager, SPTSearch2EmptyStatePropertiesProvider, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTSearchAssistedCurationResponseParser : NSObject <SPTSearchPlatformResponseParser>
{
    _Bool _isDrilldown;
    NSString *_query;
    HUBViewModelBuilderFactory *_viewModelBuilderFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    NSURL *_pageURI;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic) _Bool isDrilldown; // @synthesize isDrilldown=_isDrilldown;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)emptyStateProperties;
- (id)renderableEntitiesPredicate;
- (id)componentModelIdentifierWithSectionID:(id)arg1 itemIndex:(id)arg2;
- (id)seeAllRowsFromEntityTypes:(id)arg1 requestID:(id)arg2;
- (id)artistsForTrackEntity:(id)arg1;
- (id)artistsForAlbumEntity:(id)arg1;
- (long long)placeholderSPTIconForEntity:(id)arg1;
- (id)placeholderIconForEntity:(id)arg1;
- (id)navigateCommandWithURI:(id)arg1;
- (id)navigateAndSaveToHistoryCommandForEntity:(id)arg1;
- (id)addTrackCommandWithURI:(id)arg1;
- (id)eventsForEntity:(id)arg1;
- (id)customDataForEntity:(id)arg1;
- (id)metadataForEntity:(id)arg1;
- (id)mainImageDataForEntity:(id)arg1;
- (id)subtitleForEntity:(id)arg1 includingTypeName:(_Bool)arg2;
- (id)rowsForEntities:(id)arg1 requestID:(id)arg2 sectionID:(id)arg3 offset:(unsigned long long)arg4;
- (id)resultsViewModelForMainResponse:(id)arg1 requestID:(id)arg2;
- (id)noResultsViewModelWithRequestID:(id)arg1;
- (id)viewModelForMainResponse:(id)arg1 requestID:(id)arg2;
- (int)entityTypeForEntity:(id)arg1;
- (id)sectionIDForEntityType:(int)arg1;
- (id)drilldownTitleForQuery:(id)arg1 entityType:(int)arg2;
- (id)resultsViewModelForDrillDownResponse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3;
- (id)viewModelForDrillDownResponse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3;
- (id)parseDrillDownResponse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3 error:(id *)arg4;
- (id)parseMainResponse:(id)arg1 requestID:(id)arg2 error:(id *)arg3;
- (id)parse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithQuery:(id)arg1 pageURI:(id)arg2 viewModelBuilderFactory:(id)arg3 emptyStatePropertiesProvider:(id)arg4 explicitContentAccessManager:(id)arg5 ageVerificationProvider:(id)arg6 isDrilldown:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

