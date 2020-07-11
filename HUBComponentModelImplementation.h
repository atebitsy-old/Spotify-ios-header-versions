//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBAutoEquatable.h"

#import "HUBComponentModel-Protocol.h"

@class HUBIdentifier, NSArray, NSDictionary, NSString;
@protocol HUBComponentImageData, HUBComponentModel, HUBComponentTarget, HUBIcon;

@interface HUBComponentModelImplementation : HUBAutoEquatable <HUBComponentModel>
{
    NSString *_identifier;
    unsigned long long _type;
    unsigned long long _index;
    NSString *_groupIdentifier;
    HUBIdentifier *_componentIdentifier;
    NSString *_componentCategory;
    NSString *_title;
    NSString *_subtitle;
    NSString *_accessoryTitle;
    NSString *_descriptionText;
    id <HUBComponentImageData> _mainImageData;
    id <HUBComponentImageData> _backgroundImageData;
    NSDictionary *_customImageData;
    id <HUBIcon> _icon;
    id <HUBComponentTarget> _target;
    NSDictionary *_events;
    NSDictionary *_metadata;
    NSDictionary *_loggingData;
    NSDictionary *_customData;
    id <HUBComponentModel> _parent;
    NSArray *_children;
    NSDictionary *_childIdentifierToIndexMap;
    NSDictionary *_childrenByGroupIdentifier;
}

+ (id)ignoredAutoEquatablePropertyNames;
@property(copy, nonatomic) NSDictionary *childrenByGroupIdentifier; // @synthesize childrenByGroupIdentifier=_childrenByGroupIdentifier;
@property(copy, nonatomic) NSDictionary *childIdentifierToIndexMap; // @synthesize childIdentifierToIndexMap=_childIdentifierToIndexMap;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) __weak id <HUBComponentModel> parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(readonly, copy, nonatomic) NSDictionary *loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSDictionary *events; // @synthesize events=_events;
@property(readonly, nonatomic) id <HUBComponentTarget> target; // @synthesize target=_target;
@property(readonly, nonatomic) id <HUBIcon> icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSDictionary *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) id <HUBComponentImageData> backgroundImageData; // @synthesize backgroundImageData=_backgroundImageData;
@property(readonly, nonatomic) id <HUBComponentImageData> mainImageData; // @synthesize mainImageData=_mainImageData;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *accessoryTitle; // @synthesize accessoryTitle=_accessoryTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *componentCategory; // @synthesize componentCategory=_componentCategory;
@property(readonly, copy, nonatomic) HUBIdentifier *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)serializedChildren;
- (id)serializedEvents;
- (id)serializedImageData;
- (id)serializedTextData;
- (id)serializedComponentData;
- (id)childrenInGroupWithIdentifier:(id)arg1;
- (id)childWithIdentifier:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)serialize;
@property(readonly, copy) NSString *debugDescription;
- (id)valueForKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 groupIdentifier:(id)arg4 componentIdentifier:(id)arg5 componentCategory:(id)arg6 title:(id)arg7 subtitle:(id)arg8 accessoryTitle:(id)arg9 descriptionText:(id)arg10 mainImageData:(id)arg11 backgroundImageData:(id)arg12 customImageData:(id)arg13 icon:(id)arg14 target:(id)arg15 events:(id)arg16 metadata:(id)arg17 loggingData:(id)arg18 customData:(id)arg19 parent:(id)arg20;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

