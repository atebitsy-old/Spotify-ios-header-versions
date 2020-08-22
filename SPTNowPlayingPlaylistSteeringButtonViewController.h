//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_TtP24ResponsiveShuffleFeature36SPTResponsiveShuffleFeedbackObserver_-Protocol.h"

@class SPTNowPlayingModel, SPTNowPlayingPlaylistSteeringButton;
@protocol _TtP24ResponsiveShuffleFeature38SPTResponsiveShuffleFeedbackController_;

@interface SPTNowPlayingPlaylistSteeringButtonViewController : UIViewController <_TtP24ResponsiveShuffleFeature36SPTResponsiveShuffleFeedbackObserver_>
{
    SPTNowPlayingModel *_model;
    id <_TtP24ResponsiveShuffleFeature38SPTResponsiveShuffleFeedbackController_> _feedbackController;
    unsigned long long _steeringDirection;
    SPTNowPlayingPlaylistSteeringButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTNowPlayingPlaylistSteeringButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long steeringDirection; // @synthesize steeringDirection=_steeringDirection;
@property(nonatomic) __weak id <_TtP24ResponsiveShuffleFeature38SPTResponsiveShuffleFeedbackController_> feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void)feedbackNotificationWithTrackURI:(id)arg1 upSelected:(_Bool)arg2 downSelected:(_Bool)arg3;
- (void)handleTouchUpInside:(id)arg1;
- (void)loadView;
- (id)initSteerDownWithModel:(id)arg1 feedbackController:(id)arg2;
- (id)initSteerUpWithModel:(id)arg1 feedbackController:(id)arg2;
- (id)initWithModel:(id)arg1 feedbackController:(id)arg2 steeringDirection:(unsigned long long)arg3;

@end

