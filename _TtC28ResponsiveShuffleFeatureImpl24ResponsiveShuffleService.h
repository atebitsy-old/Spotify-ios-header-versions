//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TtP24ResponsiveShuffleFeature40SPTResponsiveShuffleOnboardingController_, _TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_;

@interface _TtC28ResponsiveShuffleFeatureImpl24ResponsiveShuffleService : NSObject
{
    // Error parsing type: , name: containerService
    // Error parsing type: , name: remoteConfigurationService
    // Error parsing type: , name: mobiusController
    // Error parsing type: , name: onboardingController
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) id <_TtP24ResponsiveShuffleFeature41SPTResponsiveShufflePlayInitiatedNotifier_> playInitiatedNotifier;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;
@property(nonatomic, retain) id <_TtP24ResponsiveShuffleFeature40SPTResponsiveShuffleOnboardingController_> onboardingController; // @synthesize onboardingController;

@end

