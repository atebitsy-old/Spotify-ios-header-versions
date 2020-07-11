//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTProfileUserDataChangeObserver;

@protocol SPTProfileUserData <NSObject>
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSString *shortName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *username;
- (void)removeProfileChangeObserver:(id <SPTProfileUserDataChangeObserver>)arg1;
- (void)addProfileChangeObserver:(id <SPTProfileUserDataChangeObserver>)arg1;
@end

