//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileHomeEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileHomeEventFactoryImplementation : NSObject <SPTUBIMobileHomeEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageReason:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)itemFactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)largeCardFactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)sectionHeaderFactory;
- (id)tasteOnboardingFactoryWithPosition:(long long)arg1;
- (id)shelvesFactory;
- (id)promoV2FactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)promoV1FactoryWithIdentifier:(id)arg1 uri:(id)arg2;
- (id)toolbarFactory;
- (id)_location;
- (id)initWithPageReason:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

