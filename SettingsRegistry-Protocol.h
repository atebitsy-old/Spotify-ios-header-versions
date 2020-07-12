//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@protocol SettingsRegistry <NSObject>
- (NSDictionary *)settingsSectionForURL:(NSURL *)arg1;
@property(nonatomic, readonly) NSURL *settingsRootURL;
@property(nonatomic, readonly) NSDictionary *settingsStructure;
@property(nonatomic, readonly) NSArray *featureSettingsPages;
- (void)registerTitle:(NSString *)arg1 forURI:(NSURL *)arg2;
- (void)registerSettingsSectionProvider:(id)arg1 withSelector:(SEL)arg2 forURI:(NSString *)arg3;
- (void)registerRootSettingsSectionProvider:(id)arg1 withSelector:(SEL)arg2 forURI:(NSString *)arg3;
- (void)registerRootSettingsURI:(NSString *)arg1 title:(NSString *)arg2 viewControllerClass:(Class)arg3;
@end

