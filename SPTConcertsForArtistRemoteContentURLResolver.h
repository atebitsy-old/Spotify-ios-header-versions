//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubRemoteContentOperationURLResolver-Protocol.h"

@class NSString, SPTConcertsLocalDataManager;

@interface SPTConcertsForArtistRemoteContentURLResolver : NSObject <SPTHubRemoteContentOperationURLResolver>
{
    NSString *_artistIdentifier;
    SPTConcertsLocalDataManager *_localDataManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTConcertsLocalDataManager *localDataManager; // @synthesize localDataManager=_localDataManager;
@property(readonly, copy, nonatomic) NSString *artistIdentifier; // @synthesize artistIdentifier=_artistIdentifier;
- (id)resolveContentURL;
- (id)initWithArtistIdentifier:(id)arg1 localDataManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

