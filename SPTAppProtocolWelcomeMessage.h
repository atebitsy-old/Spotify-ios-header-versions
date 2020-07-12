//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPWelcomeMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolWelcomeMessage : SPTAppProtocolWAMPMessage <SPTWAMPWelcomeMessage>
{
    unsigned long long _sessionID;
    NSDictionary *_details;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
@property(readonly, nonatomic) NSString *dateTime;
@property(readonly, nonatomic) NSString *appVersion;
@property(readonly, nonatomic) NSDictionary *roles;
- (id)initWithSessionID:(unsigned long long)arg1 details:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

