//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, NSURL, SPTArtistAboutGLUETheme, SPTArtistAboutLogger, SPTArtistAboutStateProvider, UICollectionView;
@protocol GLUEImageLoader;

@interface SPTArtistAboutImageGalleryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    _Bool _didSwipe;
    NSArray *_galleryImages;
    NSURL *_artistURI;
    id <GLUEImageLoader> _glueImageLoader;
    SPTArtistAboutStateProvider *_stateProvider;
    SPTArtistAboutGLUETheme *_theme;
    SPTArtistAboutLogger *_logger;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didSwipe; // @synthesize didSwipe=_didSwipe;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SPTArtistAboutLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTArtistAboutGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTArtistAboutStateProvider *stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) NSURL *artistURI; // @synthesize artistURI=_artistURI;
@property(copy, nonatomic) NSArray *galleryImages; // @synthesize galleryImages=_galleryImages;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)sizeForCell;
- (void)updateCollectionViewContentInset;
- (void)didTapGallery:(id)arg1;
- (void)applyGalleryEffects;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)displayedGalleryImage;
- (void)addLayoutConstraints;
- (void)viewDidLoad;
- (id)initWithGLUEImageLoader:(id)arg1 theme:(id)arg2 logger:(id)arg3 stateProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

