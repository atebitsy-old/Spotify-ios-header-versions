//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTOnDemandSetObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTOnDemandSet;

@interface SPTOnDemandReloadContentOperation : NSObject <SPTOnDemandSetObserver, HUBContentOperation>
{
    _Bool _observing;
    id <HUBContentOperationDelegate> _delegate;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDemandSetDidUpdate:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithOnDemandSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

