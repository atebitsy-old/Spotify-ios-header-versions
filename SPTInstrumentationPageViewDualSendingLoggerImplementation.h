//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationPageViewLogger-Protocol.h"

@class NSString, SPTInstrumentationPageViewData;
@protocol SPTEventSender;

@interface SPTInstrumentationPageViewDualSendingLoggerImplementation : NSObject <SPTInstrumentationPageViewLogger>
{
    id <SPTEventSender> _eventSender;
    SPTInstrumentationPageViewData *_currentData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTInstrumentationPageViewData *currentData; // @synthesize currentData=_currentData;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void)sendPageViewExitForCurrentDataWithTimestamp:(long long)arg1;
- (void)exitCurrentPageWithTimestamp:(long long)arg1;
- (void)sendPageViewEnterWithPageIdentifier:(id)arg1 entityUri:(id)arg2 timestamp:(long long)arg3 navigationRootIdentifier:(id)arg4;
- (void)enterPageWithIdentifier:(id)arg1 URI:(id)arg2 timestamp:(long long)arg3 navigationRootIdentifier:(id)arg4;
- (id)initWithInstrumentsEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

