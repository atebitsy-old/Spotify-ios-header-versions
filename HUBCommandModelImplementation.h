//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBAutoEquatable.h"

#import "HUBCommandModel-Protocol.h"

@class NSDictionary, NSString;

@interface HUBCommandModelImplementation : HUBAutoEquatable <HUBCommandModel>
{
    NSString *_name;
    NSDictionary *_data;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)serialize;
- (id)initWithName:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

