//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLocalFileItemInfo-Protocol.h"

@class NSString, NSURL;

@protocol SPTLocalFileTrackInfo <SPTLocalFileItemInfo>
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) long long playbackDuration;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *albumTitle;
@property(readonly, nonatomic) NSString *artist;
@end

