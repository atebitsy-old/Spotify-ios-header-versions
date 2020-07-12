//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFileLogger-Protocol.h"

@class NSString, NSURL;
@protocol OS_dispatch_io;

@interface SPTFileLoggerImplementation : NSObject <SPTFileLogger>
{
    // Error parsing type: AQ, name: _counter
    NSObject<OS_dispatch_io> *_fileSource;
    NSURL *_logFilePathURL;
}

+ (id)defaultLogPathURL;
+ (id)applicationLogsDirectory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *logFilePathURL; // @synthesize logFilePathURL=_logFilePathURL;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *fileSource; // @synthesize fileSource=_fileSource;
- (void)writeToFileContentOfBuffer:(const char *)arg1 length:(int)arg2;
- (id)logsList;
- (id)currentLogFilePath;
- (_Bool)startLogging;
- (id)initWithDefaultLogPathURL;
- (id)initWithLogPathURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

