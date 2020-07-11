//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareViewControllerDelegate-Protocol.h"

@class NSString, SPTProgressView, SPTShareHandlerFactory, SPTShareViewController, UIViewController;
@protocol SPTAlertController, SPTShareDeeplinkHandler, SPTShareHandler;

@interface SPTSharePresenter : NSObject <SPTShareViewControllerDelegate>
{
    UIViewController *_contextViewController;
    SPTShareViewController *_shareViewController;
    SPTShareHandlerFactory *_shareHandlerFactory;
    id <SPTAlertController> _alertController;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    id <SPTShareHandler> _shareHandler;
    SPTProgressView *_progressView;
    struct CGRect _selectionFrame;
}

@property(nonatomic) struct CGRect selectionFrame; // @synthesize selectionFrame=_selectionFrame;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTShareHandler> shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(readonly, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) SPTShareHandlerFactory *shareHandlerFactory; // @synthesize shareHandlerFactory=_shareHandlerFactory;
@property(readonly, nonatomic) SPTShareViewController *shareViewController; // @synthesize shareViewController=_shareViewController;
@property(readonly, nonatomic) __weak UIViewController *contextViewController; // @synthesize contextViewController=_contextViewController;
- (void).cxx_destruct;
- (_Bool)shouldShowProgressViewForShareDestination:(id)arg1;
- (void)shareViewController:(id)arg1 shareData:(id)arg2 didSelectShareDestination:(id)arg3;
- (void)performShareDestination:(id)arg1 shareData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1;
- (void)discardChildViewControllerIfNecessary;
- (void)dismissShareViewController:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentProgressView;
- (void)presentAlertControllerWithModel:(id)arg1;
- (id)initWithContextViewController:(id)arg1 shareViewController:(id)arg2 shareHandlerFactory:(id)arg3 alertController:(id)arg4 deeplinkHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

