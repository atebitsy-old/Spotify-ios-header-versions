//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIEventFactoryLocation-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileCarplayTabsLocation : NSObject <SPTUBIEventFactoryLocation>
{
    _Bool _impressionEnabled;
    NSString *_applicationId;
    NSString *_specificationId;
    NSString *_specificationVersion;
    NSString *_pageReason;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
    NSArray *_components;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool impressionEnabled; // @synthesize impressionEnabled=_impressionEnabled;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(copy, nonatomic) NSString *pageReason; // @synthesize pageReason=_pageReason;
@property(copy, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (id)eventComponentsWithPageURI:(id)arg1 pageId:(id)arg2;
- (id)initWithApplicationId:(id)arg1 specificationId:(id)arg2 specificationVersion:(id)arg3 pageReason:(id)arg4 specificationCommitHash:(id)arg5 generatorCommitHash:(id)arg6 components:(id)arg7 impression:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

