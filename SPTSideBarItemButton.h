//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class GLUELabel, UIImage, UIImageView, UIView;

@interface SPTSideBarItemButton : UIButton
{
    UIView *_containerView;
    UIImageView *_iconImageView;
    GLUELabel *_itemTitleLabel;
    UIView *_selectedIndicator;
    long long _icon;
    UIImage *_iconImageNormal;
    UIImage *_iconImageSelected;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconImageSelected; // @synthesize iconImageSelected=_iconImageSelected;
@property(retain, nonatomic) UIImage *iconImageNormal; // @synthesize iconImageNormal=_iconImageNormal;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) UIView *selectedIndicator; // @synthesize selectedIndicator=_selectedIndicator;
@property(readonly, nonatomic) GLUELabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)setupConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)updateAccessibilityTraits;
- (void)updateIconImageViewImage;
- (void)updateTitleStyle;
- (void)updateIconImages;
@property(readonly, nonatomic) UIView *titleView;
@property(readonly, nonatomic) UIView *iconView;
- (void)setSelected:(_Bool)arg1;
- (id)initWithIcon:(long long)arg1 title:(id)arg2;

@end

