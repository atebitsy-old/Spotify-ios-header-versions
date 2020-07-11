//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, NSURL, SPTAllocationContext;

@interface SPTFreeTierTasteOnboardingDeeplinkServiceImplementation : NSObject <SPTService>
{
    _Bool _isPaidSocialCampaign;
    NSURL *_deeplinkURI;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool isPaidSocialCampaign; // @synthesize isPaidSocialCampaign=_isPaidSocialCampaign;
@property(retain, nonatomic) NSURL *deeplinkURI; // @synthesize deeplinkURI=_deeplinkURI;
- (void).cxx_destruct;
- (void)didUnloadTasteOnboardingService;
- (void)didLoadTasteOnboardingService;
- (void)didReceiveURIOpenAttemptNotification:(id)arg1;
- (void)removeSpotifyURIObserver;
- (void)addSpotifyURIObserver;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

