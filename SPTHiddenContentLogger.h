//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileHiddenContentEventFactory, SPTViewLogger;

@interface SPTHiddenContentLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobileHiddenContentEventFactory> _eventFactory;
    NSURL *_pageURL;
}

@property(retain, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(retain, nonatomic) id <SPTUBIMobileHiddenContentEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logArtistContextMenuSelectedAtIndex:(unsigned long long)arg1 artistURI:(id)arg2;
- (void)logTrackContextMenuSelectedAtIndex:(unsigned long long)arg1 trackURI:(id)arg2;
- (void)logTrackPreviewTappedAtIndex:(unsigned long long)arg1 trackURI:(id)arg2 startPlaying:(_Bool)arg3;
- (void)logTrackSelectedAtIndex:(unsigned long long)arg1 trackURI:(id)arg2 startPlaying:(_Bool)arg3;
- (void)logArtistSelectedAtIndex:(unsigned long long)arg1 artistURI:(id)arg2;
- (void)logTabControlChangedToArtists:(_Bool)arg1;
- (void)logItemListImpressionForArists:(_Bool)arg1;
- (void)logViewDidFailToLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2 eventFactory:(id)arg3 ubiLogger:(id)arg4;

@end
