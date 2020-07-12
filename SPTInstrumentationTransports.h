//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationTransport-Protocol.h"
#import "SPTInstrumentationTransportRegistry-Protocol.h"

@class NSSet, NSString;

@interface SPTInstrumentationTransports : NSObject <SPTInstrumentationTransport, SPTInstrumentationTransportRegistry>
{
    NSSet *_transports;
}

+ (id)defaultTransportsWithLogCenter:(id)arg1 eventSender:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *transports; // @synthesize transports=_transports;
- (void)removeTransport:(id)arg1;
- (void)addTransport:(id)arg1;
- (id)initWithTransports:(id)arg1;
- (void)send:(id)arg1;
- (void)legacySend:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

