//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTVoiceNowPlayingTrackInfoViewModelDelegate-Protocol.h"

@class NSString, SPTVoiceNowPlayingTrackInfoViewModel, UILabel;

@interface SPTVoiceNowPlayingTrackInfoView : UIView <SPTVoiceNowPlayingTrackInfoViewModelDelegate>
{
    SPTVoiceNowPlayingTrackInfoViewModel *_viewModel;
    UILabel *_trackTitleLabel;
    UILabel *_artistNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(retain, nonatomic) UILabel *trackTitleLabel; // @synthesize trackTitleLabel=_trackTitleLabel;
@property(readonly, nonatomic) SPTVoiceNowPlayingTrackInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)voiceNowPlayingTrackInfoViewModelDidUpdate:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)setupLayout;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

