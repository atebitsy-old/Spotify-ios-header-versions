//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, SPTObserverManager;

@interface SPTGaiaLocalNetworkPermissionManager : NSObject
{
    NSUserDefaults *_userDefaults;
    SPTObserverManager *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)askForLocalNetworkPermission;
@property(readonly, nonatomic) _Bool canAccessLocalNetwork;
- (id)initWithUserDefaults:(id)arg1;

@end

