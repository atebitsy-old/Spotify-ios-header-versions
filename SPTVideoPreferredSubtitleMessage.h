//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoPreferredSubtitleMessage : SPTVideoPlayerMessage
{
    _Bool _isClosedCaption;
    NSString *_languageTag;
}

@property(readonly, nonatomic) _Bool isClosedCaption; // @synthesize isClosedCaption=_isClosedCaption;
@property(readonly, copy, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (void).cxx_destruct;
- (id)serializedDictionary;
- (id)initWithLanguageTag:(id)arg1 isClosedCaption:(_Bool)arg2;

@end

