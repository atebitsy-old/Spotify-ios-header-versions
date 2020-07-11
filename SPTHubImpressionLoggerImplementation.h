//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubImpressionLogger-Protocol.h"

@class NSString;
@protocol SPTHubComponentModelURIResolver, SPTLogCenter, SPTUserBehaviourHubsInstrumentation, SPTUserBehaviourInstrumentationLogger;

@interface SPTHubImpressionLoggerImplementation : NSObject <SPTHubImpressionLogger>
{
    id <SPTLogCenter> _logCenter;
    NSString *_featureIdentifier;
    id <SPTHubComponentModelURIResolver> _componentModelURIResolver;
    NSString *_viewURIString;
    id <SPTUserBehaviourHubsInstrumentation> _ubiHubsInstrumentation;
    id <SPTUserBehaviourInstrumentationLogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUserBehaviourInstrumentationLogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTUserBehaviourHubsInstrumentation> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, copy, nonatomic) NSString *viewURIString; // @synthesize viewURIString=_viewURIString;
@property(readonly, nonatomic) id <SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logImpressionWithComponentModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2 pageURI:(id)arg3 componentModelURIResolver:(id)arg4 ubiHubsInstrumentation:(id)arg5 ubiLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

