//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVideoCDNSelector;

@interface SPTSpotifyVideoHLSDataFactory : NSObject
{
    _Bool _subtitlesEnabled;
    SPTVideoCDNSelector *_cdnSelector;
}

@property(nonatomic) _Bool subtitlesEnabled; // @synthesize subtitlesEnabled=_subtitlesEnabled;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
- (void).cxx_destruct;
- (id)createHLSDataWithMasterManifest:(id)arg1;
- (id)createHLSSubtitleDataWithManifest:(id)arg1 forProfileID:(unsigned long long)arg2;
- (id)createHLSDataWithManifest:(id)arg1 forProfileID:(unsigned long long)arg2;
- (id)initWithCDNSelector:(id)arg1 subtitlesEnabled:(_Bool)arg2;

@end

