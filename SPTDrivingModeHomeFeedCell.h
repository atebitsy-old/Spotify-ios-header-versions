//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GLUEImageView, NSLayoutConstraint, UILabel;

@interface SPTDrivingModeHomeFeedCell : UICollectionViewCell
{
    double _width;
    GLUEImageView *_coverArtImageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_widthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)loadImageForShelfItem:(id)arg1 imageSize:(struct CGSize)arg2 withImageLoader:(id)arg3;
- (void)configureForShelfItem:(id)arg1 withImageLoader:(id)arg2;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

