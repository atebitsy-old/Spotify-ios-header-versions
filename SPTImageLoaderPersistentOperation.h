//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class NSString, NSURL;
@protocol SPTImageLoader;

@interface SPTImageLoaderPersistentOperation : NSOperation <SPTImageLoaderDelegate>
{
    _Bool _isFinished;
    _Bool _isExecuting;
    NSURL *_URL;
    NSString *_key;
    NSString *_sourceIdentifier;
    id <SPTImageLoader> _imageLoader;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)init;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)start;
- (id)initWithURL:(id)arg1 sourceIdentifier:(id)arg2 key:(id)arg3 imageLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

