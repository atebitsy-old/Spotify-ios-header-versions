//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIButton, UIViewController;

@protocol SPTNowPlayingLegacyFeedbackHandler <NSObject>
@property(nonatomic) __weak UIViewController *containingViewController;
- (_Bool)currentTrackHasPositiveFeedback;
- (_Bool)currentTrackHasNegativeFeedback;
- (void)handleNegativeFeedbackActionForTrackWithConfirmation:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)handleNegativeFeedbackActionForArtist:(NSString *)arg1 trackName:(NSString *)arg2 albumImageURL:(NSURL *)arg3 actionControl:(UIButton *)arg4 withConfirmation:(_Bool)arg5 completion:(void (^)(void))arg6;
- (void)handlePositiveFeedbackAction:(UIButton *)arg1 withConfirmation:(_Bool)arg2;
@end

