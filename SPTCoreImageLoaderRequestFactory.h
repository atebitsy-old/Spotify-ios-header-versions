//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderRequestFactory-Protocol.h"

@class NSString;
@protocol SPTImageResolver, SPTResolver;

@interface SPTCoreImageLoaderRequestFactory : NSObject <SPTImageLoaderRequestFactory>
{
    id <SPTResolver> _resolver;
    id <SPTImageResolver> _imageResolver;
}

@property(retain, nonatomic) id <SPTImageResolver> imageResolver; // @synthesize imageResolver=_imageResolver;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)provideImageLoaderRequestForURL:(id)arg1 sourceIdentifier:(id)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 callback:(id)arg7 dataLoader:(id)arg8 delegate:(id)arg9 baseImageLoader:(id)arg10;
- (id)initWithResolver:(id)arg1 imageResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

