//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginTraitAwareViewController.h"

#import "SPTMagicLinkDoRequestViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSURL, SPTLoginMagicLinkDoRequestView, SPTLoginMagicLinkDoRequestViewModel, SPTLoginTheme, SPTProgressView;
@protocol SPTPageContainer;

@interface SPTLoginMagicLinkDoRequestViewController : SPTLoginTraitAwareViewController <SPTNavigationControllerNavigationBarState, SPTPageController, UITextFieldDelegate, SPTMagicLinkDoRequestViewModelDelegate>
{
    SPTLoginMagicLinkDoRequestViewModel *_viewModel;
    SPTProgressView *_progressView;
    SPTLoginTheme *_theme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) SPTLoginMagicLinkDoRequestViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)viewModelDidSucceedRequestMagicLink:(id)arg1;
- (void)viewModel:(id)arg1 didFailRequestMagicLinkWithError:(id)arg2;
- (void)viewModelDidStartRequestMagicLink:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)checkTextFieldStatus:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideRequestLoginLinkInProgressState;
- (void)showRequestLoginLinkInProgressState;
- (void)doRequest;
- (void)checkPreexistingError;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLoginMagicLinkDoRequestView *view; // @dynamic view;

@end

