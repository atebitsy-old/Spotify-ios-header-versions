//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTGaiaContextMenuViewControllerDelegate-Protocol.h"
#import "SPTGaiaDevicePicker-Protocol.h"
#import "SPTGaiaDevicePickerViewModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSNotificationCenter, NSString, NSURL, SPTGaiaDevicePickerBackgroundView, SPTGaiaDevicePickerView, SPTGaiaDevicePickerViewModel, SPTGaiaLogger, SPTGaiaSocialListeningIntegrationManager, SPTObserverManager, SPTStatusBarManager, SPTStatusBarToken, UIView;
@protocol SPTGaiaDevicePickerDeviceSpecificConfigurationProvider, SPTGaiaDevicePickerHeader, SPTGaiaDevicePickerViewInjector, SPTModalPresentationController, SPTPageContainer;

@interface SPTGaiaDevicePickerViewController : UIViewController <SPTGaiaDevicePickerViewModelDelegate, UITableViewDelegate, UITableViewDataSource, SPTGaiaContextMenuViewControllerDelegate, SPTGaiaDevicePicker, SPTPageController>
{
    _Bool _pickerVisible;
    SPTGaiaDevicePickerViewModel *_viewModel;
    SPTObserverManager *_contentOffsetObserverManager;
    NSNotificationCenter *_notificationCenter;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTGaiaLogger *_logger;
    id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> _deviceConfiguration;
    SPTStatusBarManager *_statusBarManager;
    SPTGaiaSocialListeningIntegrationManager *_socialListeningManager;
    id <SPTGaiaDevicePickerViewInjector> _viewInjector;
    SPTGaiaDevicePickerView *_devicePickerView;
    SPTGaiaDevicePickerBackgroundView *_devicePickerBackgroundView;
    UIView<SPTGaiaDevicePickerHeader> *_headerView;
    UIView *_volumeSliderView;
    long long _pickerContext;
    SPTStatusBarToken *_statusBarToken;
}

@property(retain, nonatomic) SPTStatusBarToken *statusBarToken; // @synthesize statusBarToken=_statusBarToken;
@property(nonatomic, getter=isPickerVisible) _Bool pickerVisible; // @synthesize pickerVisible=_pickerVisible;
@property(nonatomic) long long pickerContext; // @synthesize pickerContext=_pickerContext;
@property(retain, nonatomic) UIView *volumeSliderView; // @synthesize volumeSliderView=_volumeSliderView;
@property(retain, nonatomic) UIView<SPTGaiaDevicePickerHeader> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTGaiaDevicePickerBackgroundView *devicePickerBackgroundView; // @synthesize devicePickerBackgroundView=_devicePickerBackgroundView;
@property(retain, nonatomic) SPTGaiaDevicePickerView *devicePickerView; // @synthesize devicePickerView=_devicePickerView;
@property(readonly, nonatomic) id <SPTGaiaDevicePickerViewInjector> viewInjector; // @synthesize viewInjector=_viewInjector;
@property(readonly, nonatomic) SPTGaiaSocialListeningIntegrationManager *socialListeningManager; // @synthesize socialListeningManager=_socialListeningManager;
@property(readonly, nonatomic) SPTStatusBarManager *statusBarManager; // @synthesize statusBarManager=_statusBarManager;
@property(readonly, nonatomic) id <SPTGaiaDevicePickerDeviceSpecificConfigurationProvider> deviceConfiguration; // @synthesize deviceConfiguration=_deviceConfiguration;
@property(readonly, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTObserverManager *contentOffsetObserverManager; // @synthesize contentOffsetObserverManager=_contentOffsetObserverManager;
@property(readonly, nonatomic) SPTGaiaDevicePickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)removeContentOffsetObserver:(id)arg1;
- (void)addContentOffsetObserver:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)contextMenuViewControllerWillDismiss:(id)arg1;
- (void)dismissDevicePicker;
- (void)closeButtonAction:(id)arg1;
- (void)gaiaDevicePickerViewModelRequiresDismissalOfView:(id)arg1;
- (void)gaiaDevicePickerViewModelActiveDeviceDidUpdate:(id)arg1;
- (void)gaiaDevicePickerViewModelDidUpdateData:(id)arg1;
- (void)gaiaDevicePickerViewModelView:(id)arg1 shouldPresentContextMenuModel:(id)arg2;
- (void)gaiaDevicePickerViewModelView:(id)arg1 shouldPresentEducationModel:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateHeaderViewState;
- (void)reloadData;
- (void)hideStatusBarIfNeededWithViewDismissed:(_Bool)arg1;
- (void)showStatusBarIfNeeded;
- (_Bool)isPresentedInAPopover;
- (void)updateVolumeViewVisibilityForDevice:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLoad;
- (void)addTableViewHeader:(id)arg1;
- (void)addContentView:(id)arg1;
- (void)createBackgroundView;
- (void)createDevicePickerView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 devicePickerContext:(long long)arg2 notificationCenter:(id)arg3 modalPresentationController:(id)arg4 logger:(id)arg5 deviceConfiguration:(id)arg6 statusBarManager:(id)arg7 socialListeningManager:(id)arg8 viewInjector:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

