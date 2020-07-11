//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierEntityFeedbackButtonViewModelBase.h"

#import "FollowModelObserver-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class FollowModel, NSString, SPTNetworkConnectivityController;
@protocol SPTFollowModelFactory;

@interface SPTFreeTierArtistFeedbackButtonViewModel : SPTFreeTierEntityFeedbackButtonViewModelBase <FollowModelObserver, SPTNetworkConnectivityControllerObserver>
{
    id <SPTFollowModelFactory> _followModelFactory;
    FollowModel *_followModel;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)followModel:(id)arg1 remoteFollowDataDidChange:(id)arg2;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)updateFollowModel;
- (void)evaluateState;
- (void)unban;
- (void)unlike;
- (void)like;
- (id)initWithArtistURI:(id)arg1 configuration:(id)arg2 followModelFactory:(id)arg3 logger:(id)arg4 networkConnectivityController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

