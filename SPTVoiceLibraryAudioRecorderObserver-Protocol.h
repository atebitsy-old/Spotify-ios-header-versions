//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError;
@protocol SPTVoiceLibraryAudioRecorder;

@protocol SPTVoiceLibraryAudioRecorderObserver <NSObject>
- (void)audioRecorderDidStartRecording:(id <SPTVoiceLibraryAudioRecorder>)arg1;
- (void)audioRecorder:(id <SPTVoiceLibraryAudioRecorder>)arg1 didFailWithError:(NSError *)arg2;
- (void)audioRecorder:(id <SPTVoiceLibraryAudioRecorder>)arg1 didRecordAudioChunk:(NSData *)arg2;
- (void)audioRecorder:(id <SPTVoiceLibraryAudioRecorder>)arg1 didRecordAudioChunk:(short **)arg2 ofSize:(unsigned int)arg3;

@optional
- (void)audioRecorder:(id <SPTVoiceLibraryAudioRecorder>)arg1 didChangeMeanAudioLevel:(float)arg2 rmsAudioLevel:(float)arg3 cdfScaledLevel:(float)arg4;
@end

