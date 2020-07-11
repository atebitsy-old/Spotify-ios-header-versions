//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFNavigationBarForegroundView.h"

@class NSLayoutConstraint, NSMutableDictionary, UIButton, UIColor, UIImageView, UILabel, UILayoutGuide, UIView;

@interface VISREFPlayButtonForegroundView : VISREFNavigationBarForegroundView
{
    _Bool _shouldShowShuffleBadge;
    CDUnknownBlockType _didTapPlayButton;
    UILayoutGuide *_playButtonLayoutGuide;
    UIButton *_playButtonArea;
    UIView *_playButton;
    UILabel *_playButtonGlyph;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_playButtonLayoutGuideConstraint;
    UIColor *_glyphColor;
    NSMutableDictionary *_playButtonGlyphs;
    unsigned long long _currentPlayButtonState;
    UIView *_playButtonHighlightedOverlay;
    double _shuffleBadgeDiameter;
    double _shuffleBadgeTranslation;
    UIView *_shuffleBadge;
    UIImageView *_shuffleBadgeLabel;
    UIView *_shuffleBadgeHighlightedOverlay;
}

@property(retain, nonatomic) UIView *shuffleBadgeHighlightedOverlay; // @synthesize shuffleBadgeHighlightedOverlay=_shuffleBadgeHighlightedOverlay;
@property(retain, nonatomic) UIImageView *shuffleBadgeLabel; // @synthesize shuffleBadgeLabel=_shuffleBadgeLabel;
@property(retain, nonatomic) UIView *shuffleBadge; // @synthesize shuffleBadge=_shuffleBadge;
@property(readonly, nonatomic) double shuffleBadgeTranslation; // @synthesize shuffleBadgeTranslation=_shuffleBadgeTranslation;
@property(readonly, nonatomic) double shuffleBadgeDiameter; // @synthesize shuffleBadgeDiameter=_shuffleBadgeDiameter;
@property(retain, nonatomic) UIView *playButtonHighlightedOverlay; // @synthesize playButtonHighlightedOverlay=_playButtonHighlightedOverlay;
@property(nonatomic) unsigned long long currentPlayButtonState; // @synthesize currentPlayButtonState=_currentPlayButtonState;
@property(retain, nonatomic) NSMutableDictionary *playButtonGlyphs; // @synthesize playButtonGlyphs=_playButtonGlyphs;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(retain, nonatomic) NSLayoutConstraint *playButtonLayoutGuideConstraint; // @synthesize playButtonLayoutGuideConstraint=_playButtonLayoutGuideConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) UILabel *playButtonGlyph; // @synthesize playButtonGlyph=_playButtonGlyph;
@property(retain, nonatomic) UIView *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *playButtonArea; // @synthesize playButtonArea=_playButtonArea;
@property(retain, nonatomic) UILayoutGuide *playButtonLayoutGuide; // @synthesize playButtonLayoutGuide=_playButtonLayoutGuide;
@property(nonatomic, getter=isShuffleBadgeShown) _Bool shouldShowShuffleBadge; // @synthesize shouldShowShuffleBadge=_shouldShowShuffleBadge;
@property(copy, nonatomic) CDUnknownBlockType didTapPlayButton; // @synthesize didTapPlayButton=_didTapPlayButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize playButtonSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didUnHighlightButton;
- (void)didHighlightButton;
- (void)playButtonTapped;
@property(nonatomic) double buttonTrailingMargin;
@property(nonatomic) double buttonScrolledTopOffset;
@property(nonatomic) double buttonRestingBottomOffset;
@property(nonatomic, getter=isPlayButtonShown) _Bool shouldShowPlayButton;
- (void)setShuffleBadgeGlyph:(id)arg1;
- (void)updatePlayButtonGlyphColor;
- (void)setPlayButtonAccessibilityLabel:(id)arg1;
- (void)setPlayButtonState:(unsigned long long)arg1;
- (unsigned long long)controlStateFromPlayButtonState:(unsigned long long)arg1;
- (void)setGlyph:(id)arg1 forPlayButtonState:(unsigned long long)arg2;
- (void)updateShuffleBadgeVisibilityForState:(unsigned long long)arg1;
- (id)glyphForButtonState:(unsigned long long)arg1;
- (void)layoutShuffleBadge;
- (void)layoutButton;
- (void)setupShuffleBadge;
- (void)setupButton;
- (void)headerViewDidRemountHeaderComponents:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

