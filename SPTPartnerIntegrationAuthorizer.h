//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAuthController;

@interface SPTPartnerIntegrationAuthorizer : NSObject
{
    id <SPTAuthController> _authController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
- (id)authenticationURLForIntegration:(id)arg1;
- (void)authorizeIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAuthController:(id)arg1;

@end

