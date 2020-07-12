//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderRequest-Protocol.h"

@class NSDate, NSString, NSURL, SPTYourLibraryMusicSongsImageStyle;
@protocol SPTImageLoaderRemoteCallback, SPTImageLoaderRequestDelegate;

@interface SPTYourLibraryMusicImageLoaderRequest : NSObject <SPTImageLoaderRequest>
{
    _Bool _allowUpscaling;
    _Bool _preventInMemoryCaching;
    _Bool _preventPersistentCaching;
    _Bool _cancelled;
    NSURL *_URL;
    NSDate *_creationDate;
    id <SPTImageLoaderRemoteCallback> _callback;
    id _context;
    NSString *_persistenceKey;
    id <SPTImageLoaderRequestDelegate> _delegate;
    SPTYourLibraryMusicSongsImageStyle *_imageStyle;
    struct CGSize _requestedSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTYourLibraryMusicSongsImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) __weak id <SPTImageLoaderRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool preventPersistentCaching; // @synthesize preventPersistentCaching=_preventPersistentCaching;
@property(readonly, nonatomic) _Bool preventInMemoryCaching; // @synthesize preventInMemoryCaching=_preventInMemoryCaching;
@property(retain, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey=_persistenceKey;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <SPTImageLoaderRemoteCallback> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=_requestedSize;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) _Bool allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
- (id)initWithURL:(id)arg1 imageStyle:(id)arg2 requestedSize:(struct CGSize)arg3 allowsUpscaling:(_Bool)arg4 context:(id)arg5 callback:(id)arg6 delegate:(id)arg7;
- (void)cancel;
- (void)load;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

