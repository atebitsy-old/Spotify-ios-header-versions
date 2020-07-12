//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileArtistAboutEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileArtistAboutEventFactoryImplementation : NSObject <SPTUBIMobileArtistAboutEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageUri:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)socialFacebookLinkFactory;
- (id)socialInstagramLinkFactory;
- (id)socialTwitterLinkFactory;
- (id)socialWikipediaLinkFactory;
- (id)aboutAutobiographyFactory;
- (id)aboutBiographyFactory;
- (id)galleryFactory;
- (id)_location;
- (id)initWithPageUri:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

