//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSArray, NSDictionary, NSString;

@interface SPTLogMessageSharedListeningUIInteraction1 : SPTLogMessage
{
    _Bool _globalExplicitOnValue;
    _Bool _userExplicitOnValue;
    _Bool _userInMixValue;
    _Bool _isFamilyMemberValue;
    NSString *_requestIdValue;
    NSString *_featureIdValue;
    NSString *_pageuriValue;
    NSString *_sectionIdValue;
    long long _itemIndexValue;
    NSString *_targetUriValue;
    NSString *_interactionTypeValue;
    NSString *_userIntentValue;
    double _timestampValue;
    NSString *_actionValue;
    NSString *_mixTypeValue;
    NSString *_mixTrackFilterValue;
    NSString *_algorithmIdValue;
    NSArray *_excludedUserIdsValue;
    NSArray *_excludedGenresValue;
    NSDictionary *_testDataValue;
}

+ (id)messageWithRequestId:(id)arg1 featureId:(id)arg2 pageuri:(id)arg3 sectionId:(id)arg4 itemIndex:(long long)arg5 targetUri:(id)arg6 interactionType:(id)arg7 userIntent:(id)arg8 timestamp:(double)arg9 action:(id)arg10 mixType:(id)arg11 globalExplicitOn:(_Bool)arg12 userExplicitOn:(_Bool)arg13 userInMix:(_Bool)arg14 isFamilyMember:(_Bool)arg15 mixTrackFilter:(id)arg16 algorithmId:(id)arg17 excludedUserIds:(id)arg18 excludedGenres:(id)arg19 testData:(id)arg20;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *testDataValue; // @synthesize testDataValue=_testDataValue;
@property(copy, nonatomic) NSArray *excludedGenresValue; // @synthesize excludedGenresValue=_excludedGenresValue;
@property(copy, nonatomic) NSArray *excludedUserIdsValue; // @synthesize excludedUserIdsValue=_excludedUserIdsValue;
@property(copy, nonatomic) NSString *algorithmIdValue; // @synthesize algorithmIdValue=_algorithmIdValue;
@property(copy, nonatomic) NSString *mixTrackFilterValue; // @synthesize mixTrackFilterValue=_mixTrackFilterValue;
@property(nonatomic) _Bool isFamilyMemberValue; // @synthesize isFamilyMemberValue=_isFamilyMemberValue;
@property(nonatomic) _Bool userInMixValue; // @synthesize userInMixValue=_userInMixValue;
@property(nonatomic) _Bool userExplicitOnValue; // @synthesize userExplicitOnValue=_userExplicitOnValue;
@property(nonatomic) _Bool globalExplicitOnValue; // @synthesize globalExplicitOnValue=_globalExplicitOnValue;
@property(copy, nonatomic) NSString *mixTypeValue; // @synthesize mixTypeValue=_mixTypeValue;
@property(copy, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(nonatomic) double timestampValue; // @synthesize timestampValue=_timestampValue;
@property(copy, nonatomic) NSString *userIntentValue; // @synthesize userIntentValue=_userIntentValue;
@property(copy, nonatomic) NSString *interactionTypeValue; // @synthesize interactionTypeValue=_interactionTypeValue;
@property(copy, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(nonatomic) long long itemIndexValue; // @synthesize itemIndexValue=_itemIndexValue;
@property(copy, nonatomic) NSString *sectionIdValue; // @synthesize sectionIdValue=_sectionIdValue;
@property(copy, nonatomic) NSString *pageuriValue; // @synthesize pageuriValue=_pageuriValue;
@property(copy, nonatomic) NSString *featureIdValue; // @synthesize featureIdValue=_featureIdValue;
@property(copy, nonatomic) NSString *requestIdValue; // @synthesize requestIdValue=_requestIdValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

