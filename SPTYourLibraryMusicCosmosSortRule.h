//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSortingFilteringSortRule-Protocol.h"
#import "SPTYourLibraryMusicCosmosOptionsUpdate-Protocol.h"
#import "SPTYourLibraryMusicGroupLabelSortRule-Protocol.h"

@class NSString;

@interface SPTYourLibraryMusicCosmosSortRule : NSObject <SPTSortingFilteringSortRule, SPTYourLibraryMusicCosmosOptionsUpdate, SPTYourLibraryMusicGroupLabelSortRule>
{
    _Bool _ascendingOrder;
    _Bool _groupLabel;
    NSString *_identifier;
    NSString *_title;
    CDUnknownBlockType _applyRule;
}

+ (id)ruleWithIdentifier:(id)arg1 title:(id)arg2 ascendingOrder:(_Bool)arg3 applyRule:(CDUnknownBlockType)arg4;
+ (id)ruleWithIdentifier:(id)arg1 title:(id)arg2 ascendingOrder:(_Bool)arg3 groupLabel:(_Bool)arg4 applyRule:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType applyRule; // @synthesize applyRule=_applyRule;
@property(readonly, nonatomic) _Bool groupLabel; // @synthesize groupLabel=_groupLabel;
@property(readonly, nonatomic) _Bool ascendingOrder; // @synthesize ascendingOrder=_ascendingOrder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)applyRuleToOptions:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 ascendingOrder:(_Bool)arg3 applyRule:(CDUnknownBlockType)arg4;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 ascendingOrder:(_Bool)arg3 groupLabel:(_Bool)arg4 applyRule:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

