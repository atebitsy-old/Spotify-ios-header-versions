//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession;

@interface SPTVoiceAudioRouteDetector : NSObject
{
    AVAudioSession *_audioSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (id)stringFromInputDataSourceOrientation:(id)arg1;
- (id)stringFromAudioRouteIOPortType:(id)arg1;
- (id)stringFromAudioRouteInputPortType:(id)arg1;
- (id)getInputPort;
- (id)getSelectedInputPortOrientation;
- (id)getSelectedInputPortType;
- (id)initWithAudioSession:(id)arg1;

@end

