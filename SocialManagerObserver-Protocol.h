//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SocialManagerObserver <NSObject>
- (void)socialManagerObserver:(struct SocialManagerObserver *)arg1 socialUserDataDidChange:(const struct shared_ptr<spotify::social::SocialUserData> *)arg2;
- (void)socialManagerObserver:(struct SocialManagerObserver *)arg1 didReceiveError:(int)arg2 description:(NSString *)arg3;
- (void)socialManagerObserver:(struct SocialManagerObserver *)arg1 didReceiveSocialEvent:(int)arg2;
@end

