//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SPCore;

@interface SPTLoginLogoutAwaiter : NSObject
{
    SPCore *_core;
    NSMutableArray *_handlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
- (void)loggedInStateChanged:(_Bool)arg1;
- (void)sessionStateChanged;
- (void)awaitLogoutWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithCore:(id)arg1;

@end

