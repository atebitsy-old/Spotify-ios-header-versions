//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobilePremiumDestination_ScrollingView_HubsComponentEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobilePremiumDestination_ScrollingView_HubsComponentEventFactoryImplementation : NSObject <SPTUBIMobilePremiumDestination_ScrollingView_HubsComponentEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3 components:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitUiHide;
- (id)hitUiReveal;
- (id)impression;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3 components:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

