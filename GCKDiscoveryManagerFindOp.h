//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface GCKDiscoveryManagerFindOp : NSObject
{
    NSString *_deviceUniqueID;
    CDUnknownBlockType _completion;
    NSTimer *_timer;
    CDUnknownBlockType _cleanup;
}

- (void).cxx_destruct;
- (void)completeWithDevice:(id)arg1;
- (void)cancel;
- (void)completeIfMatchesDevice:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)initWithUniqueID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3 cleanup:(CDUnknownBlockType)arg4;

@end

