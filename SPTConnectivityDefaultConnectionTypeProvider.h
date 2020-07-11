//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityConnectionTypeProvider-Protocol.h"

@class NSString;

@interface SPTConnectivityDefaultConnectionTypeProvider : NSObject <SPTConnectivityConnectionTypeProvider>
{
    struct unique_ptr<spotify::connectivity::ConnectionTypeProvider, std::__1::default_delete<spotify::connectivity::ConnectionTypeProvider>> _cpp;
    struct map<__weak id<SPTConnectivityConnectionTypeProviderObserver>, spotify::signals::scoped_connection, std::__1::less<__weak id<SPTConnectivityConnectionTypeProviderObserver>>, std::__1::allocator<std::__1::pair<const __weak id<SPTConnectivityConnectionTypeProviderObserver>, spotify::signals::scoped_connection>>> _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) long long connectionType;
- (id)initWithConnectionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

