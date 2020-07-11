//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderAuthoriserDelegate-Protocol.h"
#import "SPTDataLoaderRequestResponseHandler-Protocol.h"
#import "SPTDataLoaderRequestResponseHandlerDelegate-Protocol.h"

@class NSArray, NSMapTable, NSString;
@protocol OS_dispatch_queue, SPTDataLoaderRequestResponseHandlerDelegate;

@interface SPTDataLoaderFactory : NSObject <SPTDataLoaderRequestResponseHandlerDelegate, SPTDataLoaderAuthoriserDelegate, SPTDataLoaderRequestResponseHandler>
{
    _Bool _offline;
    id <SPTDataLoaderRequestResponseHandlerDelegate> _requestResponseHandlerDelegate;
    NSArray *_authorisers;
    NSMapTable *_requestToRequestResponseHandler;
    NSObject<OS_dispatch_queue> *_requestTimeoutQueue;
}

+ (id)dataLoaderFactoryWithRequestResponseHandlerDelegate:(id)arg1 authorisers:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestTimeoutQueue; // @synthesize requestTimeoutQueue=_requestTimeoutQueue;
@property(retain, nonatomic) NSMapTable *requestToRequestResponseHandler; // @synthesize requestToRequestResponseHandler=_requestToRequestResponseHandler;
@property(readonly, copy, nonatomic) NSArray *authorisers; // @synthesize authorisers=_authorisers;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) __weak id <SPTDataLoaderRequestResponseHandlerDelegate> requestResponseHandlerDelegate; // @synthesize requestResponseHandlerDelegate=_requestResponseHandlerDelegate;
- (void).cxx_destruct;
- (void)dataLoaderAuthoriser:(id)arg1 didFailToAuthoriseRequest:(id)arg2 withError:(id)arg3;
- (void)dataLoaderAuthoriser:(id)arg1 authorisedRequest:(id)arg2;
- (void)requestResponseHandler:(id)arg1 cancelRequest:(id)arg2;
- (void)requestResponseHandler:(id)arg1 performRequest:(id)arg2;
- (void)needsNewBodyStream:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (void)authoriseRequest:(id)arg1;
- (_Bool)shouldAuthoriseRequest:(id)arg1;
- (void)requestIsWaitingForConnectivity:(id)arg1;
- (void)receivedInitialResponse:(id)arg1;
- (void)receivedDataChunk:(id)arg1 forResponse:(id)arg2;
- (void)cancelledRequest:(id)arg1;
- (void)failedResponse:(id)arg1;
- (void)successfulResponse:(id)arg1;
- (id)createDataLoader;
- (id)initWithRequestResponseHandlerDelegate:(id)arg1 authorisers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

