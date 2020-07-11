//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHubsKitComponentModel.h"

@class NSArray, NSDictionary, NSString, SPTHubsKitImageData, SPTHubsKitUIImpression5Writer, SPTHubsKitUIInteraction5Writer;

@interface SPTHubsKitMutableComponentModel : SPTHubsKitComponentModel
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=spt_search_uiinteraction5Writer) SPTHubsKitUIInteraction5Writer *uiinteraction5Writer;
@property(readonly, nonatomic, getter=spt_search_uiimpression5Writer) SPTHubsKitUIImpression5Writer *uiimpression5Writer;

// Remaining properties
@property(copy, nonatomic) NSString *accessoryTitle; // @dynamic accessoryTitle;
@property(copy, nonatomic) SPTHubsKitImageData *backgroundImageData; // @dynamic backgroundImageData;
@property(copy, nonatomic) NSArray *children; // @dynamic children;
@property(copy, nonatomic) NSString *componentCategory; // @dynamic componentCategory;
@property(copy, nonatomic) NSString *componentName; // @dynamic componentName;
@property(copy, nonatomic) NSString *componentNamespace; // @dynamic componentNamespace;
@property(copy, nonatomic) NSDictionary *customData; // @dynamic customData;
@property(copy, nonatomic) NSDictionary *customImageData; // @dynamic customImageData;
@property(copy, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(copy, nonatomic) NSDictionary *events; // @dynamic events;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDictionary *loggingData; // @dynamic loggingData;
@property(copy, nonatomic) SPTHubsKitImageData *mainImageData; // @dynamic mainImageData;
@property(copy, nonatomic) NSDictionary *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

