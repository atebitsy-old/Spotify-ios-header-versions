//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIPanGestureRecognizer;
@protocol SPTInAppMessageNoteOverlayViewDelegate;

@interface SPTInAppMessageNoteOverlayView : UIView <UIGestureRecognizerDelegate>
{
    id <SPTInAppMessageNoteOverlayViewDelegate> _delegate;
    UIView *_noteView;
    NSLayoutConstraint *_noteViewBottomConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _draggingDownThreshold;
    struct CGPoint _originalCenter;
}

- (void).cxx_destruct;
@property(nonatomic) double draggingDownThreshold; // @synthesize draggingDownThreshold=_draggingDownThreshold;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *noteViewBottomConstraint; // @synthesize noteViewBottomConstraint=_noteViewBottomConstraint;
@property(retain, nonatomic) UIView *noteView; // @synthesize noteView=_noteView;
@property(nonatomic) __weak id <SPTInAppMessageNoteOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipeDownGestureRecognizer:(id)arg1;
- (void)dismissNoteViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentNoteView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateNoteStyle;
- (void)setupNoteViewConstraints;
- (void)setupNoteView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

