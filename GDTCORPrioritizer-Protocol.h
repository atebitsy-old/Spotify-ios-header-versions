//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTCORLifecycleProtocol-Protocol.h"
#import "GDTCORUploadPackageProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class GDTCOREvent, GDTCORUploadPackage;

@protocol GDTCORPrioritizer <NSObject, GDTCORLifecycleProtocol, GDTCORUploadPackageProtocol>
- (GDTCORUploadPackage *)uploadPackageWithTarget:(long long)arg1 conditions:(long long)arg2;
- (void)prioritizeEvent:(GDTCOREvent *)arg1;

@optional
- (void)saveState;
@end

