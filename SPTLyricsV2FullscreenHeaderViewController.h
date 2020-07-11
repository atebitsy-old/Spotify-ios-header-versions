//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTLyricsV2FullscreenHeaderView, SPTPlayerTrack;
@protocol GLUEImageLoader;

@interface SPTLyricsV2FullscreenHeaderViewController : UIViewController
{
    SPTPlayerTrack *_track;
    id <GLUEImageLoader> _imageLoader;
}

@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)updateWithStyle:(id)arg1;
- (void)updateLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithTrack:(id)arg1 imageLoader:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SPTLyricsV2FullscreenHeaderView *view; // @dynamic view;

@end

