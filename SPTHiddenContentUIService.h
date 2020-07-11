//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

@protocol SPContextMenuFeature, SPTAudioPreviewService, SPTExplicitContentService, SPTFreeTierService, SPTGLUEService, SPTHiddenContentService, SPTPerformanceMetricsService, _TtP22AgeVerificationFeature25SPTAgeVerificationService_;

@interface SPTHiddenContentUIService : SPTUIPageService
{
    id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> _ageVerificationService;
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTGLUEService> _glueService;
    id <SPTHiddenContentService> _hiddenContentService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTHiddenContentService> hiddenContentService; // @synthesize hiddenContentService=_hiddenContentService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
@property(nonatomic) __weak id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> ageVerificationService; // @synthesize ageVerificationService=_ageVerificationService;
- (void).cxx_destruct;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)configureWithServices:(id)arg1;

@end

