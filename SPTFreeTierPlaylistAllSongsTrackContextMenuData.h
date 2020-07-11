//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierAllSongsTrackContextMenuData-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTFreeTierPlaylistAllSongsTrackContextMenuData : NSObject <SPTFreeTierAllSongsTrackContextMenuData>
{
    NSString *_albumName;
    NSArray *_artists;
    NSURL *_imageURL;
    NSString *_trackName;
    NSURL *_trackURL;
}

@property(readonly, copy, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(readonly, copy, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (id)initWithTrackURL:(id)arg1 trackName:(id)arg2 imageURL:(id)arg3 albumName:(id)arg4 artists:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

