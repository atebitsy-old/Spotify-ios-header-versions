//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAudioSessionControllerImpl;

@interface SPTAudioSessionActivator : NSObject
{
    SPTAudioSessionControllerImpl *_audioSessionController;
}

@property(nonatomic) __weak SPTAudioSessionControllerImpl *audioSessionController; // @synthesize audioSessionController=_audioSessionController;
- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (id)initWithAudioSessionController:(id)arg1;

@end

