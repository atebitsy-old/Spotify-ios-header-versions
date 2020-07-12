//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTInAppMessageClickAction : NSObject
{
    NSURL *_trackingURL;
    NSURL *_url;
    NSString *_action;
    long long _type;
}

+ (long long)actionTypeFromIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSURL *trackingURL; // @synthesize trackingURL=_trackingURL;
- (id)initWithTrackingURL:(id)arg1 url:(id)arg2 action:(id)arg3;

@end

