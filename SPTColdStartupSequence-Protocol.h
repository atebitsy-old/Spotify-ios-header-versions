//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol SPTColdStartupSequence <NSObject>
@property(readonly, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) NSDictionary *steps;
@property(readonly, nonatomic) unsigned long long terminalApplicationState;
@property(readonly, nonatomic) unsigned long long initialApplicationState;
@property(readonly, nonatomic) NSString *connectionType;
@property(readonly, nonatomic) NSString *terminalState;
@property(readonly, nonatomic) NSString *viewLoadSequenceId;
@end

