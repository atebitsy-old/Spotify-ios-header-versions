//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, SPTPlayerState;

@interface SPTInfinitePlaybackContext : NSObject
{
    NSURL *_URI;
    SPTPlayerState *_initiatingState;
}

@property(readonly, nonatomic) SPTPlayerState *initiatingState; // @synthesize initiatingState=_initiatingState;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)initWithURI:(id)arg1 initiatingState:(id)arg2;

@end

