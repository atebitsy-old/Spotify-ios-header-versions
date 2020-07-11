//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSError, SPTHomeContentCache;
@protocol HUBContentOperationDelegate, HUBViewModelBuilder;

@interface SPTHomeCachedContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    SPTHomeContentCache *_homeContentCache;
    id <HUBViewModelBuilder> _viewModelBuilder;
    NSError *_previousError;
}

@property(retain, nonatomic) NSError *previousError; // @synthesize previousError=_previousError;
@property(retain, nonatomic) id <HUBViewModelBuilder> viewModelBuilder; // @synthesize viewModelBuilder=_viewModelBuilder;
@property(readonly, nonatomic) __weak SPTHomeContentCache *homeContentCache; // @synthesize homeContentCache=_homeContentCache;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)modifyContentIdentifierToIndicateCacheSource:(id)arg1;
- (id)makeUnknownError;
- (void)finishWithOperationStatus:(unsigned long long)arg1;
- (void)updateBuilderLoggingData:(id)arg1;
- (void)updateCustomData;
- (void)updateBuilders;
- (void)parseBody:(id)arg1;
- (void)loadFromCache;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithHomeContentCache:(id)arg1;

@end

