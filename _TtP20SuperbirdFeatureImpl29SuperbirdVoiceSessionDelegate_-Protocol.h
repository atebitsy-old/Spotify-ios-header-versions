//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSError, NSString;

@protocol _TtP20SuperbirdFeatureImpl29SuperbirdVoiceSessionDelegate_
- (void)voiceSessionDidUpdateIntermediateTranscriptWithTranscript:(NSString *)arg1 isFinal:(_Bool)arg2 isEndOfSpeech:(_Bool)arg3 sessionId:(NSString *)arg4 utteranceId:(NSString *)arg5;
- (void)voiceSessionDidFailWithError:(NSError *)arg1 sessionId:(NSString *)arg2 utteranceId:(NSString *)arg3;
- (void)voiceSessionDidReceiveFinalResponseWithResponse:(NSDictionary *)arg1 sessionId:(NSString *)arg2 utteranceId:(NSString *)arg3;
@end

