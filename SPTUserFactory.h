//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTUser;
@protocol SPTAsyncScheduler;

@interface SPTUserFactory : NSObject
{
    _Bool _online;
    _Bool _hasUpdatedCurrentUserOnce;
    SPTUser *_currentUser;
    id <SPTAsyncScheduler> _scheduler;
    struct SocialManager *_socialManager;
    NSString *_currentUsername;
}

@property(nonatomic) _Bool hasUpdatedCurrentUserOnce; // @synthesize hasUpdatedCurrentUserOnce=_hasUpdatedCurrentUserOnce;
@property(retain, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) struct SocialManager *socialManager; // @synthesize socialManager=_socialManager;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) SPTUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) _Bool online; // @synthesize online=_online;
- (void).cxx_destruct;
- (id)userWithUsernameInternal:(basic_string_90719d97)arg1;
- (void)internalUserWithUsername:(basic_string_90719d97)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userWithUsername:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userWithLink:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)userWithUsername:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithScheduler:(id)arg1 socialManager:(struct SocialManager *)arg2 currentUsername:(id)arg3;

@end

