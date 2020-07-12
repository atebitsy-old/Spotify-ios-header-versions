//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPersistentCounter-Protocol.h"

@class NSString, NSURL;
@protocol SPTLocalSettings;

@interface SPTFreeTierPersistentCounterImplementation : NSObject <SPTFreeTierPersistentCounter>
{
    id <SPTLocalSettings> _localSettings;
    NSString *_counterIdentifier;
    NSURL *_viewURI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(copy, nonatomic) NSString *counterIdentifier; // @synthesize counterIdentifier=_counterIdentifier;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void)setCount:(unsigned long long)arg1 forIdentifier:(id)arg2;
- (unsigned long long)countForIdentifier:(id)arg1;
- (id)settingsKeyForViewURI:(id)arg1 identifier:(id)arg2;
- (id)initWithLocalSettings:(id)arg1 counterIdentifier:(id)arg2 viewURI:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

