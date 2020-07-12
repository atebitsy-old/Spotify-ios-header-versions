//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTMobileHomeEventFactoryProvider;
@protocol SPTLogCenter, SPTUBILogger;

@interface SPTHomeUILogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBILogger> _ubiLogger;
    SPTMobileHomeEventFactoryProvider *_mobileHomeEventFactoryProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTMobileHomeEventFactoryProvider *mobileHomeEventFactoryProvider; // @synthesize mobileHomeEventFactoryProvider=_mobileHomeEventFactoryProvider;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (id)trackURIInModel:(id)arg1;
- (void)logDidChangePlayerStateInPromoV2Component:(unsigned long long)arg1 forTrackWithModel:(id)arg2 loggingData:(id)arg3;
- (void)logDidResumeTrackInPromoV2ComponentWithModel:(id)arg1 loggingData:(id)arg2;
- (void)logDidPauseTrackInPromoV2ComponentWithModel:(id)arg1 loggingData:(id)arg2;
- (void)logDidPlayTrackInPromoV2ComponentWithModel:(id)arg1 loggingData:(id)arg2;
- (id)initWithLogCenter:(id)arg1 ubiLogger:(id)arg2 mobileHomeEventFactoryProvider:(id)arg3;
- (id)initWithLogCenter:(id)arg1 ubiLogger:(id)arg2;

@end

