//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSURLSessionTask, SPTDataLoaderExponentialTimer, SPTDataLoaderRateLimiter, SPTDataLoaderRequest, SPTDataLoaderResponse;
@protocol OS_dispatch_queue, SPTDataLoaderRequestResponseHandler;

@interface SPTDataLoaderRequestTaskHandler : NSObject
{
    _Bool _cancelled;
    _Bool _calledSuccessfulResponse;
    _Bool _calledFailedResponse;
    _Bool _calledCancelledRequest;
    _Bool _started;
    NSURLSessionTask *_task;
    SPTDataLoaderRequest *_request;
    id <SPTDataLoaderRequestResponseHandler> _requestResponseHandler;
    SPTDataLoaderRateLimiter *_rateLimiter;
    SPTDataLoaderResponse *_response;
    NSMutableData *_receivedData;
    double _absoluteStartTime;
    unsigned long long _retryCount;
    unsigned long long _waitCount;
    unsigned long long _redirectCount;
    CDUnknownBlockType _executionBlock;
    SPTDataLoaderExponentialTimer *_exponentialTimer;
    NSObject<OS_dispatch_queue> *_retryQueue;
}

+ (id)dataLoaderRequestTaskHandlerWithTask:(id)arg1 request:(id)arg2 requestResponseHandler:(id)arg3 rateLimiter:(id)arg4;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *retryQueue; // @synthesize retryQueue=_retryQueue;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool calledCancelledRequest; // @synthesize calledCancelledRequest=_calledCancelledRequest;
@property(nonatomic) _Bool calledFailedResponse; // @synthesize calledFailedResponse=_calledFailedResponse;
@property(nonatomic) _Bool calledSuccessfulResponse; // @synthesize calledSuccessfulResponse=_calledSuccessfulResponse;
@property(retain, nonatomic) SPTDataLoaderExponentialTimer *exponentialTimer; // @synthesize exponentialTimer=_exponentialTimer;
@property(copy, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
@property(nonatomic) unsigned long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property(nonatomic) unsigned long long waitCount; // @synthesize waitCount=_waitCount;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double absoluteStartTime; // @synthesize absoluteStartTime=_absoluteStartTime;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) SPTDataLoaderResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) SPTDataLoaderRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(nonatomic) __weak id <SPTDataLoaderRequestResponseHandler> requestResponseHandler; // @synthesize requestResponseHandler=_requestResponseHandler;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) SPTDataLoaderRequest *request; // @synthesize request=_request;
@property(retain) NSURLSessionTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)dealloc;
- (void)completeIfInFlight;
- (void)checkRetryLimiterAndExecute;
- (void)checkRateLimiterAndExecute;
- (void)noteWaitingForConnectivity;
- (void)provideNewBodyStreamWithCompletion:(CDUnknownBlockType)arg1;
- (void)start;
- (_Bool)mayRedirect;
- (long long)receiveResponse:(id)arg1;
- (id)completeWithError:(id)arg1;
- (void)receiveData:(id)arg1;
- (id)initWithTask:(id)arg1 request:(id)arg2 requestResponseHandler:(id)arg3 rateLimiter:(id)arg4;

@end

