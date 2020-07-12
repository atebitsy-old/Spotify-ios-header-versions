//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMetaViewControllerObserver-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILongPressGestureRecognizer;
@protocol SPTMetaViewController, SPTVoiceTabBarViewManagerDelegate;

@interface SPTVoiceTabBarViewManager : NSObject <UIGestureRecognizerDelegate, SPTMetaViewControllerObserver>
{
    id <SPTVoiceTabBarViewManagerDelegate> _tabBarViewManagerDelegate;
    id <SPTMetaViewController> _metaViewController;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak id <SPTVoiceTabBarViewManagerDelegate> tabBarViewManagerDelegate; // @synthesize tabBarViewManagerDelegate=_tabBarViewManagerDelegate;
- (id)tabBarContainerViewController;
- (void)didChangeRootViewOfMetaViewController:(id)arg1;
- (id)getSearchTabBarButtonItemView;
- (id)getCurrentTabBarButtonIdentifer;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)unregisterLongPressTabBarView;
- (void)registerLongPressTabBarView;
- (id)initWithMetaViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

