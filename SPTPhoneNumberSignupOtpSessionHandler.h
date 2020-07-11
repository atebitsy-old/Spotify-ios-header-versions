//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;
@protocol SPTPhoneNumberSignupOtpSessionHandlerDelegate;

@interface SPTPhoneNumberSignupOtpSessionHandler : NSObject
{
    id <SPTPhoneNumberSignupOtpSessionHandlerDelegate> _delegate;
    NSDate *_startTime;
    NSTimer *_timeoutSchedulerTimer;
}

@property(retain, nonatomic) NSTimer *timeoutSchedulerTimer; // @synthesize timeoutSchedulerTimer=_timeoutSchedulerTimer;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <SPTPhoneNumberSignupOtpSessionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCurrentOtpSessionWithTimeToLiveSeconds:(double)arg1;
- (void)resetCurrentSession;
- (_Bool)canResendSMS;
- (void)didSessionTimeout;
- (id)provideTimeoutSchedulerWithTimeToLive:(double)arg1;
- (void)initializeSessionWithTimeToLiveSeconds:(double)arg1;
- (id)initWithTimeToLiveSeconds:(double)arg1;

@end

