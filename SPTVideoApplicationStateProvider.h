//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;

@interface SPTVideoApplicationStateProvider : NSObject
{
    long long _state;
    UIApplication *_application;
}

@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)initWithApplication:(id)arg1;
- (id)init;

@end

