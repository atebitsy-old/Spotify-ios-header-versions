//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTSignupTermsAndPolicyViewModel, UIViewController;

@protocol SPTDynamicSignupFlowControllerDelegate <NSObject>
@property(readonly, nonatomic) NSString *presentingControllerAdjustIdentifier;
@property(readonly, nonatomic) UIViewController *presentingFlowController;
- (void)userDidAcceptAllLicences:(SPTSignupTermsAndPolicyViewModel *)arg1;
- (void)createUserRequestDidFinishWithError:(NSError *)arg1;
- (void)createUserRequestDidStart;
@end

