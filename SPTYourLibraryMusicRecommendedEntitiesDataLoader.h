//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTYourLibraryMusicRangeDataLoader-Protocol.h"

@class NSArray, NSString, NSURL, SPTDataLoader;
@protocol SPTCollectionPlatform, SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTYourLibraryMusicRangeDataLoaderDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicRecommendedEntitiesDataLoader : NSObject <SPTDataLoaderDelegate, SPTYourLibraryMusicRangeDataLoader>
{
    _Bool _requested;
    _Bool _filtersActive;
    id <SPTYourLibraryMusicRangeDataLoaderDelegate> _rangeDataLoaderDelegate;
    NSString *_textFilter;
    SPTDataLoader *_dataLoader;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    id <SPTCollectionPlatform> _collectionPlatform;
    unsigned long long _type;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionStateToken;
    unsigned long long _totalNumberOfItems;
    NSArray *_recommendedEntities;
    NSString *_responseItemKey;
    struct _NSRange _requestedRange;
}

@property(copy, nonatomic) NSString *responseItemKey; // @synthesize responseItemKey=_responseItemKey;
@property(nonatomic) _Bool filtersActive; // @synthesize filtersActive=_filtersActive;
@property(copy, nonatomic) NSArray *recommendedEntities; // @synthesize recommendedEntities=_recommendedEntities;
@property(nonatomic) struct _NSRange requestedRange; // @synthesize requestedRange=_requestedRange;
@property(nonatomic) unsigned long long totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionStateToken; // @synthesize collectionStateToken=_collectionStateToken;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) _Bool requested; // @synthesize requested=_requested;
@property(nonatomic) __weak id <SPTYourLibraryMusicRangeDataLoaderDelegate> rangeDataLoaderDelegate; // @synthesize rangeDataLoaderDelegate=_rangeDataLoaderDelegate;
- (void).cxx_destruct;
- (id)artistNameFromRecommendedItem:(id)arg1;
- (id)nameFromRecommendedItem:(id)arg1;
- (_Bool)containsOneOfFilterWords:(id)arg1 inText:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dispatchDidLoadItems;
- (id)filterRecommendations:(id)arg1 withText:(id)arg2;
- (void)loadMetadataForArtists:(id)arg1;
- (void)subscribeToArtistCollectionState;
- (void)loadMetadataForAlbums:(id)arg1;
- (void)subscribeToAlbumCollectionState;
- (void)loadItemsForRange:(struct _NSRange)arg1 sortRules:(id)arg2 filterRules:(id)arg3 textFilter:(id)arg4;
@property(readonly, nonatomic) NSArray *sectionIndices;
@property(readonly, nonatomic) NSURL *serviceURL;
- (id)initWithDataLoader:(id)arg1 collectionPlatform:(id)arg2 type:(unsigned long long)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

