//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareViewControllerDelegate-Protocol.h"

@class NSString, SPTProgressView, SPTShareFeatureProperties, SPTShareHandlerFactory, SPTShareViewController, SPTSharingSDK, UIViewController;
@protocol SPTAlertController, SPTPageController, SPTShareDeeplinkHandler, SPTShareEventSenderLogger, SPTShareHandler, _TtP21SocialOnDemandFeature29SPTSocialOnDemandTrackService_;

@interface SPTSharePresenter : NSObject <SPTShareViewControllerDelegate>
{
    UIViewController *_contextViewController;
    SPTShareViewController *_shareViewController;
    SPTShareHandlerFactory *_shareHandlerFactory;
    id <SPTAlertController> _alertController;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    id <SPTShareHandler> _shareHandler;
    SPTSharingSDK *_sharingSDK;
    id <SPTShareEventSenderLogger> _shareEventSenderLogger;
    id <SPTPageController> _pageController;
    id <_TtP21SocialOnDemandFeature29SPTSocialOnDemandTrackService_> _trackService;
    SPTProgressView *_progressView;
    SPTShareFeatureProperties *_featureProperties;
    struct CGRect _selectionFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect selectionFrame; // @synthesize selectionFrame=_selectionFrame;
@property(retain, nonatomic) SPTShareFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <_TtP21SocialOnDemandFeature29SPTSocialOnDemandTrackService_> trackService; // @synthesize trackService=_trackService;
@property(readonly, nonatomic) __weak id <SPTPageController> pageController; // @synthesize pageController=_pageController;
@property(readonly, nonatomic) __weak id <SPTShareEventSenderLogger> shareEventSenderLogger; // @synthesize shareEventSenderLogger=_shareEventSenderLogger;
@property(readonly, nonatomic) __weak SPTSharingSDK *sharingSDK; // @synthesize sharingSDK=_sharingSDK;
@property(retain, nonatomic) id <SPTShareHandler> shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(readonly, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) SPTShareHandlerFactory *shareHandlerFactory; // @synthesize shareHandlerFactory=_shareHandlerFactory;
@property(readonly, nonatomic) SPTShareViewController *shareViewController; // @synthesize shareViewController=_shareViewController;
@property(readonly, nonatomic) __weak UIViewController *contextViewController; // @synthesize contextViewController=_contextViewController;
- (_Bool)shouldShowProgressViewForShareDestination:(id)arg1;
- (void)logShareEventWithShareData:(id)arg1 shareDestination:(id)arg2 shareCompletionData:(id)arg3 error:(id)arg4;
- (void)shareViewController:(id)arg1 shareData:(id)arg2 didSelectShareDestination:(id)arg3;
- (id)appendUTMTagsForURL:(id)arg1 destination:(id)arg2;
- (void)registerLinkWithData:(id)arg1 destination:(id)arg2;
- (void)shareWithData:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWithBackendGeneratedURLWithShareData:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWithLocalGeneratedURLWithShareData:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performShareDestination:(id)arg1 shareData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1;
- (void)discardChildViewControllerIfNecessary;
- (void)dismissShareViewController:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentProgressView;
- (void)presentAlertControllerWithModel:(id)arg1;
- (id)initWithContextViewController:(id)arg1 shareViewController:(id)arg2 shareHandlerFactory:(id)arg3 alertController:(id)arg4 deeplinkHandler:(id)arg5 featureProperties:(id)arg6 trackService:(id)arg7 sharingSDK:(id)arg8 eventSenderLogger:(id)arg9 topLevelPageController:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

