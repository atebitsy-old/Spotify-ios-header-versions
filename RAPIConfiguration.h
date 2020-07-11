//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RAPIConfiguration : NSObject
{
    _Bool _logToConsole;
    _Bool _logToCallback;
    _Bool _logToCallbackIncludesTimestamp;
    _Bool _logToFile;
    _Bool _logToNSLogger;
    _Bool _presentLockScreenViewControllerAutomatically;
    _Bool _supportsID5;
    _Bool _releaseBuild;
    _Bool _useDeviceLanguage;
    unsigned long long _logLevel;
    long long _previewMode;
}

@property _Bool useDeviceLanguage; // @synthesize useDeviceLanguage=_useDeviceLanguage;
@property _Bool releaseBuild; // @synthesize releaseBuild=_releaseBuild;
@property long long previewMode; // @synthesize previewMode=_previewMode;
@property _Bool supportsID5; // @synthesize supportsID5=_supportsID5;
@property unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property _Bool presentLockScreenViewControllerAutomatically; // @synthesize presentLockScreenViewControllerAutomatically=_presentLockScreenViewControllerAutomatically;
@property _Bool logToNSLogger; // @synthesize logToNSLogger=_logToNSLogger;
@property _Bool logToFile; // @synthesize logToFile=_logToFile;
@property _Bool logToCallbackIncludesTimestamp; // @synthesize logToCallbackIncludesTimestamp=_logToCallbackIncludesTimestamp;
@property _Bool logToCallback; // @synthesize logToCallback=_logToCallback;
@property _Bool logToConsole; // @synthesize logToConsole=_logToConsole;
- (id)init;

@end

