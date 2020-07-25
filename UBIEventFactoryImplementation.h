//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UBIEventFactory-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface UBIEventFactoryImplementation : NSObject <UBIEventFactory>
{
    NSDictionary *_interactionTypesMap;
    NSURL *_pageURI;
    NSString *_pageId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSDictionary *interactionTypesMap; // @synthesize interactionTypesMap=_interactionTypesMap;
- (id)impressionFromLocation:(id)arg1;
- (id)interactionFactoryFromLocation:(id)arg1;
- (id)initWithInteractionTypesMap:(id)arg1 pageURI:(id)arg2 pageId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
