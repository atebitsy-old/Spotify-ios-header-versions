//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SPTArtistSocialLink : NSObject
{
    NSURL *_twitter;
    NSURL *_facebook;
    NSURL *_instagram;
    NSURL *_wikipedia;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *wikipedia; // @synthesize wikipedia=_wikipedia;
@property(retain, nonatomic) NSURL *instagram; // @synthesize instagram=_instagram;
@property(retain, nonatomic) NSURL *facebook; // @synthesize facebook=_facebook;
@property(retain, nonatomic) NSURL *twitter; // @synthesize twitter=_twitter;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasFacebook;
- (_Bool)hasInstagram;
- (_Bool)hasTwitter;
- (_Bool)hasWikipedia;
- (id)urlForSocialLinkType:(unsigned long long)arg1;
- (id)initWithLinks:(id)arg1;

@end

