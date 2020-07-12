//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWebViewFactory-Protocol.h"

@class NSString, SPSession;
@protocol SPTLinkDispatcher, SPTModalPresentationController;

@interface SPTWebViewFactoryImplementation : NSObject <SPTWebViewFactory>
{
    SPSession *_session;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTModalPresentationController> _modalPresentationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (id)createWebViewControllerWithURL:(id)arg1 authenticate:(_Bool)arg2 pageURI:(id)arg3 pageIdentifier:(id)arg4 hideNavigationContentAndControls:(_Bool)arg5;
- (id)createWebViewControllerWithURL:(id)arg1 authenticate:(_Bool)arg2 pageURI:(id)arg3 pageIdentifier:(id)arg4 navigationItemsType:(long long)arg5;
- (id)createWebViewControllerWithURL:(id)arg1 authenticate:(_Bool)arg2;
- (id)createWebViewControllerWithURL:(id)arg1;
- (id)initWithSession:(id)arg1 linkDispatcher:(id)arg2 modalPresentationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

