//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextAwareURITypeManager-Protocol.h"

@class NSString;
@protocol SPTPodcastEntityDataLoader;

@interface SPTPodcastContextAwareURITypeManager : NSObject <SPTContextAwareURITypeManager>
{
    id <SPTPodcastEntityDataLoader> _entityDataLoader;
    CDUnknownBlockType _contextAwareURIBlock;
}

@property(copy, nonatomic) CDUnknownBlockType contextAwareURIBlock; // @synthesize contextAwareURIBlock=_contextAwareURIBlock;
@property(retain, nonatomic) id <SPTPodcastEntityDataLoader> entityDataLoader; // @synthesize entityDataLoader=_entityDataLoader;
- (void).cxx_destruct;
- (void)resolveDefaultContextForURI:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)lookupShowURI:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)typeManagerRecognizesURI:(id)arg1;
- (id)initWithEntityDataLoader:(id)arg1 contextAwareURIBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

