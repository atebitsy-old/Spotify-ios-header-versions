//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, NSURL, NSUserActivity, UIApplication;

@protocol _TtP15BranchIOFeature16SPTBranchHandler_
- (void)setPartnerID:(NSString *)arg1;
- (_Bool)handleContinueUserActivity:(NSUserActivity *)arg1;
- (_Bool)handleApplication:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)handleLaunchOptions:(NSDictionary *)arg1;
@end

