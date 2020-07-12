//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareHandler-Protocol.h"

@class NSString, SPTShareLogger;

@interface SPTShareFacebookMessengerShareHandler : NSObject <SPTShareHandler>
{
    NSString *_utmSource;
    NSString *_utmMedium;
    NSString *_utmCampaign;
    NSString *_utmContent;
    NSString *_utmTerm;
    SPTShareLogger *_shareLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(readonly, nonatomic) NSString *utmTerm; // @synthesize utmTerm=_utmTerm;
@property(readonly, nonatomic) NSString *utmContent; // @synthesize utmContent=_utmContent;
@property(readonly, nonatomic) NSString *utmCampaign; // @synthesize utmCampaign=_utmCampaign;
@property(readonly, nonatomic) NSString *utmMedium; // @synthesize utmMedium=_utmMedium;
@property(readonly, copy, nonatomic) NSString *utmSource; // @synthesize utmSource=_utmSource;
- (id)provideShareAlertModelForError:(id)arg1;
- (void)shareWithData:(id)arg1 shareDestination:(id)arg2 sharePresenter:(id)arg3 deeplinkHandler:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithShareLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

