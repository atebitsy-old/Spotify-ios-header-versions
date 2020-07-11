//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBSerializable-Protocol.h"

@class HUBIdentifier, NSArray, NSDictionary, NSString;
@protocol HUBComponentImageData, HUBComponentModel, HUBComponentTarget, HUBIcon;

@protocol HUBComponentModel <HUBSerializable>
- (NSArray *)childrenInGroupWithIdentifier:(NSString *)arg1;
- (id <HUBComponentModel>)childWithIdentifier:(NSString *)arg1;
- (id <HUBComponentModel>)childAtIndex:(unsigned long long)arg1;
@property(nonatomic, readonly) NSArray *children;
@property(nonatomic, readonly) id <HUBComponentModel> parent;
@property(nonatomic, readonly) NSDictionary *customData;
@property(nonatomic, readonly) NSDictionary *loggingData;
@property(nonatomic, readonly) NSDictionary *metadata;
@property(nonatomic, readonly) NSDictionary *events;
@property(nonatomic, readonly) id <HUBComponentTarget> target;
@property(nonatomic, readonly) id <HUBIcon> icon;
@property(nonatomic, readonly) NSDictionary *customImageData;
@property(nonatomic, readonly) id <HUBComponentImageData> backgroundImageData;
@property(nonatomic, readonly) id <HUBComponentImageData> mainImageData;
@property(nonatomic, readonly) NSString *descriptionText;
@property(nonatomic, readonly) NSString *accessoryTitle;
@property(nonatomic, readonly) NSString *subtitle;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSString *componentCategory;
@property(nonatomic, readonly) HUBIdentifier *componentIdentifier;
@property(nonatomic, readonly) NSString *groupIdentifier;
@property(nonatomic, readonly) unsigned long long index;
@property(nonatomic, readonly) unsigned long long type;
@property(nonatomic, readonly) NSString *identifier;
@end

