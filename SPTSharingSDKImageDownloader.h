//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTSharingSDKNetworkService;

@interface SPTSharingSDKImageDownloader : NSObject
{
    id <SPTSharingSDKNetworkService> _networkService;
}

@property(readonly, nonatomic) __weak id <SPTSharingSDKNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (void)downloadImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNetworkService:(id)arg1;

@end

