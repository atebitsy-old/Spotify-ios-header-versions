//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTFreeTierEntitySignalObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate;

@interface SPTFreeTierEntityReloadableContentOperation : NSObject <SPTFreeTierEntitySignalObserver, HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void)next:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithReloadSignal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

