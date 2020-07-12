//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"
#import "SPTWebViewFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTWebViewFactoryImplementation;
@protocol SPTCoreService, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTWebViewFeatureImplementation : NSObject <SPTService, SPTWebViewFeature>
{
    id <SPTCoreService> _coreService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTUIPresentationService> _presentationService;
    SPTWebViewFactoryImplementation *_webViewFactory;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTWebViewFactoryImplementation *webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (id)provideWebViewFactory;
- (void)unload;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

