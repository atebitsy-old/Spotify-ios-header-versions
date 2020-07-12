//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@class GLUESectionHeaderView;
@protocol HUGSStyleOverrider;

@interface HUGSSectionHeaderComponentView : HUGSThemableComponentView
{
    id <HUGSStyleOverrider> _styleOverrider;
    GLUESectionHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GLUESectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) id <HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
- (void)applyThemeLayout;
- (id)subtitleFromModel:(id)arg1;
- (_Bool)containsSubtitleForModel:(id)arg1;
- (id)styleForComponentModel:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 frame:(struct CGRect)arg3;

@end

