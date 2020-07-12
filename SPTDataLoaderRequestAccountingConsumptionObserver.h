//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderConsumptionObserver-Protocol.h"

@class NSString, SPTRequestAccounting;

@interface SPTDataLoaderRequestAccountingConsumptionObserver : NSObject <SPTDataLoaderConsumptionObserver>
{
    SPTRequestAccounting *_requestAccounting;
}

+ (id)dataLoaderRequestAccountingConsumptionObserverWithRequestAccount:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTRequestAccounting *requestAccounting; // @synthesize requestAccounting=_requestAccounting;
- (void)endedRequestWithResponse:(id)arg1 bytesDownloaded:(int)arg2 bytesUploaded:(int)arg3;
- (id)dataLoaderRequestMethodToString:(long long)arg1;
- (id)initWithRequestAccounting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

