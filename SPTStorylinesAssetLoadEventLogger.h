//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTStorylinesLoadEventLogger;

@interface SPTStorylinesAssetLoadEventLogger : NSObject
{
    SPTStorylinesLoadEventLogger *_loadEventLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTStorylinesLoadEventLogger *loadEventLogger; // @synthesize loadEventLogger=_loadEventLogger;
- (void)logAssetLoadEventForType:(long long)arg1 forStorylines:(id)arg2 atCardIndex:(long long)arg3 fromSource:(long long)arg4 withDetails:(id)arg5;
- (void)logImageLoadErrorEventForStorylines:(id)arg1 atCardIndex:(long long)arg2 withDetails:(id)arg3;
- (void)logImageLoadSuccessEventFromSource:(long long)arg1 forStorylines:(id)arg2 atCardIndex:(long long)arg3;
- (void)logImageLoadingEventForStorylines:(id)arg1 atCardIndex:(long long)arg2;
- (id)initWithLoadEventLogger:(id)arg1;

@end

