//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol _TtP18QuickScrollFeature26SPTQuickScrollViewDelegate_, _TtP18QuickScrollFeature28SPTQuickScrollViewDatasource_;

@interface _TtC22QuickScrollFeatureImpl15QuickScrollView : UIView
{
    // Error parsing type: , name: datasource
    // Error parsing type: , name: delegate
    // Error parsing type: , name: contentOffsetObserverToken
    // Error parsing type: , name: handleTopConstraint
    // Error parsing type: , name: handleTrailingConstraint
    // Error parsing type: , name: initialScroll
    // Error parsing type: , name: lastText
    // Error parsing type: , name: style
    // Error parsing type: , name: timeleft
    // Error parsing type: , name: timer
    // Error parsing type: , name: useDragHandler
    // Error parsing type: , name: scrollViewConstraints
    // Error parsing type: , name: indicatorView
    // Error parsing type: , name: handleView
    // Error parsing type: , name: indicatorTopConstraint
    // Error parsing type: , name: indicatorTrailingConstraint
    // Error parsing type: , name: visible
    // Error parsing type: , name: _active
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: handleMoving
    // Error parsing type: , name: _minimalOffset
    // Error parsing type: , name: panGesture
    // Error parsing type: , name: $__lazy_storage_$_impactGenerator
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak id <_TtP18QuickScrollFeature26SPTQuickScrollViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <_TtP18QuickScrollFeature28SPTQuickScrollViewDatasource_> datasource; // @synthesize datasource;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPanGesture:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)attachScrollView:(id)arg1;
@property(nonatomic) _Bool isActive;

@end

