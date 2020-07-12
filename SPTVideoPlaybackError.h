//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoPlaybackError-Protocol.h"

@class NSError, NSString;

@interface SPTVideoPlaybackError : NSObject <SPTVideoPlaybackError>
{
    _Bool _manifestError;
    _Bool _unrecoverable;
    NSError *_videoError;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *videoError; // @synthesize videoError=_videoError;
@property(readonly, nonatomic, getter=isUnrecoverable) _Bool unrecoverable; // @synthesize unrecoverable=_unrecoverable;
@property(readonly, nonatomic, getter=isManifestError) _Bool manifestError; // @synthesize manifestError=_manifestError;
- (id)initWithVideoError:(id)arg1 manifestError:(_Bool)arg2 unrecoverable:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

