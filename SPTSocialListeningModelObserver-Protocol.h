//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, NSURL;
@protocol SPTSocialListeningModel, SPTSocialListeningSessionModelEntity, SPTSocialListeningSocialDeviceModelEntity, SPTSocialListeningUpdateEventModelEntity;

@protocol SPTSocialListeningModelObserver <NSObject>
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 didDeleteSession:(id <SPTSocialListeningSessionModelEntity>)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 didReceiveError:(NSError *)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 updatedSession:(id <SPTSocialListeningSessionModelEntity>)arg2 updateEvent:(id <SPTSocialListeningUpdateEventModelEntity>)arg3;

@optional
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 gotExposedDevices:(NSDictionary *)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 updatedSocialDevices:(NSArray<SPTSocialListeningSocialDeviceModelEntity> *)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 didLookupURL:(NSURL *)arg2 name:(NSString *)arg3;
@end

