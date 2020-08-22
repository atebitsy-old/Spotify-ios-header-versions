//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFBaseHeaderController.h"

#import "VISREFHeaderController-Protocol.h"

@class NSString, SPTBrowseUIEditorialHeaderContentView, VISREFGradientBackgroundView, VISREFHeaderView, VISREFNavigationBarForegroundView;
@protocol GLUETheme;

@interface SPTBrowseUIEditorialHeaderViewController : VISREFBaseHeaderController <VISREFHeaderController>
{
    double _headerHeight;
    id <GLUETheme> _theme;
    double _navigationBarHeight;
    double _titleNormalizedHeight;
    double _navigationBarGradientEndPoint;
    VISREFGradientBackgroundView *_backgroundView;
    SPTBrowseUIEditorialHeaderContentView *_contentView;
    VISREFNavigationBarForegroundView *_foregroundView;
}

+ (struct CGSize)sizeForContainerWidth:(double)arg1 desciption:(id)arg2 style:(id)arg3 withChildren:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) VISREFNavigationBarForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) SPTBrowseUIEditorialHeaderContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VISREFGradientBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double navigationBarGradientEndPoint; // @synthesize navigationBarGradientEndPoint=_navigationBarGradientEndPoint;
@property(nonatomic) double titleNormalizedHeight; // @synthesize titleNormalizedHeight=_titleNormalizedHeight;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void)navigationBarHeightDidChange:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)addActionRowView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setUpActionRowHeight;
- (void)setDescriptionText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (double)minimumContentHeight;
- (void)headerView:(id)arg1 headerViewVisibleAreaChanged:(double)arg2;
@property(readonly, nonatomic) double minimumHeight;
- (id)extractNavigationBarGradientFromBackgroundGradient;
- (void)updateProgressPositions;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VISREFHeaderView *view;

@end
