//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRComponentContainer, FIROptions, NSString;

@interface FIRApp : NSObject
{
    _Bool _isDefaultApp;
    FIROptions *_options;
    NSString *_name;
    FIRComponentContainer *_container;
}

+ (id)readDataCollectionSwitchFromPlist;
+ (id)readDataCollectionSwitchFromUserDefaultsForApp:(id)arg1;
+ (_Bool)validateAppIDFingerprint:(id)arg1 withVersion:(id)arg2;
+ (_Bool)validateAppIDFormat:(id)arg1 withVersion:(id)arg2;
+ (id)actualBundleID;
+ (_Bool)validateAppID:(id)arg1;
+ (id)applePlatform;
+ (_Bool)hasSwiftRuntime;
+ (id)firebaseUserAgent;
+ (void)registerInternalLibrary:(Class)arg1 withName:(id)arg2 withVersion:(id)arg3;
+ (void)registerLibrary:(id)arg1 withVersion:(id)arg2;
+ (_Bool)isDefaultAppConfigured;
+ (id)errorForInvalidAppID;
+ (id)errorForSubspecConfigurationFailureWithDomain:(id)arg1 errorCode:(long long)arg2 service:(id)arg3 reason:(id)arg4;
+ (id)errorForMissingOptions;
+ (void)sendNotificationsToSDKs:(id)arg1;
+ (void)addAppToAppDictionary:(id)arg1;
+ (void)resetApps;
+ (id)allApps;
+ (id)appNamed:(id)arg1;
+ (id)defaultApp;
+ (void)appWasConfiguredTwice:(id)arg1 usingOptions:(id)arg2;
+ (void)configureWithName:(id)arg1 options:(id)arg2;
+ (id)applicationNameAllowedCharacters;
+ (void)configureWithOptions:(id)arg1;
+ (void)configure;
- (void).cxx_destruct;
@property(retain, nonatomic) FIRComponentContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) _Bool isDefaultApp; // @synthesize isDefaultApp=_isDefaultApp;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)logCoreTelemetryIfEnabled;
- (void)appDidBecomeActive:(id)arg1;
- (void)subscribeForAppDidBecomeActiveNotifications;
- (void)sendLogsWithServiceName:(id)arg1 version:(id)arg2 error:(id)arg3;
- (void)clearDataCollectionSwitchFromUserDefaults;
- (id)expectedBundleID;
- (_Bool)isAppIDValid;
- (void)checkExpectedBundleID;
@property(nonatomic, getter=isDataCollectionDefaultEnabled) _Bool dataCollectionDefaultEnabled;
@property(readonly, copy, nonatomic) FIROptions *options; // @synthesize options=_options;
- (_Bool)configureCore;
- (void)dealloc;
- (id)initInstanceWithName:(id)arg1 options:(id)arg2;
- (void)deleteApp:(CDUnknownBlockType)arg1;

@end

