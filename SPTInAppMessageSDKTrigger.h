//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTInAppMessageSDKTrigger : NSObject
{
    _Bool _cache;
    NSString *_format;
    NSString *_pattern;
    NSString *_type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool cache; // @synthesize cache=_cache;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
- (id)initWithPattern:(id)arg1 format:(id)arg2 type:(id)arg3 cache:(_Bool)arg4;

@end

