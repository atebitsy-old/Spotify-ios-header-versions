//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTSharingSDKNetworkService;

@interface SPTSharingSDK : NSObject
{
    id <SPTSharingSDKNetworkService> _networkService;
}

+ (id)makeGenerateShareableURLRequestWithPayload:(id)arg1;
+ (id)makeGenerateShareableURLRequestHTTPBodyFromPayload:(id)arg1;
+ (id)makeGenerateShareableURLRequestURL;
+ (id)makeErrorFromErrorResponse:(id)arg1;
+ (id)makeErrorWithCode:(long long)arg1 message:(id)arg2;
@property(retain, nonatomic) id <SPTSharingSDKNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (void)generateShareableURLWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithNetworkService:(id)arg1;

@end

