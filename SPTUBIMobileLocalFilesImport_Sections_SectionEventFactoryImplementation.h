//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileLocalFilesImport_Sections_SectionEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileLocalFilesImport_Sections_SectionEventFactoryImplementation : NSObject <SPTUBIMobileLocalFilesImport_Sections_SectionEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 components:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)impression;
- (id)bottomBarFactory;
- (id)itemFactoryWithPosition:(long long)arg1;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

