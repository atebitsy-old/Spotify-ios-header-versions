//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTAuthAppleSignInCredential : NSObject
{
    struct optional<spotify::connectivity::auth::credentials::AppleSignInCredential> _credentials;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct AppleSignInCredential *)cpp;
- (id)initWithAuthCode:(id)arg1 bundleID:(id)arg2;
- (id)initWithAuthCode:(id)arg1 redirectURI:(id)arg2 bundleID:(id)arg3;

@end

