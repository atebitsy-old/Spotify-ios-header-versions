//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ConnectVolumeControl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *action; // @dynamic action;
@property(copy, nonatomic) NSString *actionParameter; // @dynamic actionParameter;
@property(copy, nonatomic) NSString *activeDeviceId; // @dynamic activeDeviceId;
@property(copy, nonatomic) NSString *applicationState; // @dynamic applicationState;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasActionParameter; // @dynamic hasActionParameter;
@property(nonatomic) _Bool hasActiveDeviceId; // @dynamic hasActiveDeviceId;
@property(nonatomic) _Bool hasApplicationState; // @dynamic hasApplicationState;
@property(nonatomic) _Bool hasVolume; // @dynamic hasVolume;
@property(nonatomic) float volume; // @dynamic volume;

@end
