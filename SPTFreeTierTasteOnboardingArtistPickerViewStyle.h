//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUECollectionViewStyle, GLUEGradientStyle, GLUELabelStyle, NSString, SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayoutStyle, SPTFreeTierTasteOnboardingArtistPickerHeaderViewStyle, UIColor;
@protocol GLUEStyle;

@interface SPTFreeTierTasteOnboardingArtistPickerViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_navigationItemTitleLabelStyle;
    UIColor *_backgroundOverlayColor;
    GLUECollectionViewStyle *_collectionViewStyle;
    SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayoutStyle<GLUEStyle> *_collectionViewLayoutStyle;
    GLUEGradientStyle *_overlayGradientStyle;
    GLUEButtonStyle *_actionButtonStyle;
    GLUEButtonStyle *_addToPlaylistButtonStyle;
    GLUELabelStyle *_includeSimilarArtistsLabelStyle;
    double _searchBarToCollectionViewMargin;
    double _actionButtonEdgeMargin;
    double _actionButtonAppearanceAnimationDuration;
    double _actionButtonAppearanceAnimationSpringDamping;
    double _actionButtonAppearanceAnimationSpringVelocity;
    SPTFreeTierTasteOnboardingArtistPickerHeaderViewStyle<GLUEStyle> *_headerViewStyle;
    UIColor *_navigationBarBackgroundViewColor;
}

@property(copy, nonatomic) UIColor *navigationBarBackgroundViewColor; // @synthesize navigationBarBackgroundViewColor=_navigationBarBackgroundViewColor;
@property(copy, nonatomic) SPTFreeTierTasteOnboardingArtistPickerHeaderViewStyle<GLUEStyle> *headerViewStyle; // @synthesize headerViewStyle=_headerViewStyle;
@property(nonatomic) double actionButtonAppearanceAnimationSpringVelocity; // @synthesize actionButtonAppearanceAnimationSpringVelocity=_actionButtonAppearanceAnimationSpringVelocity;
@property(nonatomic) double actionButtonAppearanceAnimationSpringDamping; // @synthesize actionButtonAppearanceAnimationSpringDamping=_actionButtonAppearanceAnimationSpringDamping;
@property(nonatomic) double actionButtonAppearanceAnimationDuration; // @synthesize actionButtonAppearanceAnimationDuration=_actionButtonAppearanceAnimationDuration;
@property(nonatomic) double actionButtonEdgeMargin; // @synthesize actionButtonEdgeMargin=_actionButtonEdgeMargin;
@property(nonatomic) double searchBarToCollectionViewMargin; // @synthesize searchBarToCollectionViewMargin=_searchBarToCollectionViewMargin;
@property(copy, nonatomic) GLUELabelStyle *includeSimilarArtistsLabelStyle; // @synthesize includeSimilarArtistsLabelStyle=_includeSimilarArtistsLabelStyle;
@property(copy, nonatomic) GLUEButtonStyle *addToPlaylistButtonStyle; // @synthesize addToPlaylistButtonStyle=_addToPlaylistButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUEGradientStyle *overlayGradientStyle; // @synthesize overlayGradientStyle=_overlayGradientStyle;
@property(copy, nonatomic) SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayoutStyle<GLUEStyle> *collectionViewLayoutStyle; // @synthesize collectionViewLayoutStyle=_collectionViewLayoutStyle;
@property(copy, nonatomic) GLUECollectionViewStyle *collectionViewStyle; // @synthesize collectionViewStyle=_collectionViewStyle;
@property(copy, nonatomic) UIColor *backgroundOverlayColor; // @synthesize backgroundOverlayColor=_backgroundOverlayColor;
@property(copy, nonatomic) GLUELabelStyle *navigationItemTitleLabelStyle; // @synthesize navigationItemTitleLabelStyle=_navigationItemTitleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

