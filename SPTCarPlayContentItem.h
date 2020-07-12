//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class NSCache, NSString, SPTCarPlayFeatureProperties, SPTCarPlayGradientImageBuilder;
@protocol SPTExternalIntegrationContent, SPTImageLoader;

@interface SPTCarPlayContentItem : MPContentItem <SPTImageLoaderDelegate>
{
    _Bool _didLoadArtwork;
    id <SPTExternalIntegrationContent> _content;
    id <SPTImageLoader> _imageLoader;
    SPTCarPlayGradientImageBuilder *_imageBuilder;
    NSCache *_iconCache;
    SPTCarPlayFeatureProperties *_properties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTCarPlayFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) SPTCarPlayGradientImageBuilder *imageBuilder; // @synthesize imageBuilder=_imageBuilder;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) _Bool didLoadArtwork; // @synthesize didLoadArtwork=_didLoadArtwork;
@property(readonly, nonatomic) id <SPTExternalIntegrationContent> content; // @synthesize content=_content;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)setArtworkImage:(id)arg1;
- (void)configurePlaceholderArtwork;
- (void)loadArtwork;
- (void)didRequestContentItem;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithExternalIntegrationContent:(id)arg1 imageLoader:(id)arg2 imageBuilder:(id)arg3 properties:(id)arg4 iconCache:(id)arg5 playable:(_Bool)arg6;
- (_Bool)isErrorItem;
- (_Bool)isShuffleItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

