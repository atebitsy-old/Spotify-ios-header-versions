//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTSearchFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _shouldEnableTopics;
    _Bool _shouldUseV2Search;
    _Bool _shouldEnableDebuggingLyricsRow;
}

@property(readonly, nonatomic) _Bool shouldEnableDebuggingLyricsRow; // @synthesize shouldEnableDebuggingLyricsRow=_shouldEnableDebuggingLyricsRow;
@property(readonly, nonatomic) _Bool shouldUseV2Search; // @synthesize shouldUseV2Search=_shouldUseV2Search;
@property(readonly, nonatomic) _Bool shouldEnableTopics; // @synthesize shouldEnableTopics=_shouldEnableTopics;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

