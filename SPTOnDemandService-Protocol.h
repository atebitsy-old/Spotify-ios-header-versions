//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol HUBContentOperation, SPTOnDemandSet;

@protocol SPTOnDemandService <SPTService>
- (id <SPTOnDemandSet>)provideOnDemandSet;
- (id <HUBContentOperation>)provideOnDemandCardAccessibilityContentOperation;
- (id <HUBContentOperation>)provideOnDemandReloadContentOperation;
- (id <HUBContentOperation>)provideOnDemandDecoratorContentOperation;
- (id <HUBContentOperation>)provideOnDemandExtractorContentOperation;
@end

