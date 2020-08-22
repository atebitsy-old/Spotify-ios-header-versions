//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSURLRequest;

@protocol BNCNetworkOperationProtocol <NSObject>
@property(retain) NSDictionary *userInfo;
@property(readonly, copy) NSDate *timeoutDate;
@property(readonly, copy) NSDate *startDate;
@property(readonly, copy) NSError *error;
@property(readonly) NSData *responseData;
@property(readonly, copy) NSHTTPURLResponse *response;
@property(readonly, copy) NSURLRequest *request;
- (void)start;

@optional
- (void)cancel;
@end

