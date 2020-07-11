//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTContextMenuHeader-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class NSString, NSURL, UIImage, UIImageView, UILabel, UIStackView, UITextView;
@protocol GLUETheme, SPTThemableViewLayoutDelegate;

@interface SPTShowsFormatVideoContextHeaderView : UIView <SPTContextMenuHeader, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    NSURL *_headerImageURL;
    NSString *_episodeTitle;
    NSString *_subtitle;
    NSString *_metadataTitle;
    NSString *_imageMetadataTitle;
    NSString *_longDescription;
    UIImageView *_showImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_metadataLabel;
    UILabel *_imageMetadataLabel;
    UITextView *_descriptionTextView;
    UIStackView *_verticalInnerStack;
    UIStackView *_horizontalTopRowStack;
    UIStackView *_verticalOuterStack;
    id <GLUETheme> _glueTheme;
}

@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) UIStackView *verticalOuterStack; // @synthesize verticalOuterStack=_verticalOuterStack;
@property(retain, nonatomic) UIStackView *horizontalTopRowStack; // @synthesize horizontalTopRowStack=_horizontalTopRowStack;
@property(retain, nonatomic) UIStackView *verticalInnerStack; // @synthesize verticalInnerStack=_verticalInnerStack;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *imageMetadataLabel; // @synthesize imageMetadataLabel=_imageMetadataLabel;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *showImageView; // @synthesize showImageView=_showImageView;
@property(readonly, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(readonly, nonatomic) NSString *imageMetadataTitle; // @synthesize imageMetadataTitle=_imageMetadataTitle;
@property(readonly, nonatomic) NSString *metadataTitle; // @synthesize metadataTitle=_metadataTitle;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *episodeTitle; // @synthesize episodeTitle=_episodeTitle;
@property(retain, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (double)preferredHeight;
- (struct UIEdgeInsets)edgeInsetsWithTop:(double)arg1 leading:(double)arg2;
- (void)applyThemeLayout;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (void)setupDescriptionTextView;
- (void)setupMetaDataLabel;
- (void)setupVerticalOuterStack;
- (void)setupImageMetadataLabel;
- (void)setupImageView;
- (void)setupHorizontalTopRowStack;
- (void)setupInnerVerticalStack;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 metadataTitle:(id)arg3 imageMetadataTitle:(id)arg4 longDescription:(id)arg5 headerImageURL:(id)arg6 glueTheme:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title;

@end

