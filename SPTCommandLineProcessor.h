//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDebugLogService;
@protocol SPTLinkDispatcher;

@interface SPTCommandLineProcessor : NSObject
{
    SPTDebugLogService *_debugLogService;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTDebugLogService *debugLogService; // @synthesize debugLogService=_debugLogService;
- (void).cxx_destruct;
- (void)processCommandLineUrlArgument:(id)arg1;
- (void)processCommandLineArguments:(id)arg1;
- (id)initWithDebugLogService:(id)arg1 linkDispatcher:(id)arg2;

@end

