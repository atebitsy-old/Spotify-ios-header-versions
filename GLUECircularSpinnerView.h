//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class CAShapeLayer, GLUECircularSpinnerViewStyle, NSLayoutConstraint, NSString;

@interface GLUECircularSpinnerView : UIView <GLUEStyleable>
{
    double _progress;
    GLUECircularSpinnerViewStyle *_style;
    CAShapeLayer *_circleLayer;
    NSLayoutConstraint *_contentViewWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(copy, nonatomic) GLUECircularSpinnerViewStyle *style; // @synthesize style=_style;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateSpinner;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

