//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAdOverlayImageContentViewDataSource-Protocol.h"
#import "SPTAdsPromotedContentImageViewDelegate-Protocol.h"

@class NSString, SPTAdFeatureFlagChecks, SPTTheme, UIView;
@protocol GLUEImageLoader, SPTAdOverlayContentUnitDelegate, SPTAdsBaseCosmosBridge, SPTAdsBaseImageEntity, SPTAdsManager, SPTAdsMobileOverlayContentView;

@interface SPTAdOverlayImageContentViewController : UIViewController <SPTAdsPromotedContentImageViewDelegate, SPTAdOverlayImageContentViewDataSource>
{
    _Bool _imageLoaded;
    _Bool _viewDisplayed;
    id <SPTAdOverlayContentUnitDelegate> _delegate;
    UIView<SPTAdsMobileOverlayContentView> *_overlayContentView;
    id <SPTAdsBaseImageEntity> _entity;
    id <SPTAdsManager> _adManager;
    id <GLUEImageLoader> _imageLoader;
    SPTTheme *_theme;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    SPTAdFeatureFlagChecks *_featureChecker;
}

@property(nonatomic) _Bool viewDisplayed; // @synthesize viewDisplayed=_viewDisplayed;
@property(nonatomic) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(readonly, nonatomic) SPTAdFeatureFlagChecks *featureChecker; // @synthesize featureChecker=_featureChecker;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTAdsManager> adManager; // @synthesize adManager=_adManager;
@property(readonly, nonatomic) id <SPTAdsBaseImageEntity> entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) UIView<SPTAdsMobileOverlayContentView> *overlayContentView; // @synthesize overlayContentView=_overlayContentView;
@property(nonatomic) __weak id <SPTAdOverlayContentUnitDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dismissText;
- (id)title;
- (void)didLoadContentImage:(id)arg1;
- (_Bool)isGoogleHomeOverlay;
- (void)postImpressionIfNeeded;
- (_Bool)isCompanionBanner;
- (void)actionButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEntity:(id)arg1 adManager:(id)arg2 imageLoader:(id)arg3 theme:(id)arg4 cosmosBridge:(id)arg5 featureChecker:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

