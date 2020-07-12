//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningSessionModelEntity-Protocol.h"

@class NSArray, NSString, NSURL, UIColor, UIImage;

@interface SPTSocialListeningSession : NSObject <SPTSocialListeningSessionModelEntity>
{
    _Bool _sessionHost;
    NSArray *_connectedUsers;
    UIImage *_scannablesImage;
    NSString *_sessionID;
    NSString *_accessToken;
    NSURL *_joinSessionURL;
    UIColor *_sessionColor;
    NSString *_sessionOwnerID;
    double _lastUpdateTimestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property(readonly, copy, nonatomic) NSString *sessionOwnerID; // @synthesize sessionOwnerID=_sessionOwnerID;
@property(retain, nonatomic) UIColor *sessionColor; // @synthesize sessionColor=_sessionColor;
@property(readonly, nonatomic) NSURL *joinSessionURL; // @synthesize joinSessionURL=_joinSessionURL;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) UIImage *scannablesImage; // @synthesize scannablesImage=_scannablesImage;
@property(readonly, nonatomic) NSArray *connectedUsers; // @synthesize connectedUsers=_connectedUsers;
@property(readonly, nonatomic, getter=isSessionHost) _Bool sessionHost; // @synthesize sessionHost=_sessionHost;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSession:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 currentUserData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

