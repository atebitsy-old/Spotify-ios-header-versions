//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILayoutGuide;

@interface SPTBrowseUIBaseHeaderContentView : UIView
{
    double _navigationBarHeight;
    double _naturalHeight;
    UILayoutGuide *_topAreaLayoutGuide;
    UILayoutGuide *_bodyAreaLayoutGuide;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UILayoutGuide *bodyAreaLayoutGuide; // @synthesize bodyAreaLayoutGuide=_bodyAreaLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *topAreaLayoutGuide; // @synthesize topAreaLayoutGuide=_topAreaLayoutGuide;
@property(nonatomic) double naturalHeight; // @synthesize naturalHeight=_naturalHeight;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(readonly, nonatomic) double topAreaNormalizedHeight;
@property(readonly, nonatomic) double navigationBarNormalizedHeight;
@property(readonly, nonatomic) double bodyAreaNormalizedHeight;
- (void)setupLayoutGuides;
- (id)initWithNaturalHeight:(double)arg1;

@end

