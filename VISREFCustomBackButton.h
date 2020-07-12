//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "VISREFHeaderViewAnimationProgress-Protocol.h"

@class NSString, UILabel, UIView;

@interface VISREFCustomBackButton : UIButton <VISREFHeaderViewAnimationProgress>
{
    _Bool _protectionEnabled;
    UIView *_chevronContainerView;
    UIView *_darkeningView;
    UILabel *_glyphLabel;
    CDStruct_5a28e70a _glyphProtectionProgressRange;
    CDStruct_5a28e70a _glyphOffsetProgressRange;
    CDStruct_5a28e70a _buttonFadeOutProgressRange;
}

+ (id)defaultGlyph;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *glyphLabel; // @synthesize glyphLabel=_glyphLabel;
@property(retain, nonatomic) UIView *darkeningView; // @synthesize darkeningView=_darkeningView;
@property(retain, nonatomic) UIView *chevronContainerView; // @synthesize chevronContainerView=_chevronContainerView;
@property(nonatomic) CDStruct_5a28e70a buttonFadeOutProgressRange; // @synthesize buttonFadeOutProgressRange=_buttonFadeOutProgressRange;
@property(nonatomic) CDStruct_5a28e70a glyphOffsetProgressRange; // @synthesize glyphOffsetProgressRange=_glyphOffsetProgressRange;
@property(nonatomic) CDStruct_5a28e70a glyphProtectionProgressRange; // @synthesize glyphProtectionProgressRange=_glyphProtectionProgressRange;
@property(nonatomic, getter=isProtectionEnabled) _Bool protectionEnabled; // @synthesize protectionEnabled=_protectionEnabled;
- (void)headerViewNormalizedProgressUpdate:(double)arg1;
- (void)setButtonProtectionBackgroundColor:(id)arg1;
- (void)setupLayout;
- (void)setupWithGlyph:(id)arg1;
- (id)initWithGlyph:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

