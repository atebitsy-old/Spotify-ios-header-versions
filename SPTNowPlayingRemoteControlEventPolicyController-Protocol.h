//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNowPlayingRemoteControlEventPolicyControllerDelegate, SPTNowPlayingRemoteControlPolicy;

@protocol SPTNowPlayingRemoteControlEventPolicyController <NSObject>
@property(nonatomic, getter=isActiveForRemoteControlPolicyUpdates) _Bool activeForRemoteControlPolicyUpdates;
@property(nonatomic) __weak id <SPTNowPlayingRemoteControlEventPolicyControllerDelegate> delegate;
- (void)updateRemoteControlCenterWithPolicy:(id <SPTNowPlayingRemoteControlPolicy>)arg1;
- (long long)priorityForUpdatingRemoteControlPolicy;
@end

