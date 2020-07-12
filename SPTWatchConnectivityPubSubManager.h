//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityPubSub-Protocol.h"
#import "SPTWatchConnectivityPubSubMessageQueue-Protocol.h"
#import "SPTWatchConnectivityPubSubMessageTransportDelegate-Protocol.h"
#import "SPTWatchConnectivityPubSubRegistry-Protocol.h"
#import "SPTWatchConnectivitySessionObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults, SPTWatchConnectivityPubSubMessageTransport, SPTWatchConnectivitySession;

@interface SPTWatchConnectivityPubSubManager : NSObject <SPTWatchConnectivitySessionObserver, SPTWatchConnectivityPubSubMessageTransportDelegate, SPTWatchConnectivityPubSub, SPTWatchConnectivityPubSubMessageQueue, SPTWatchConnectivityPubSubRegistry>
{
    unsigned long long transportType;
    SPTWatchConnectivitySession *_session;
    SPTWatchConnectivityPubSubMessageTransport *_messageTransport;
    NSUserDefaults *_userDefaults;
    NSMutableArray *_subscriptions;
    NSMutableDictionary *_latestTopicIDs;
    unsigned long long _receivingTransportType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long receivingTransportType; // @synthesize receivingTransportType=_receivingTransportType;
@property(readonly, nonatomic) NSMutableDictionary *latestTopicIDs; // @synthesize latestTopicIDs=_latestTopicIDs;
@property(readonly, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) SPTWatchConnectivityPubSubMessageTransport *messageTransport; // @synthesize messageTransport=_messageTransport;
@property(readonly, nonatomic) SPTWatchConnectivitySession *session; // @synthesize session=_session;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType;
- (id)receivedPubSubDictionary;
- (void)pubSubMessageTransport:(id)arg1 didUpdateReceivedPubSubDictionary:(id)arg2;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)deregisterSubscriber:(id)arg1 forTopic:(id)arg2;
- (void)registerSubscriber:(id)arg1 forTopic:(id)arg2;
- (void)distributeNewMessagesInReceivedDictionary:(id)arg1;
- (id)updateApplicationContextWithMessage:(id)arg1 toTopic:(id)arg2;
- (id)latestMessageForTopic:(id)arg1;
- (id)publishMessage:(id)arg1 toTopic:(id)arg2;
- (id)provideMessageQueue;
- (id)provideRegistry;
- (void)load;
- (id)initWithSession:(id)arg1 messageTransport:(id)arg2 userDefaults:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

