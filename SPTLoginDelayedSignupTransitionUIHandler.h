//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUIModeTransitionUIHandler-Protocol.h"

@class NSString, SPTProgressView, UIWindow;
@protocol SPTMetaViewController;

@interface SPTLoginDelayedSignupTransitionUIHandler : NSObject <SPTUIModeTransitionUIHandler>
{
    UIWindow *_shieldingWindow;
    SPTProgressView *_progressView;
    id <SPTMetaViewController> _metaViewController;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIWindow *shieldingWindow; // @synthesize shieldingWindow=_shieldingWindow;
- (void)hideTransitionUIForResult:(long long)arg1;
- (void)showTransitionUI;
- (id)screenshotBackground;
- (void)setupShieldingWindowUsingScreenshotView:(id)arg1;
- (id)initWithMetaViewController:(id)arg1 window:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

