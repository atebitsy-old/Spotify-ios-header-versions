//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEventSender;

@interface SPTGaiaCastErrorLogger : NSObject
{
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void)sendEventName:(id)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (id)errorMessageForSessionSuspendedReason:(long long)arg1;
- (void)logEndedSessionWithErrorCode:(long long)arg1 message:(id)arg2;
- (void)logSuspendedSessionWithReason:(long long)arg1;
- (void)logFailedToStartSessionWithErrorCode:(long long)arg1 message:(id)arg2;
- (id)initWithEventSender:(id)arg1;

@end

