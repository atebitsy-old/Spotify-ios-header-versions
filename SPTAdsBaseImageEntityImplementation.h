//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTAdsBaseEntityImplementation.h"

#import "SPTAdsBaseImageEntity-Protocol.h"

@class NSDictionary, NSString, NSURL, UIColor;
@protocol SPTAdsBaseFeaturedAction, SPTAdsBaseReward, SPTAdsBaseVoiceModel;

@interface SPTAdsBaseImageEntityImplementation : SPTAdsBaseEntityImplementation <SPTAdsBaseImageEntity>
{
    _Bool _isAudioPlusBanner;
    NSURL *_imageURL;
    NSString *_displayReason;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAudioPlusBanner; // @synthesize isAudioPlusBanner=_isAudioPlusBanner;
@property(readonly, nonatomic) NSString *displayReason; // @synthesize displayReason=_displayReason;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)imageMetadata:(id)arg1;
- (id)parseDisplayReason:(id)arg1;
- (id)parseImageURL:(id)arg1;
- (struct CGSize)parseImageSize:(id)arg1;
- (id)initWithMetadata:(id)arg1 slot:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *actionText;
@property(readonly, copy, nonatomic) NSString *adPlaybackID;
@property(readonly, copy, nonatomic) NSString *advertiser;
@property(readonly, nonatomic) NSURL *clickthroughURL;
@property(readonly, nonatomic) NSURL *coverArtURL;
@property(readonly, nonatomic) UIColor *creativeColor;
@property(readonly, copy, nonatomic) NSString *creativeID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *dependentSlot;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDummy) _Bool dummy;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) id <SPTAdsBaseFeaturedAction> featuredAction;
@property(readonly, copy, nonatomic) NSString *format;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool inAppBrowser;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, copy, nonatomic) NSString *lineItemID;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, copy, nonatomic) NSString *offerSubtitle;
@property(readonly, copy, nonatomic) NSString *offerTitle;
@property(readonly, copy, nonatomic) NSString *orderID;
@property(readonly, nonatomic, getter=isPhysicalButtonsSupported) _Bool physicalButtonsSupported;
@property(readonly, nonatomic, getter=isPreview) _Bool preview;
@property(readonly, nonatomic) long long product;
@property(readonly, nonatomic) id <SPTAdsBaseReward> reward;
@property(readonly, nonatomic) unsigned long long skipDelaySecs;
@property(readonly, nonatomic, getter=isSkippable) _Bool skippable;
@property(readonly, copy, nonatomic) NSString *slot;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) id <SPTAdsBaseVoiceModel> voice;

@end

