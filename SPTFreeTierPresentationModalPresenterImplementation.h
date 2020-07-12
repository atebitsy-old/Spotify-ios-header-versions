//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPresentationModalPresenter-Protocol.h"

@class MessageBarController, NSString, SPTNavigationManager;

@interface SPTFreeTierPresentationModalPresenterImplementation : NSObject <SPTFreeTierPresentationModalPresenter>
{
    SPTNavigationManager *_navigationManager;
    MessageBarController *_messageBarController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
@property(retain, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
- (void)dismissViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)topPresenterViewController;
- (id)initWithNavigationManager:(id)arg1 messageBarController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

