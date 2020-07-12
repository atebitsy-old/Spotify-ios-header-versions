//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSMutableArray, SPTFreeTierArtistOfflineModel;
@protocol HUBContentOperationDelegate, SPTFreeTierArtistTestManager;

@interface SPTFreeTierArtistOfflineRenderContentOperation : NSObject <HUBContentOperation>
{
    _Bool _finishedRequest;
    id <HUBContentOperationDelegate> delegate;
    SPTFreeTierArtistOfflineModel *_offlineModel;
    id <SPTFreeTierArtistTestManager> _testManager;
    NSMutableArray *_contextTracks;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool finishedRequest; // @synthesize finishedRequest=_finishedRequest;
@property(retain, nonatomic) NSMutableArray *contextTracks; // @synthesize contextTracks=_contextTracks;
@property(retain, nonatomic) id <SPTFreeTierArtistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierArtistOfflineModel *offlineModel; // @synthesize offlineModel=_offlineModel;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void)createAlbumsSection:(id)arg1;
- (void)createLikedSongsSection:(id)arg1;
- (id)createPlayer;
- (void)createPlayButton:(id)arg1;
- (void)createHeader:(id)arg1;
- (void)createErrorMessage:(id)arg1;
- (void)createOfflineArtistView:(id)arg1;
- (void)fetchArtistData:(id)arg1 previousError:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithArtistOfflineModel:(id)arg1 testManager:(id)arg2;

@end

