//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEFeatureController-Protocol.h"

@class GLUEThemeFeatureController;
@protocol GLUETheme;

@interface GLUELegacyIntegration : NSObject <GLUEFeatureController>
{
    id <GLUETheme> _theme;
    GLUEThemeFeatureController *_featureController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) GLUEThemeFeatureController *featureController; // @synthesize featureController=_featureController;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void)enableModernFeatures;
- (void)resetRolloutStatuses;
@property _Bool leftAlignedTrackCloudEnabled;
@property _Bool leftAlignedSectionHeadersEnabled;
@property _Bool motionEnabled;
- (id)initWithTheme:(id)arg1;

@end

