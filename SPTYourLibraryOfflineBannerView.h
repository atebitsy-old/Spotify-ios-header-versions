//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSString, SPTYourLibraryOfflineBannerStyle, UIProgressView;

@interface SPTYourLibraryOfflineBannerView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_detailLabel;
    UIProgressView *_progressView;
    SPTYourLibraryOfflineBannerStyle *_glueStyle;
    UIView *_backgroundView;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SPTYourLibraryOfflineBannerStyle *glueStyle; // @synthesize glueStyle=_glueStyle;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) GLUELabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyStyle;
- (void)setupConstraints;
- (void)animateFinishedWithCompletedTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didMoveToWindow;
- (void)glue_applyStyle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

