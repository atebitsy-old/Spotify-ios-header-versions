//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTInAppMessageLogger-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTEventSender, SPTUBILogger;

@interface SPTInAppMessageServiceLogger : NSObject <SPTDataLoaderDelegate, SPTInAppMessageLogger>
{
    SPTDataLoader *_dataLoader;
    id <SPTEventSender> _eventSender;
    id <SPTUBILogger> _ubiLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (id)dismissType:(long long)arg1;
- (id)requestTypeStringFromType:(long long)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)logInAppMessageDismissEventWithMessageID:(id)arg1 uuid:(id)arg2 dismissType:(long long)arg3;
- (void)logInAppMessagePresentedWithMessageUUID:(id)arg1 messageFormat:(id)arg2;
- (void)logInAppMessageTriggerMessageDiscardedWithReason:(id)arg1 triggerPattern:(id)arg2 triggerType:(id)arg3 messageFormat:(id)arg4 messsageID:(id)arg5 uuid:(id)arg6;
- (void)logInAppMessageTriggerMessagePresentationPerformanceWithTriggerMessageId:(id)arg1 performanceTime:(id)arg2 messageFormat:(id)arg3 triggerPattern:(id)arg4 triggerType:(id)arg5;
- (void)logInAppMessageBackendRequestPerformanceWithRequestUri:(id)arg1 performanceTime:(id)arg2 requestType:(long long)arg3 messageFormat:(id)arg4;
- (void)logInAppMessageBackendRequestErrorOfType:(long long)arg1 response:(id)arg2;
- (void)logInteractionWithInAppMessageWithUUID:(id)arg1 actionType:(id)arg2 actionUrl:(id)arg3;
- (void)logDismissEventWithMessageID:(id)arg1 uuid:(id)arg2;
- (void)logInteractionWithInAppMessageWithTrackingURL:(id)arg1 messageFormat:(id)arg2;
- (void)logImpressionOfInAppMessageWithImpressionUrl:(id)arg1 messageFormat:(id)arg2;
- (void)performLogRequestForURL:(id)arg1 type:(long long)arg2 messageFormat:(id)arg3;
- (id)initWithDataLoader:(id)arg1 eventSender:(id)arg2 ubiLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

