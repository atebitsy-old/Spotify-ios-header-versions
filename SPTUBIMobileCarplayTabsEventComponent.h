//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIEventComponent-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface SPTUBIMobileCarplayTabsEventComponent : NSObject <SPTUBIEventComponent>
{
    NSString *_name;
    NSString *_identifier;
    NSNumber *_position;
    NSURL *_uri;
    NSString *_reason;
}

@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 identifier:(id)arg2 position:(id)arg3 uri:(id)arg4 reason:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

