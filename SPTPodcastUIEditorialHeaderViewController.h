//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFBaseHeaderController.h"

#import "SPTPodcastUIEditorialHeaderController-Protocol.h"

@class NSString, SPTPodcastUIEditorialHeaderContentView, VISREFGradientBackgroundView, VISREFHeaderView, VISREFNavigationBarForegroundView;
@protocol GLUETheme, HUBComponentModel;

@interface SPTPodcastUIEditorialHeaderViewController : VISREFBaseHeaderController <SPTPodcastUIEditorialHeaderController>
{
    double _headerHeight;
    double _navigationBarHeight;
    double _titleNormalizedHeight;
    VISREFGradientBackgroundView *_backgroundView;
    SPTPodcastUIEditorialHeaderContentView *_contentView;
    VISREFNavigationBarForegroundView *_foregroundView;
    id <GLUETheme> _theme;
    id <HUBComponentModel> _model;
    double _navigationBarGradientEndPoint;
}

@property(nonatomic) double navigationBarGradientEndPoint; // @synthesize navigationBarGradientEndPoint=_navigationBarGradientEndPoint;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) VISREFNavigationBarForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) SPTPodcastUIEditorialHeaderContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VISREFGradientBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double titleNormalizedHeight; // @synthesize titleNormalizedHeight=_titleNormalizedHeight;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (void)navigationBarHeightDidChange:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)addActionRowView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (double)minimumContentHeight;
- (void)headerView:(id)arg1 headerViewVisibleAreaChanged:(double)arg2;
@property(readonly, nonatomic) double minimumHeight;
- (id)extractNavigationBarGradientFromBackgroundGradient;
- (void)updateProgressPositions;
- (void)updateProgressPositionsIfNeeded;
- (void)setupForegroundView;
- (void)setupContentView;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VISREFHeaderView *view;

@end

