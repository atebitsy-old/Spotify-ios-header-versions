//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

@class GLUELabel, SPTPremiumDestinationUIGLUETheme, SPTPremiumDestinationUIOfferTitleStyle;

@interface SPTPremiumDestinationUIOfferTitleComponentView : HUBComponentView
{
    SPTPremiumDestinationUIGLUETheme *_theme;
    SPTPremiumDestinationUIOfferTitleStyle *_style;
    GLUELabel *_label;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUELabel *label; // @synthesize label=_label;
@property(retain, nonatomic) SPTPremiumDestinationUIOfferTitleStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

