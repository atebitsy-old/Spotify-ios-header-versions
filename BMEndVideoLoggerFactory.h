//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserverFactory-Protocol.h"

@class NSString;
@protocol BMLogger, BMLoggerDataProvider;

@interface BMEndVideoLoggerFactory : NSObject <BMEventObserverFactory>
{
    id <BMLogger> _logger;
    id <BMLoggerDataProvider> _loggerDataProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BMLoggerDataProvider> loggerDataProvider; // @synthesize loggerDataProvider=_loggerDataProvider;
@property(retain, nonatomic) id <BMLogger> logger; // @synthesize logger=_logger;
- (id)createPlaybackEventObserverForPlaybackIdentity:(id)arg1 options:(id)arg2 timeObservable:(id)arg3;
- (id)initWithLogger:(id)arg1 loggerDataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

