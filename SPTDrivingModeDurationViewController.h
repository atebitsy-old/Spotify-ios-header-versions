//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTDrivingModeDurationViewDataSource-Protocol.h"
#import "SPTDrivingModeDurationViewDelegate-Protocol.h"
#import "SPTDrivingModeSliderViewDataSource-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingDurationUnitViewModelDelegate-Protocol.h"

@class NSString, SPTDrivingModeDurationView;
@protocol SPTNowPlayingContainingViewController, SPTNowPlayingDurationUnitViewModel;

@interface SPTDrivingModeDurationViewController : UIViewController <SPTNowPlayingDurationUnitViewModelDelegate, SPTDrivingModeDurationViewDataSource, SPTDrivingModeSliderViewDataSource, SPTDrivingModeDurationViewDelegate, SPTNowPlayingContainedViewController>
{
    _Bool _scrubbing;
    _Bool _timeLabelsHidden;
    id <SPTNowPlayingDurationUnitViewModel> _viewModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool timeLabelsHidden; // @synthesize timeLabelsHidden=_timeLabelsHidden;
@property(nonatomic) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(readonly, nonatomic) id <SPTNowPlayingDurationUnitViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (void)nowPlayingDurationViewDidTapSlider:(id)arg1;
- (void)nowPlayingDurationViewDidEndScrubbing:(id)arg1;
- (void)nowPlayingDurationViewProgressDidChange:(id)arg1;
- (void)nowPlayingDurationViewDidBeginScrubbing:(id)arg1;
- (void)showTimeLabelsTemporarily;
- (void)hideTimeLabels;
- (void)updateTimeLabelsVisibility;
- (struct CGSize)preferredContentSizeForContainerSize:(struct CGSize)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTDrivingModeDurationView *view; // @dynamic view;

@end

