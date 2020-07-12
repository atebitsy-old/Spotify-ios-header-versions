//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicHiddenContentModel-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTYourLibraryMusicHiddenContentModelDelegate;

@interface SPTYourLibraryMusicHiddenContentModelImplementation : NSObject <SPTYourLibraryMusicHiddenContentModel>
{
    _Bool _loaded;
    _Bool _hasHiddenSongs;
    _Bool _hasHiddenArtists;
    id <SPTYourLibraryMusicHiddenContentModelDelegate> delegate;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionSubscription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionSubscription; // @synthesize collectionSubscription=_collectionSubscription;
@property(nonatomic) _Bool hasHiddenArtists; // @synthesize hasHiddenArtists=_hasHiddenArtists;
@property(nonatomic) _Bool hasHiddenSongs; // @synthesize hasHiddenSongs=_hasHiddenSongs;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(nonatomic) __weak id <SPTYourLibraryMusicHiddenContentModelDelegate> delegate; // @synthesize delegate;
- (void)subscribeCollectionHiddenContent;
- (void)loadModel;
- (id)initWithCollectionDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

