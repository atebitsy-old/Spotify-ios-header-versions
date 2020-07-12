//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesUserInterfaceFactory-Protocol.h"

@class NSString, SPTScannablesAuthorizationRequester, SPTScannablesDependencies, SPTScannablesScanViewModelFactory;
@protocol SPTAlertController, SPTPageLoaderViewService, SPTScannablesDataSource, SPTScannablesOnboardingPresenter;

@interface SPTScannablesUserInterfaceFactoryImplementation : NSObject <SPTScannablesUserInterfaceFactory>
{
    SPTScannablesScanViewModelFactory *_scannablesScanViewModelFactory;
    id <SPTScannablesDataSource> _scannableDataSource;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    id <SPTScannablesOnboardingPresenter> _onboardingPresenter;
    SPTScannablesDependencies *_dependencies;
    id <SPTAlertController> _alertController;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) id <SPTScannablesOnboardingPresenter> onboardingPresenter; // @synthesize onboardingPresenter=_onboardingPresenter;
@property(readonly, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(readonly, nonatomic) id <SPTScannablesDataSource> scannableDataSource; // @synthesize scannableDataSource=_scannableDataSource;
@property(readonly, nonatomic) SPTScannablesScanViewModelFactory *scannablesScanViewModelFactory; // @synthesize scannablesScanViewModelFactory=_scannablesScanViewModelFactory;
- (id)provideImagePickerController;
- (id)createScannableImageViewForEntityURL:(id)arg1;
- (id)provideScanViewControllerWithSourceIdentifier:(id)arg1;
- (id)createContextMenuViewHeaderWithTitle:(id)arg1 subtitle:(id)arg2 entityURL:(id)arg3 imageURL:(id)arg4 fallbackHeader:(id)arg5;
- (id)initWithScanViewModelFactory:(id)arg1 dataSource:(id)arg2 authorizationRequester:(id)arg3 onboardingPresenter:(id)arg4 dependencies:(id)arg5 alertController:(id)arg6 pageLoaderViewService:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

