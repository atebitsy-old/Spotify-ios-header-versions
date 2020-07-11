//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol SPTImageLoader, SPTSpotlightItemsImageLoaderDelegate;

@interface SPTSpotlightItemsImageLoader : NSObject <SPTImageLoaderDelegate>
{
    _Bool _circularImages;
    id <SPTSpotlightItemsImageLoaderDelegate> _delegate;
    id <SPTImageLoader> _imageLoader;
    NSArray *_items;
    NSMutableDictionary *_itemForURL;
}

@property(retain, nonatomic) NSMutableDictionary *itemForURL; // @synthesize itemForURL=_itemForURL;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) _Bool circularImages; // @synthesize circularImages=_circularImages;
@property(nonatomic) __weak id <SPTSpotlightItemsImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishLoadingForURL:(id)arg2 error:(id)arg3;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)loadImagesForItems:(id)arg1;
- (id)initWithImageLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

