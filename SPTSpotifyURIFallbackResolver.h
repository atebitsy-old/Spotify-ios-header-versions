//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTSpotifyURIFallbackResolver : NSObject
{
    NSArray *_knownURISchemes;
    NSArray *_matchers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *matchers; // @synthesize matchers=_matchers;
@property(readonly, nonatomic) NSArray *knownURISchemes; // @synthesize knownURISchemes=_knownURISchemes;
- (void)parseFallbacks:(id)arg1;
- (id)fallbackURIForURI:(id)arg1;
- (id)initWithFallbackMap:(id)arg1;

@end

