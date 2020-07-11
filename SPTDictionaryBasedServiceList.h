//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTServiceList-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTDictionaryBasedServiceList : NSObject <SPTServiceList>
{
    NSArray *_scopes;
    NSDictionary *_serviceClassesByScope;
    NSDictionary *_parents;
}

@property(readonly, copy, nonatomic) NSDictionary *parents; // @synthesize parents=_parents;
@property(copy, nonatomic) NSDictionary *serviceClassesByScope; // @synthesize serviceClassesByScope=_serviceClassesByScope;
@property(readonly, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
- (void).cxx_destruct;
- (id)readConfiguration:(id)arg1;
- (id)serviceClassesForScope:(id)arg1;
- (id)parentScopeForScope:(id)arg1;
- (id)initWithClassNamesByScope:(id)arg1 scopeParents:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

