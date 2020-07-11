//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol SPTFormatListItemModel <NSObject>
@property(readonly, nonatomic, getter=isBanned) _Bool banned;
@property(readonly, nonatomic, getter=isInCollection) _Bool inCollection;
@property(readonly, nonatomic, getter=isLocallyPlayable) _Bool locallyPlayable;
@property(readonly, nonatomic, getter=isBackgroundable) _Bool backgroundable;
@property(readonly, nonatomic, getter=isExplicitItem) _Bool explicitItem;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, copy, nonatomic) NSString *previewID;
@property(readonly, copy, nonatomic) NSString *mediaType;
@property(readonly, copy, nonatomic) NSString *manifestID;
@property(readonly, nonatomic) NSDictionary *covers;
@property(readonly, nonatomic) NSDictionary *freezeFrames;
@property(readonly, copy, nonatomic) NSString *freeformDescription;
@property(retain, nonatomic) NSDictionary *displayCovers;
@property(readonly, nonatomic) NSDictionary *albumCovers;
@property(readonly, nonatomic) NSURL *albumURL;
@property(readonly, copy, nonatomic) NSString *albumName;
@property(readonly, nonatomic) NSURL *artistURL;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSString *UID;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDictionary *formatListAttributes;
@end

