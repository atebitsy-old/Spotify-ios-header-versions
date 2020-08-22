//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface BNCApplication : NSObject
{
    NSString *_bundleID;
    NSString *_displayName;
    NSString *_shortDisplayName;
    NSString *_displayVersionString;
    NSString *_versionString;
    NSDate *_currentBuildDate;
    NSDate *_firstInstallBuildDate;
    NSDate *_currentInstallDate;
    NSDate *_firstInstallDate;
    NSString *_teamID;
}

+ (id)firstInstallDate;
+ (id)creationDateForLibraryDirectory;
+ (id)currentInstallDate;
+ (id)firstInstallBuildDate;
+ (id)currentBuildDate;
+ (id)createCurrentApplication;
+ (id)currentApplication;
+ (void)loadCurrentApplicationWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly) NSDate *firstInstallDate; // @synthesize firstInstallDate=_firstInstallDate;
@property(readonly) NSDate *currentInstallDate; // @synthesize currentInstallDate=_currentInstallDate;
@property(readonly) NSDate *firstInstallBuildDate; // @synthesize firstInstallBuildDate=_firstInstallBuildDate;
@property(readonly) NSDate *currentBuildDate; // @synthesize currentBuildDate=_currentBuildDate;
@property(readonly) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly) NSString *displayVersionString; // @synthesize displayVersionString=_displayVersionString;
@property(readonly) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSDictionary *deviceKeyIdentityValueDictionary;
- (void)setAppOriginalInstallDate:(id)arg1 firstInstallDate:(id)arg2 lastUpdateDate:(id)arg3;

@end

