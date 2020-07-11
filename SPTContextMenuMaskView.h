//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer;

@interface SPTContextMenuMaskView : UIView
{
    double _topMaskHeight;
    double _bottomMaskHeight;
    CAGradientLayer *_topMaskLayer;
    CALayer *_middleMaskLayer;
    CAGradientLayer *_bottomMaskLayer;
}

@property(retain, nonatomic) CAGradientLayer *bottomMaskLayer; // @synthesize bottomMaskLayer=_bottomMaskLayer;
@property(retain, nonatomic) CALayer *middleMaskLayer; // @synthesize middleMaskLayer=_middleMaskLayer;
@property(retain, nonatomic) CAGradientLayer *topMaskLayer; // @synthesize topMaskLayer=_topMaskLayer;
@property(nonatomic) double bottomMaskHeight; // @synthesize bottomMaskHeight=_bottomMaskHeight;
@property(nonatomic) double topMaskHeight; // @synthesize topMaskHeight=_topMaskHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

