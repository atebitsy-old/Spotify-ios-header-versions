//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SPTFreeTierTasteOnboardingLogging : NSObject <NSCopying>
{
    NSString *_section;
    NSString *_contentSource;
    NSString *_contentSourceUri;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contentSourceUri; // @synthesize contentSourceUri=_contentSourceUri;
@property(readonly, copy, nonatomic) NSString *contentSource; // @synthesize contentSource=_contentSource;
@property(readonly, copy, nonatomic) NSString *section; // @synthesize section=_section;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSection:(id)arg1 contentSource:(id)arg2 contentSourceUri:(id)arg3;

@end

