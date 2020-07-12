//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSTransport-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTEventSenderSatelliteServiceResponder-Protocol.h"

@class NSString, SPTDataLoader;
@protocol OS_dispatch_queue, SPTNetworkService;

@interface SPTEventSenderTransportImplementation : NSObject <SPTDataLoaderDelegate, INSTransport, SPTEventSenderSatelliteServiceResponder>
{
    id <SPTNetworkService> _networkService;
    SPTDataLoader *_dataLoader;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void)reloadDataLoader;
- (void)satelliteServiceDidUnload;
- (void)satelliteServiceDidLoad;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)postData:(id)arg1 path:(id)arg2 authenticate:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithNetworkService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

