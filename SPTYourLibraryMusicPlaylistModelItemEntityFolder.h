//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicPlaylistModelItemEntity-Protocol.h"

@class NSString, NSURL;

@interface SPTYourLibraryMusicPlaylistModelItemEntityFolder : NSObject <SPTYourLibraryMusicPlaylistModelItemEntity>
{
    _Bool _loaded;
    _Bool _onDemand;
    _Bool _hidden;
    NSString *_name;
    NSString *_itemDescription;
    NSURL *_URL;
    NSURL *_imageURL;
    NSString *_groupLabel;
    unsigned long long _availableOfflineStatus;
}

@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic, getter=isOnDemand) _Bool onDemand; // @synthesize onDemand=_onDemand;
@property(readonly, nonatomic) unsigned long long availableOfflineStatus; // @synthesize availableOfflineStatus=_availableOfflineStatus;
@property(readonly, nonatomic) NSString *groupLabel; // @synthesize groupLabel=_groupLabel;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithFolder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

