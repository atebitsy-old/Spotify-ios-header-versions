//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSharingSDKLinkGenerationPayload-Protocol.h"

@class NSSet, NSString;
@protocol SPTSharingSDKUTMTag;

@interface SPTSharingSDKLinkGenerationPayloadImpl : NSObject <SPTSharingSDKLinkGenerationPayload>
{
    NSString *_spotifyURIString;
    id <SPTSharingSDKUTMTag> _utmTag;
    NSSet *_extraQueryItems;
}

@property(readonly, nonatomic) NSSet *extraQueryItems; // @synthesize extraQueryItems=_extraQueryItems;
@property(readonly, nonatomic) id <SPTSharingSDKUTMTag> utmTag; // @synthesize utmTag=_utmTag;
@property(readonly, copy, nonatomic) NSString *spotifyURIString; // @synthesize spotifyURIString=_spotifyURIString;
- (void).cxx_destruct;
- (id)initWithSpotifyURIString:(id)arg1 utmTag:(id)arg2 extraQueryItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
