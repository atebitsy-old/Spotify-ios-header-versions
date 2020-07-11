//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class GLUELabel, NSArray, NSString, UIStackView, UIToolbar;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTPodcastToolbarHeaderView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIView *_trailingAccessoryView;
    UIToolbar *_toolbar;
    GLUELabel *_titleLabel;
    UIStackView *_trailingStackView;
    NSArray *_managedConstraints;
}

+ (double)preferredHeight;
@property(copy, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property(retain, nonatomic) UIStackView *trailingStackView; // @synthesize trailingStackView=_trailingStackView;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)applyThemeLayout;
- (void)addViewConstraintsForStyle:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;
- (void)setupToolbarRightBarButtonItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

