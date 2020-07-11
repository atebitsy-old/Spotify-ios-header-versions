//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTYourLibraryMusicFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _playlistsRelevanceSortAsDefaultEnabled;
    _Bool _likedSongsArtistAlbumGroupingsEnabled;
    _Bool _likedSongsUsePageLoader;
    _Bool _offlineArtistEnabled;
    unsigned long long _artistRecommendationsSource;
    unsigned long long _quickscrollMechanismInYourLibrary;
    NSString *_artistRecommendationsSourceString;
    NSString *_quickscrollMechanismInYourLibraryString;
}

@property(retain, nonatomic) NSString *quickscrollMechanismInYourLibraryString; // @synthesize quickscrollMechanismInYourLibraryString=_quickscrollMechanismInYourLibraryString;
@property(retain, nonatomic) NSString *artistRecommendationsSourceString; // @synthesize artistRecommendationsSourceString=_artistRecommendationsSourceString;
@property(readonly, nonatomic) unsigned long long quickscrollMechanismInYourLibrary; // @synthesize quickscrollMechanismInYourLibrary=_quickscrollMechanismInYourLibrary;
@property(readonly, nonatomic) unsigned long long artistRecommendationsSource; // @synthesize artistRecommendationsSource=_artistRecommendationsSource;
@property(readonly, nonatomic) _Bool offlineArtistEnabled; // @synthesize offlineArtistEnabled=_offlineArtistEnabled;
@property(readonly, nonatomic) _Bool likedSongsUsePageLoader; // @synthesize likedSongsUsePageLoader=_likedSongsUsePageLoader;
@property(readonly, nonatomic) _Bool likedSongsArtistAlbumGroupingsEnabled; // @synthesize likedSongsArtistAlbumGroupingsEnabled=_likedSongsArtistAlbumGroupingsEnabled;
@property(readonly, nonatomic) _Bool playlistsRelevanceSortAsDefaultEnabled; // @synthesize playlistsRelevanceSortAsDefaultEnabled=_playlistsRelevanceSortAsDefaultEnabled;
- (void).cxx_destruct;
- (unsigned long long)mapQuickscrollMechanismInYourLibraryToEnumValue:(id)arg1;
- (unsigned long long)mapArtistRecommendationsSourceToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

