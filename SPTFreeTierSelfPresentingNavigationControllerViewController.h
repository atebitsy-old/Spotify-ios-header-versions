//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPNavigationController.h"

#import "SPTSelfPresentingViewController-Protocol.h"

@class NSString;
@protocol SPTFreeTierPresentationModalPresenter;

@interface SPTFreeTierSelfPresentingNavigationControllerViewController : SPNavigationController <SPTSelfPresentingViewController>
{
    id <SPTFreeTierPresentationModalPresenter> _presenter;
}

@property(retain, nonatomic) id <SPTFreeTierPresentationModalPresenter> presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRootViewController:(id)arg1 presenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

