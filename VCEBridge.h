//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, NSURL, NSURLRequest, NSURLSession;

@interface VCEBridge : NSObject
{
    _Bool _ggAcquired;
    _Bool _ggAcquiring;
    NSSet *_whiteListSet;
    NSSet *_blackListSet;
    NSArray *_adViewNamesArray;
    NSString *_ggString;
    NSURL *_url;
    NSURLRequest *_request;
    NSURLSession *_session;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool ggAcquiring; // @synthesize ggAcquiring=_ggAcquiring;
@property(nonatomic) _Bool ggAcquired; // @synthesize ggAcquired=_ggAcquired;
@property(copy, nonatomic) NSString *ggString; // @synthesize ggString=_ggString;
@property(retain, nonatomic) NSArray *adViewNamesArray; // @synthesize adViewNamesArray=_adViewNamesArray;
@property(retain, nonatomic) NSSet *blackListSet; // @synthesize blackListSet=_blackListSet;
@property(retain, nonatomic) NSSet *whiteListSet; // @synthesize whiteListSet=_whiteListSet;
- (void).cxx_destruct;
- (void)disable;
- (void)willResignActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)registerForNotifications;
- (void)executeGGForWKWV:(id)arg1 usingWVID:(id)arg2 withVIDict:(id)arg3 withMetaDict:(id)arg4;
- (void)executeGGForWV:(id)arg1 usingWVID:(id)arg2 withVIDict:(id)arg3 withMetaDict:(id)arg4;
- (id)stringifiedJSONFromDict:(id)arg1;
- (void)passVIDict:(id)arg1 forWKWebView:(id)arg2;
- (void)passVIDict:(id)arg1 forWebView:(id)arg2;
- (void)requestGGScript;
- (id)init;

@end

