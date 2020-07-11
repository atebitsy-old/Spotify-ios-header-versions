//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, UIView, UIViewController;
@protocol SPTPlaylistDismissableViewController;

@protocol PlaylistFeature <NSObject>
@property(readonly, nonatomic) NSURL *rootlistURL;
- (UIViewController<SPTPlaylistDismissableViewController> *)provideAddToPlaylistViewControllerWithTrackURLs:(NSArray *)arg1 inFolderURL:(NSURL *)arg2 addEntityURL:(NSURL *)arg3 defaultPlaylistName:(NSString *)arg4 logContext:(NSString *)arg5 sourceURL:(NSURL *)arg6 contextSourceURL:(NSURL *)arg7;
- (void)presentAddToPlaylistViewControllerWithTrackURLs:(NSArray *)arg1 addEntityURL:(NSURL *)arg2 defaultPlaylistName:(NSString *)arg3 senderView:(UIView *)arg4 logContext:(NSString *)arg5 sourceURL:(NSURL *)arg6 contextSourceURL:(NSURL *)arg7;
@end

