//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentEventHandler-Protocol.h"

@protocol HUBCommandHandler;

@interface HUBCommandEventHandler : NSObject <HUBComponentEventHandler>
{
    id <HUBCommandHandler> _commandHandler;
}

@property(retain, nonatomic) id <HUBCommandHandler> commandHandler; // @synthesize commandHandler=_commandHandler;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)initWithCommandHandler:(id)arg1;

@end

