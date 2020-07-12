//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTYourLibraryOfflineBanner-Protocol.h"
#import "SPTYourLibraryOfflineBannerViewModelDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SPTYourLibraryGLUETheme, SPTYourLibraryOfflineBannerView;
@protocol SPTYourLibraryOfflineBannerViewModel;

@interface SPTYourLibraryOfflineBannerViewController : UIViewController <SPTYourLibraryOfflineBanner, SPTYourLibraryOfflineBannerViewModelDelegate>
{
    id <SPTYourLibraryOfflineBannerViewModel> _viewModel;
    SPTYourLibraryGLUETheme *_theme;
    SPTYourLibraryOfflineBannerView *_bannerView;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_bannerViewBottomActiveConstraint;
    unsigned long long _bannerState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bannerState; // @synthesize bannerState=_bannerState;
@property(retain, nonatomic) NSLayoutConstraint *bannerViewBottomActiveConstraint; // @synthesize bannerViewBottomActiveConstraint=_bannerViewBottomActiveConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) SPTYourLibraryOfflineBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) SPTYourLibraryGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTYourLibraryOfflineBannerViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)displayIfNeeded;
- (void)dismiss;
- (_Bool)isBannerDismissed;
- (void)setBannerHidden:(_Bool)arg1;
- (void)updateBannerWithModel:(id)arg1;
- (void)offlineViewModelDidUpdate:(id)arg1;
- (void)offlineViewModel:(id)arg1 finished:(_Bool)arg2;
- (void)offlineViewModelDidBegin:(id)arg1;
- (void)setupConstraints;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

