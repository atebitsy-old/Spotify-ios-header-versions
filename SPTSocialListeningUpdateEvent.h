//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningUpdateEventModelEntity-Protocol.h"

@class NSString;
@protocol SPTSocialListeningParticipantModelEntity;

@interface SPTSocialListeningUpdateEvent : NSObject <SPTSocialListeningUpdateEventModelEntity>
{
    unsigned long long _updateReason;
    id <SPTSocialListeningParticipantModelEntity> _participant;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTSocialListeningParticipantModelEntity> participant; // @synthesize participant=_participant;
@property(readonly, nonatomic) unsigned long long updateReason; // @synthesize updateReason=_updateReason;
- (id)initWithReasonString:(id)arg1 participant:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

