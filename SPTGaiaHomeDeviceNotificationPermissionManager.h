//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UNUserNotificationCenter;

@interface SPTGaiaHomeDeviceNotificationPermissionManager : NSObject
{
    UNUserNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)userHasPushNotificationsEnabled:(CDUnknownBlockType)arg1;
- (id)initWithNotificationCenter:(id)arg1;

@end

