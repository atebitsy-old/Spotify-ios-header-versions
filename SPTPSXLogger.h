//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter, SPTViewLogger;

@interface SPTPSXLogger : NSObject
{
    NSString *_setURIString;
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, copy, nonatomic) NSString *setURIString; // @synthesize setURIString=_setURIString;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDataDidFailToLoadWithPageIdentifier:(id)arg1;
- (void)logViewDataDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (double)timeIntervalSinceEpoch;
- (void)logOfflineButtonInteractionWithnewOfflineStatus:(_Bool)arg1;
- (void)logFollowButtonInteractionWithNewFollowStatus:(_Bool)arg1;
- (void)logContextMenuInteraction;
- (void)logShufflePlayInteraction;
- (void)logTrackContextMenuInteractionForTrackURI:(id)arg1 index:(long long)arg2;
- (void)logTrackInteractionForTrackURI:(id)arg1 index:(long long)arg2;
- (void)logTrackImpressionForTrackURI:(id)arg1 index:(long long)arg2;
- (id)initWithLogCenter:(id)arg1 setURI:(id)arg2 viewLogger:(id)arg3;

@end

