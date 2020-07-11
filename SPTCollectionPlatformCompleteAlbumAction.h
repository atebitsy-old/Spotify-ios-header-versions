//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, NSURL;
@protocol SPTCollectionPlatform;

@interface SPTCollectionPlatformCompleteAlbumAction : SPAction <UIAlertViewDelegate>
{
    id <SPTCollectionPlatform> _collectionPlatform;
    NSURL *_link;
    NSURL *_sourceURL;
}

@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (long long)icon;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (id)title;
- (id)initWithLink:(id)arg1 collectionPlatform:(id)arg2 logContext:(id)arg3 sourceURL:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

