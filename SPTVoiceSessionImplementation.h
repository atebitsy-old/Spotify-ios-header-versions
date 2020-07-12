//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceDynamicCommandSuggestionsGeneratorDelegate-Protocol.h"
#import "SPTVoiceRecognitionTaskDelegate-Protocol.h"
#import "SPTVoiceSession-Protocol.h"
#import "SPTVoiceSessionInternal-Protocol.h"

@class NSString, SPTObserverManager, SPTVoiceCommand, SPTVoiceDynamicCommandSuggestionsGenerator, SPTVoiceRecognitionTask, SPTVoiceSessionHandlingOptions, SPTVoiceTestManagerImplementation, SPTask;
@protocol SPTPlayer, SPTVoiceAudioSession, SPTVoiceCommandHandler, SPTVoiceRecognitionTaskFactory, SPTVoiceUtteranceIdentifierProvider;

@interface SPTVoiceSessionImplementation : NSObject <SPTVoiceRecognitionTaskDelegate, SPTVoiceDynamicCommandSuggestionsGeneratorDelegate, SPTVoiceSession, SPTVoiceSessionInternal>
{
    _Bool _wasPlayingBeforeSessionStart;
    _Bool _didStartFirstUtterance;
    id <SPTVoiceRecognitionTaskFactory> _voiceRecognitionTaskFactory;
    id <SPTVoiceCommandHandler> _voiceCommandHandler;
    id <SPTPlayer> _player;
    SPTVoiceRecognitionTask *_voiceRecognitionTask;
    SPTask *_voiceCommandHandlingTask;
    SPTVoiceCommand *_mostRecentCommand;
    SPTObserverManager *_observerManager;
    id <SPTVoiceAudioSession> _audioSessionManager;
    id <SPTVoiceUtteranceIdentifierProvider> _utteranceIdProvider;
    NSString *_utteranceIdentifier;
    SPTVoiceDynamicCommandSuggestionsGenerator *_suggestionGenerator;
    SPTVoiceSessionHandlingOptions *_sessionHandlingOptions;
    SPTVoiceTestManagerImplementation *_testManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTVoiceTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTVoiceSessionHandlingOptions *sessionHandlingOptions; // @synthesize sessionHandlingOptions=_sessionHandlingOptions;
@property(retain, nonatomic) SPTVoiceDynamicCommandSuggestionsGenerator *suggestionGenerator; // @synthesize suggestionGenerator=_suggestionGenerator;
@property(retain, nonatomic) NSString *utteranceIdentifier; // @synthesize utteranceIdentifier=_utteranceIdentifier;
@property(retain, nonatomic) id <SPTVoiceUtteranceIdentifierProvider> utteranceIdProvider; // @synthesize utteranceIdProvider=_utteranceIdProvider;
@property(readonly, nonatomic) id <SPTVoiceAudioSession> audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTVoiceCommand *mostRecentCommand; // @synthesize mostRecentCommand=_mostRecentCommand;
@property(nonatomic) _Bool didStartFirstUtterance; // @synthesize didStartFirstUtterance=_didStartFirstUtterance;
@property(nonatomic) _Bool wasPlayingBeforeSessionStart; // @synthesize wasPlayingBeforeSessionStart=_wasPlayingBeforeSessionStart;
@property(retain, nonatomic) SPTask *voiceCommandHandlingTask; // @synthesize voiceCommandHandlingTask=_voiceCommandHandlingTask;
@property(retain, nonatomic) SPTVoiceRecognitionTask *voiceRecognitionTask; // @synthesize voiceRecognitionTask=_voiceRecognitionTask;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceCommandHandler> voiceCommandHandler; // @synthesize voiceCommandHandler=_voiceCommandHandler;
@property(readonly, nonatomic) id <SPTVoiceRecognitionTaskFactory> voiceRecognitionTaskFactory; // @synthesize voiceRecognitionTaskFactory=_voiceRecognitionTaskFactory;
- (void)resumePlaybackIfNeeded;
- (_Bool)shouldResumePlaybackAfterSuccessfulHandlingOfCommand:(id)arg1;
- (void)suggestionDidUpdate:(id)arg1;
- (void)firstUtteranceTimedOut;
- (_Bool)pausePlaybackIfNeeded;
- (void)voiceRecognitionTaskDidSendFirstAudioData:(id)arg1;
- (void)voiceRecognitionTask:(id)arg1 didUpdateMeanAudioLevel:(double)arg2 peakAudioLevel:(double)arg3;
- (void)voiceRecognitionTaskDidReceiveFinalTranscription:(id)arg1;
- (void)voiceRecognitionTaskDidReceiveEndOfSpeech:(id)arg1;
- (void)voiceRecognitionTask:(id)arg1 didUpdateTranscript:(id)arg2;
- (void)voiceRecognitionTask:(id)arg1 didFailWithError:(id)arg2;
- (void)voiceRecognitionTask:(id)arg1 didFinishWithCommand:(id)arg2;
- (void)voiceRecognitionTaskDidStartListening:(id)arg1;
- (id)provideUtteranceId;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (void)stopSession;
- (void)startSession;
- (id)currentUtteranceId;
- (id)initWithVoiceRecognitionTaskFactory:(id)arg1 audioSessionManager:(id)arg2 voiceCommandHandler:(id)arg3 player:(id)arg4 utteranceIdProvider:(id)arg5 initialUtteranceId:(id)arg6 suggestionGenerator:(id)arg7 sessionHandlingOptions:(id)arg8 testManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

