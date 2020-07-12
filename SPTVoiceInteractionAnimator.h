//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CALayerDelegate-Protocol.h"

@class CAGradientLayer, NSDictionary, NSString, SPTVoiceListeningRadialGradientLayer, UIView;

@interface SPTVoiceInteractionAnimator : NSObject <CALayerDelegate>
{
    _Bool _renderRadialGradient;
    UIView *_referenceView;
    CAGradientLayer *_backgroundGradientLayer;
    CAGradientLayer *_shadeOverlayLayer;
    SPTVoiceListeningRadialGradientLayer *_radialOverlayLayer;
    NSDictionary *_behaviors;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool renderRadialGradient; // @synthesize renderRadialGradient=_renderRadialGradient;
@property(retain, nonatomic) NSDictionary *behaviors; // @synthesize behaviors=_behaviors;
@property(retain, nonatomic) SPTVoiceListeningRadialGradientLayer *radialOverlayLayer; // @synthesize radialOverlayLayer=_radialOverlayLayer;
@property(retain, nonatomic) CAGradientLayer *shadeOverlayLayer; // @synthesize shadeOverlayLayer=_shadeOverlayLayer;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer; // @synthesize backgroundGradientLayer=_backgroundGradientLayer;
@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
- (id)interactionBehaviorWithGradientRadius:(double)arg1 backgroundGradientLocations:(id)arg2 shadeGradientLocations:(id)arg3;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)animateToInteractionMode:(unsigned long long)arg1;
- (void)layoutGradients;
- (void)setupBackgroundGradients;
- (void)setupBehaviorsIfneeded;
- (id)initWithReferenceView:(id)arg1 renderRadialGradient:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

