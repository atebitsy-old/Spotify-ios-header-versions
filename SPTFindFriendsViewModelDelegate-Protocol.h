//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTFindFriendsViewModel;

@protocol SPTFindFriendsViewModelDelegate <NSObject>
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 hasDisconnectedFromNetworkType:(long long)arg2;
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 hasConnectedToNetworkType:(long long)arg2;
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 didFindMatches:(_Bool)arg2;
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 hasLoadedFriendsWithSuccess:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 didFailToUpdateFollowStateWithError:(NSError *)arg2;
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 didUpdateFollowStateForUserAtIndex:(unsigned long long)arg2;
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 isOffline:(_Bool)arg2;
- (void)findFriendsViewModel:(SPTFindFriendsViewModel *)arg1 isLoading:(_Bool)arg2;
@end

