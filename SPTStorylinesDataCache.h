//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, SPTStorylinesEnabledManager, SPTStorylinesEntityLoadEventLogger, SPTStorylinesPersistentCache;

@interface SPTStorylinesDataCache : NSObject
{
    SPTStorylinesPersistentCache *_persistentCache;
    NSCache *_memoryCache;
    SPTStorylinesEnabledManager *_enabledManager;
    SPTStorylinesEntityLoadEventLogger *_loadEventLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTStorylinesEntityLoadEventLogger *loadEventLogger; // @synthesize loadEventLogger=_loadEventLogger;
@property(readonly, nonatomic) SPTStorylinesEnabledManager *enabledManager; // @synthesize enabledManager=_enabledManager;
@property(readonly, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, nonatomic) SPTStorylinesPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
- (_Bool)validStorylines:(id)arg1 forIdentifier:(id)arg2;
- (void)loadStorylinesDataForEntityUri:(id)arg1 withStorylineId:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)removeCachedStorylines:(id)arg1;
- (void)cacheStorylines:(id)arg1;
- (id)cachedContentKeyForEntityUri:(id)arg1;
- (id)initWithPersistentCache:(id)arg1 enabledManager:(id)arg2 loadEventLogger:(id)arg3;

@end

