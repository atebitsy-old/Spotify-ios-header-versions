//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningParticipantViewModel-Protocol.h"

@class NSString, NSURL, SPTSocialListeningParticipantModel;

@interface SPTSocialListeningParticipantViewModelImplementation : NSObject <SPTSocialListeningParticipantViewModel>
{
    _Bool _listenTogetherEnabled;
    SPTSocialListeningParticipantModel *_participantModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTSocialListeningParticipantModel *participantModel; // @synthesize participantModel=_participantModel;
@property(readonly, nonatomic, getter=isListenTogetherEnabled) _Bool listenTogetherEnabled; // @synthesize listenTogetherEnabled=_listenTogetherEnabled;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *participantID;
@property(readonly, nonatomic, getter=isHost) _Bool host;
@property(readonly, nonatomic, getter=isCurrentUser) _Bool currentUser;
- (id)initWithParticipantModel:(id)arg1 listenTogetherEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

