//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryPageProvider-Protocol.h"

@class NSString, NSURL, SPTYourLibraryMusicGLUETheme, SPTYourLibraryMusicLogger;
@protocol SPTGLUEImageLoaderFactory, SPTPerformanceMetricsViewLoggerFactory, SPTQuickScrollFactory, SPTShareDragDelegateFactory, SPTSnackbarConditionalPresenter, SPTSortingFilteringUIFactory, SPTYourLibraryMusicEntityViewModelConfiguration, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicEntityPagePageProvider : NSObject <SPTYourLibraryPageProvider>
{
    _Bool _buttonSectionEnabled;
    unsigned long long _groupIdentifier;
    unsigned long long _providerIdentifier;
    NSString *_title;
    CDUnknownBlockType _modelProvider;
    id <SPTYourLibraryMusicEntityViewModelConfiguration> _viewModelConfiguration;
    NSString *_searchPlaceholderText;
    NSURL *_URI;
    CDUnknownBlockType _styleFactoryBlock;
    CDUnknownBlockType _emptyViewBlock;
    NSString *_logContext;
    SPTYourLibraryMusicGLUETheme *_theme;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
    SPTYourLibraryMusicLogger *_logger;
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTYourLibraryMusicTestManager> _testManager;
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    NSString *_username;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    id <SPTQuickScrollFactory> _quickScrollFactory;
}

@property(retain, nonatomic) id <SPTQuickScrollFactory> quickScrollFactory; // @synthesize quickScrollFactory=_quickScrollFactory;
@property(retain, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(readonly, nonatomic) SPTYourLibraryMusicLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTYourLibraryMusicGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) _Bool buttonSectionEnabled; // @synthesize buttonSectionEnabled=_buttonSectionEnabled;
@property(readonly, copy, nonatomic) CDUnknownBlockType emptyViewBlock; // @synthesize emptyViewBlock=_emptyViewBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType styleFactoryBlock; // @synthesize styleFactoryBlock=_styleFactoryBlock;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText;
@property(readonly, nonatomic) id <SPTYourLibraryMusicEntityViewModelConfiguration> viewModelConfiguration; // @synthesize viewModelConfiguration=_viewModelConfiguration;
@property(readonly, copy, nonatomic) CDUnknownBlockType modelProvider; // @synthesize modelProvider=_modelProvider;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) unsigned long long groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)pageViewControllerForContext:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (id)initWithModelProvider:(CDUnknownBlockType)arg1 viewModelConfiguration:(id)arg2 title:(id)arg3 searchPlaceholderText:(id)arg4 pageProviderIdentifier:(unsigned long long)arg5 URI:(id)arg6 styleFactoryBlock:(CDUnknownBlockType)arg7 emptyView:(CDUnknownBlockType)arg8 buttonSectionEnabled:(_Bool)arg9 logContext:(id)arg10 imageLoaderFactory:(id)arg11 theme:(id)arg12 sortingFilteringUIFactory:(id)arg13 logger:(id)arg14 viewLoggerFactory:(id)arg15 pageIdentifier:(id)arg16 testManager:(id)arg17 username:(id)arg18 snackbarPresenter:(id)arg19 shareDragDelegateFactory:(id)arg20 quickScrollFactory:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

