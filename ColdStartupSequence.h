//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt64Dictionary, NSMutableDictionary, NSString;

@interface ColdStartupSequence : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *connectionType; // @dynamic connectionType;
@property(nonatomic) int deviceYearClass; // @dynamic deviceYearClass;
@property(nonatomic) _Bool hasConnectionType; // @dynamic hasConnectionType;
@property(nonatomic) _Bool hasDeviceYearClass; // @dynamic hasDeviceYearClass;
@property(nonatomic) _Bool hasInitialApplicationState; // @dynamic hasInitialApplicationState;
@property(nonatomic) _Bool hasTerminalApplicationState; // @dynamic hasTerminalApplicationState;
@property(nonatomic) _Bool hasTerminalState; // @dynamic hasTerminalState;
@property(nonatomic) _Bool hasViewLoadSequenceId; // @dynamic hasViewLoadSequenceId;
@property(copy, nonatomic) NSString *initialApplicationState; // @dynamic initialApplicationState;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @dynamic metadata;
@property(readonly, nonatomic) unsigned long long metadata_Count; // @dynamic metadata_Count;
@property(retain, nonatomic) GPBStringInt64Dictionary *steps; // @dynamic steps;
@property(readonly, nonatomic) unsigned long long steps_Count; // @dynamic steps_Count;
@property(copy, nonatomic) NSString *terminalApplicationState; // @dynamic terminalApplicationState;
@property(copy, nonatomic) NSString *terminalState; // @dynamic terminalState;
@property(copy, nonatomic) NSString *viewLoadSequenceId; // @dynamic viewLoadSequenceId;

@end

