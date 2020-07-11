//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLanguageOnboardingDataLoaderDelegate-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSURL, SPTLanguageOnboardingDataLoader, SPTLanguageOnboardingLogger, SPTNetworkConnectivityController;
@protocol SPTLanguageOnboardingViewModelDelegate;

@interface SPTLanguageOnboardingViewModel : NSObject <SPTNetworkConnectivityControllerObserver, SPTLanguageOnboardingDataLoaderDelegate>
{
    _Bool _didLogScroll;
    id <SPTLanguageOnboardingViewModelDelegate> _delegate;
    NSURL *_pageURI;
    SPTLanguageOnboardingLogger *_logger;
    NSMutableArray *_loggedLanguages;
    SPTLanguageOnboardingDataLoader *_dataLoader;
    SPTNetworkConnectivityController *_connectivityController;
    NSArray *_availableLanguages;
    NSMutableSet *_selectedLanguages;
}

@property(retain, nonatomic) NSMutableSet *selectedLanguages; // @synthesize selectedLanguages=_selectedLanguages;
@property(copy, nonatomic) NSArray *availableLanguages; // @synthesize availableLanguages=_availableLanguages;
@property(retain, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(retain, nonatomic) SPTLanguageOnboardingDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) NSMutableArray *loggedLanguages; // @synthesize loggedLanguages=_loggedLanguages;
@property(nonatomic) _Bool didLogScroll; // @synthesize didLogScroll=_didLogScroll;
@property(readonly, nonatomic) SPTLanguageOnboardingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(nonatomic) __weak id <SPTLanguageOnboardingViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)languageOnboardingDataLoader:(id)arg1 didFailToUpdateSelectedLanguages:(id)arg2;
- (void)languageOnboardingDataLoader:(id)arg1 didFailToFetchAvailableLanguages:(id)arg2;
- (void)languageOnboardingDataLoader:(id)arg1 didFailToFetchSelectedLanguages:(id)arg2;
- (void)languageOnboardingDataLoaderDidUpdateSelectedLanguages:(id)arg1;
- (void)languageOnboardingDataLoader:(id)arg1 didFetchSelectedLanguages:(id)arg2;
- (void)languageOnboardingDataLoader:(id)arg1 didFetchAvailableLanguages:(id)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)didPresentNoNetworkView;
- (void)didPresentLanguageView;
- (void)didPresentLoadingView;
- (void)didPresentSkipButton;
- (void)didPresentRetryButton;
- (void)didPresentErrorDialog;
- (void)didPresentNextButton;
- (void)didPressSkipButton;
- (void)didPressRetryButton;
- (void)didPressNextButton;
- (void)didScrollWithVerticalOffset:(double)arg1 rowHeight:(double)arg2;
- (void)willDisplayCellForItemAtIndex:(unsigned long long)arg1;
- (_Bool)isAvailableLanguagesIndexOutOfBounds:(unsigned long long)arg1;
- (void)toggleLanguageSelectionAtIndex:(unsigned long long)arg1;
- (_Bool)hasRequiredNumberOfSelectedLanguages;
- (_Bool)isLanguageSelectedAtIndex:(unsigned long long)arg1;
- (id)imageURLForIndex:(unsigned long long)arg1;
- (id)languageNameForIndex:(unsigned long long)arg1;
- (long long)numberOfAvailableLanguages;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)updateSelectedLanguages;
- (void)fetchLanguages;
@property(readonly, nonatomic) NSString *settingsSectionHeaderTitle;
@property(readonly, nonatomic) NSString *settingsNavBarTitle;
@property(readonly, nonatomic) NSString *nextButtonTitle;
@property(readonly, nonatomic) NSString *headerTitle;
@property(readonly, nonatomic, getter=hasFetchedLanguages) _Bool fetchedLanguages;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (void)dealloc;
- (id)initWithPageURI:(id)arg1 dataLoader:(id)arg2 connectivityController:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

