//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSDictionary, NSString;

@interface SPTAdVoiceCommandAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_audioPlayer;
    NSDictionary *_responsePlayers;
    CDUnknownBlockType _completion;
}

+ (id)soundsBundle;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSDictionary *responsePlayers; // @synthesize responsePlayers=_responsePlayers;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void)playAudioResponseWithPlayer:(id)arg1;
- (id)newPlayerNamed:(id)arg1;
- (id)audioResponsePlayers;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playAudioResponse:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

