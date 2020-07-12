//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTHubInteractionLogger, SPTRadioManager;

@interface SPTBrowsePlayRadioCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTRadioManager> _radioManager;
    id <SPTHubInteractionLogger> _interactionLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTRadioManager> radioManager; // @synthesize radioManager=_radioManager;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithRadioManager:(id)arg1 interactionLogger:(id)arg2;

@end

