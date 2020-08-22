//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobileBrowse_Grid_FooterEventFactory, SPTUBIMobileBrowse_Grid_NavCardEventFactory, SPTUBIMobileBrowse_Grid_SectionHeaderEventFactory;

@protocol SPTUBIMobileBrowse_GridEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileBrowse_Grid_FooterEventFactory>)footerFactoryWithIdentifier:(NSString *)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobileBrowse_Grid_NavCardEventFactory>)navCardFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileBrowse_Grid_SectionHeaderEventFactory>)sectionHeaderFactoryWithIdentifier:(NSString *)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventLocation>)_location;
@end

