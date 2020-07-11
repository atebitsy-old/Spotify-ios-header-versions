//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTKeychainManager-Protocol.h"

@class NSString, NSUserDefaults;

@interface SPTUserDefaultsKeychainManager : NSObject <SPTKeychainManager>
{
    NSUserDefaults *_defaults;
}

- (void).cxx_destruct;
- (_Bool)deleteObjectForDomain:(id)arg1 andKey:(id)arg2 synchronizable:(_Bool)arg3;
- (_Bool)deleteStringForDomain:(id)arg1 andKey:(id)arg2;
- (void)setData:(id)arg1 forDomain:(id)arg2 andKey:(id)arg3 synchronizable:(_Bool)arg4;
- (void)setString:(id)arg1 forDomain:(id)arg2 andKey:(id)arg3;
- (id)dataForDomain:(id)arg1 andKey:(id)arg2 synchronizable:(_Bool)arg3;
- (id)stringForDomain:(id)arg1 andKey:(id)arg2;
- (id)defaultsKey:(id)arg1 withDomain:(id)arg2;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

