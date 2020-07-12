//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupTermsAndPolicyViewModelDelegate-Protocol.h"

@class NSString, SPTLoginTheme, SPTSignupTermsAndPolicyViewModel, UIViewController;
@protocol SPTLoginDelayedSignupDialogFactoryDelegate;

@interface SPTLoginDelayedSignupDialogFactory : NSObject <SPTSignupTermsAndPolicyViewModelDelegate>
{
    id <SPTLoginDelayedSignupDialogFactoryDelegate> _delegate;
    SPTLoginTheme *_theme;
    SPTSignupTermsAndPolicyViewModel *_termsViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTSignupTermsAndPolicyViewModel *termsViewModel; // @synthesize termsViewModel=_termsViewModel;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTLoginDelayedSignupDialogFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *presentingControllerAdjustIdentifier;
@property(readonly, nonatomic) UIViewController *presentingController;
- (void)userDidAcceptAllLicences:(id)arg1;
- (id)yourLibraryDialog;
- (id)shutDownDialog;
- (id)welcomeDialogView;
- (id)welcomeDialogSecondCell;
- (id)welcomeDialogFirstCell;
- (id)dialogWithType:(unsigned long long)arg1;
- (id)initWithTheme:(id)arg1 termsViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

