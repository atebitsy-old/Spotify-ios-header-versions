//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSLayoutConstraint, NSString, SPTYourLibraryMusicSongsEntitySectionHeaderViewStyle, UIStackView;

@interface SPTYourLibraryMusicSongsEntitySectionHeaderView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUEImageView *_imageView;
    CDUnknownBlockType _onTapBlock;
    SPTYourLibraryMusicSongsEntitySectionHeaderViewStyle *_style;
    UIStackView *_stackView;
    NSLayoutConstraint *_topEdgeConstraint;
    NSLayoutConstraint *_leadingEdgeConstraint;
    NSLayoutConstraint *_trailingEdgeConstraint;
    NSLayoutConstraint *_bottomEdgeConstraint;
    NSLayoutConstraint *_stackLeadingEdgeConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *stackLeadingEdgeConstraint; // @synthesize stackLeadingEdgeConstraint=_stackLeadingEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomEdgeConstraint; // @synthesize bottomEdgeConstraint=_bottomEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingEdgeConstraint; // @synthesize trailingEdgeConstraint=_trailingEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingEdgeConstraint; // @synthesize leadingEdgeConstraint=_leadingEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topEdgeConstraint; // @synthesize topEdgeConstraint=_topEdgeConstraint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) SPTYourLibraryMusicSongsEntitySectionHeaderViewStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType onTapBlock; // @synthesize onTapBlock=_onTapBlock;
@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tapGesture:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

