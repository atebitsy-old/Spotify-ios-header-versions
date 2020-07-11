//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationAddTrackHandler-Protocol.h"

@class NSNotificationCenter, NSString;
@protocol SPTAssistedCurationDatasource;

@interface SPTAssistedCurationAddTrackHandlerImplementation : NSObject <SPTAssistedCurationAddTrackHandler>
{
    id <SPTAssistedCurationDatasource> _datasource;
    NSNotificationCenter *_notificationCenter;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) id <SPTAssistedCurationDatasource> datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)postNotification:(id)arg1 trackURI:(id)arg2 userInfo:(id)arg3;
- (void)isDuplicatedTrack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTrackURI:(id)arg1 fromContext:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithDatasource:(id)arg1 notificationCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

