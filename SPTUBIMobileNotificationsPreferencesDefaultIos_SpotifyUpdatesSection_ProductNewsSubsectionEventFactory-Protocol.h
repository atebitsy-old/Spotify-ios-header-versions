//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_ProductNewsSubsection_EmailNotificationEventFactory, SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_ProductNewsSubsection_PushNotificationEventFactory;

@protocol SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_ProductNewsSubsectionEventFactory <NSObject>
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_ProductNewsSubsection_EmailNotificationEventFactory>)emailNotificationFactory;
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_SpotifyUpdatesSection_ProductNewsSubsection_PushNotificationEventFactory>)pushNotificationFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
