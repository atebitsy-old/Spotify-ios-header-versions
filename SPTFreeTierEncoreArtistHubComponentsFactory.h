//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTTrackRowArtistFactory;

@interface SPTFreeTierEncoreArtistHubComponentsFactory : NSObject
{
    id <SPTTrackRowArtistFactory> _encoreComponentFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTTrackRowArtistFactory> encoreComponentFactory; // @synthesize encoreComponentFactory=_encoreComponentFactory;
- (id)createComponentsWithBaseTheme:(id)arg1;
- (id)initWithArtistEncoreComponentFactory:(id)arg1;

@end

