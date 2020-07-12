//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTUBIMobileTrackPageFreeInteractionEvent : NSObject <SPTUBIInteractionEvent>
{
    NSString *_applicationId;
    NSString *_interactionType;
    NSArray *_components;
    NSString *_action;
    long long _actionVersion;
    NSDictionary *_actionParameters;
    NSArray *_errors;
    NSString *_specificationVersion;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(copy, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(nonatomic) long long actionVersion; // @synthesize actionVersion=_actionVersion;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (id)initWithType:(id)arg1 components:(id)arg2 action:(id)arg3 actionVersion:(long long)arg4 actionParameters:(id)arg5 errors:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

