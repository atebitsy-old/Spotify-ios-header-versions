//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaSilentAudioPlayerProvider-Protocol.h"

@class NSString;
@protocol SPTGaiaSilentAudioPlayer;

@interface SPTGaiaSilentAudioPlayerProviderDefaultImplementation : NSObject <SPTGaiaSilentAudioPlayerProvider>
{
    id <SPTGaiaSilentAudioPlayer> _silentAudioPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTGaiaSilentAudioPlayer> silentAudioPlayer; // @synthesize silentAudioPlayer=_silentAudioPlayer;
- (id)silentAudioSession;
- (id)newSilentAudioPlayer;
- (id)provideSilentAudioPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

