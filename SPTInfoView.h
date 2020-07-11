//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, UIImage, UIImageView, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTInfoView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIView *_accessoryView;
    UIView *_secondaryAccessoryView;
    double _imageBottomMargin;
    double _titleBottomMargin;
    double _textBottomMargin;
    double _maximumSubviewWidth;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    double _subviewTotalHeight;
}

+ (id)infoViewWithSize:(struct CGSize)arg1;
+ (id)infoViewWithDefaultType:(long long)arg1 size:(struct CGSize)arg2 localizedFeatureName:(id)arg3;
@property(nonatomic) double subviewTotalHeight; // @synthesize subviewTotalHeight=_subviewTotalHeight;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double maximumSubviewWidth; // @synthesize maximumSubviewWidth=_maximumSubviewWidth;
@property(nonatomic) double textBottomMargin; // @synthesize textBottomMargin=_textBottomMargin;
@property(nonatomic) double titleBottomMargin; // @synthesize titleBottomMargin=_titleBottomMargin;
@property(nonatomic) double imageBottomMargin; // @synthesize imageBottomMargin=_imageBottomMargin;
@property(retain, nonatomic) UIView *secondaryAccessoryView; // @synthesize secondaryAccessoryView=_secondaryAccessoryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (double)minimumRequiredHeight;
- (double)setOriginForSubview:(id)arg1 forOriginY:(double)arg2 interSubviewVerticalMargin:(double)arg3;
- (void)resetWidthForLabel:(id)arg1;
- (void)layoutSubviews;
- (double)totalHeightForSubviewsWithInterSubviewVerticalMargin:(double)arg1;
- (unsigned long long)numberOfSubviewsWithHeight;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic) long long imageContentMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)localizedTextForDefaultType:(long long)arg1 localizedFeatureName:(id)arg2;
- (id)localizedTitleForDefaultType:(long long)arg1;
- (id)imageViewAccessibilityIdentifier:(long long)arg1;
- (id)imageForDefaultType:(long long)arg1;
- (void)glue_updateImageWithSPTIcon:(long long)arg1;
- (void)configureWithDefaultType:(long long)arg1 localizedFeatureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

