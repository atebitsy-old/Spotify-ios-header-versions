//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginRecoverAccountDataLoaderDelegate-Protocol.h"

@class NSString, SPTLoginMagicLinkDoRequestViewLogger, SPTLoginMagicLinkRequestTracker, SPTLoginMagicLinkRequestWarningPresenter, SPTLoginRecoverAccountDataLoader, SPTLoginTheme;
@protocol SPTLoginNavigationCoordinator, SPTMagicLinkDoRequestViewModelDelegate;

@interface SPTLoginMagicLinkDoRequestViewModel : NSObject <SPTLoginRecoverAccountDataLoaderDelegate>
{
    id <SPTMagicLinkDoRequestViewModelDelegate> _delegate;
    NSString *_emailOrUsername;
    SPTLoginMagicLinkDoRequestViewLogger *_logger;
    SPTLoginTheme *_theme;
    NSString *_errorMessage;
    SPTLoginRecoverAccountDataLoader *_recoverAccountDataLoader;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    SPTLoginMagicLinkRequestTracker *_magicLinkRequestTracker;
    SPTLoginMagicLinkRequestWarningPresenter *_magicLinkRequestWarningPresenter;
}

@property(readonly, nonatomic) SPTLoginMagicLinkRequestWarningPresenter *magicLinkRequestWarningPresenter; // @synthesize magicLinkRequestWarningPresenter=_magicLinkRequestWarningPresenter;
@property(readonly, nonatomic) SPTLoginMagicLinkRequestTracker *magicLinkRequestTracker; // @synthesize magicLinkRequestTracker=_magicLinkRequestTracker;
@property(readonly, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) SPTLoginRecoverAccountDataLoader *recoverAccountDataLoader; // @synthesize recoverAccountDataLoader=_recoverAccountDataLoader;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginMagicLinkDoRequestViewLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *emailOrUsername; // @synthesize emailOrUsername=_emailOrUsername;
@property(nonatomic) __weak id <SPTMagicLinkDoRequestViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)localizedDescriptionForError:(id)arg1;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2 forEmail:(id)arg3;
- (void)dataLoader:(id)arg1 didFinishLoadingWithSuccessForEmail:(id)arg2;
- (void)startRequestForLoginLinkWithEmail:(id)arg1;
- (void)requestLoginLinkWithEmail:(id)arg1;
- (id)nextButtonText;
- (id)fieldDisclosureLabelText;
- (id)fieldTitleLabelText;
- (id)titleLabelText;
- (id)preExistingDisclosureLabelErrorMessage;
- (id)viewStyle;
- (id)initWithTheme:(id)arg1 emailOrUsername:(id)arg2 errorMessage:(id)arg3 recoverAccountDataLoader:(id)arg4 navigationCoordinator:(id)arg5 logger:(id)arg6 magicLinkRequestTracker:(id)arg7 magicLinkWarningPresenter:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

