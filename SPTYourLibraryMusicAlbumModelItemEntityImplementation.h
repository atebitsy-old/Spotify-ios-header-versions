//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicAlbumModelItemEntity-Protocol.h"

@class NSString;
@protocol SPTYourLibraryMusicAlbumEntity;

@interface SPTYourLibraryMusicAlbumModelItemEntityImplementation : NSObject <SPTYourLibraryMusicAlbumModelItemEntity>
{
    _Bool _inCollection;
    id <SPTYourLibraryMusicAlbumEntity> _albumEntity;
    unsigned long long _type;
}

@property(readonly, nonatomic) _Bool inCollection; // @synthesize inCollection=_inCollection;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <SPTYourLibraryMusicAlbumEntity> albumEntity; // @synthesize albumEntity=_albumEntity;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOnDemand) _Bool onDemand;
- (id)initWithAlbumEntity:(id)arg1 inCollection:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

