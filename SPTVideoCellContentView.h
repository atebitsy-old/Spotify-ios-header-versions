//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTVideoCellContentView : UIView <SPTThemableView>
{
    _Bool _editing;
    _Bool _reorderable;
    _Bool _disabled;
    _Bool _active;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _shouldHaveTransparentBackground;
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    UIImageView *_imageView;
    UIImageView *_placeholderImageView;
    UILabel *_titleLabel;
    UIView *_accessoryView;
    UIView *_subtitlePrefixView;
    UILabel *_subtitleLabel;
    UILabel *_metadataLabel;
    UIView *_placeholderBackgroundView;
}

@property(retain, nonatomic) UIView *placeholderBackgroundView; // @synthesize placeholderBackgroundView=_placeholderBackgroundView;
@property(nonatomic) _Bool shouldHaveTransparentBackground; // @synthesize shouldHaveTransparentBackground=_shouldHaveTransparentBackground;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIView *subtitlePrefixView; // @synthesize subtitlePrefixView=_subtitlePrefixView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isReorderable) _Bool reorderable; // @synthesize reorderable=_reorderable;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGRect)frameForAccessoryView;
- (void)layoutSubviews;
- (void)setupMetadataLabel;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupPlaceholderImageView;
- (void)setupPlaceholderBackgroundView;
- (void)setupImageView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

