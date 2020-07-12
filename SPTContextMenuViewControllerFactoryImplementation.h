//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuViewControllerFactory-Protocol.h"

@class NSNotificationCenter, NSString, NSURL, SPTTheme;
@protocol SPTContextMenuActionsProvider, SPTGLUEImageLoaderFactory, SPTImageLoaderFactory, SPTModalPresentationController, SPTPlayer, SPTScannablesUserInterfaceFactory;

@interface SPTContextMenuViewControllerFactoryImplementation : NSObject <SPTContextMenuViewControllerFactory>
{
    NSURL *_viewURI;
    id <SPTContextMenuActionsProvider> _actionsProvider;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTGLUEImageLoaderFactory> _glueImageLoaderFactory;
    id <SPTScannablesUserInterfaceFactory> _scannablesUserInterfaceFactory;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTPlayer> _player;
    SPTTheme *_theme;
    NSNotificationCenter *_notificationCenter;
}

+ (id)contextMenuViewControllerFactoryWithViewURI:(id)arg1 actionsProvider:(id)arg2 imageLoaderFactory:(id)arg3 glueImageLoaderFactory:(id)arg4 scannablesUserInterfaceFactory:(id)arg5 modalPresentationController:(id)arg6 player:(id)arg7 theme:(id)arg8 notificationCenter:(id)arg9;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTScannablesUserInterfaceFactory> scannablesUserInterfaceFactory; // @synthesize scannablesUserInterfaceFactory=_scannablesUserInterfaceFactory;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> glueImageLoaderFactory; // @synthesize glueImageLoaderFactory=_glueImageLoaderFactory;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> actionsProvider; // @synthesize actionsProvider=_actionsProvider;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (void).cxx_destruct;
- (id)createContextMenuHeaderWithPlaceholderImage:(id)arg1 imageStyle:(long long)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 entityURL:(id)arg6 imageURL:(id)arg7 options:(id)arg8;
- (id)provideContextMenuViewControllerWithHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 options:(id)arg4;
- (id)provideContextMenuViewControllerWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 imageStyle:(long long)arg3 title:(id)arg4 subtitle:(id)arg5 metadataTitle:(id)arg6 tasks:(id)arg7 entityURL:(id)arg8 options:(id)arg9;
- (id)provideContextMenuViewControllerWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 imageStyle:(long long)arg3 title:(id)arg4 subtitle:(id)arg5 metadataTitle:(id)arg6 actions:(id)arg7 entityURL:(id)arg8 options:(id)arg9;
- (id)contextMenuViewControllerForTrackWithURL:(id)arg1 name:(id)arg2 metadata:(id)arg3 playable:(_Bool)arg4 imageURL:(id)arg5 artists:(id)arg6 albumName:(id)arg7 albumURL:(id)arg8 viewURL:(id)arg9 contextSourceURL:(id)arg10 metadataTitle:(id)arg11 logContext:(id)arg12 options:(id)arg13 extraTasks:(id)arg14;
- (id)provideIPadContextMenuViewControllerWithHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 options:(id)arg4;
- (id)provideIPadContextMenuViewControllerWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 actions:(id)arg6 entityURL:(id)arg7 trackURL:(id)arg8 headerSubtitleStyle:(long long)arg9 senderView:(id)arg10 options:(id)arg11;
- (id)provideIPadContextMenuViewControllerWithHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 title:(id)arg3 subtitle:(id)arg4 metadataTitle:(id)arg5 tasks:(id)arg6 entityURL:(id)arg7 trackURL:(id)arg8 headerSubtitleStyle:(long long)arg9 senderView:(id)arg10 options:(id)arg11;
- (id)contextMenuViewControllerIPadForTrackWithURL:(id)arg1 name:(id)arg2 metadata:(id)arg3 playable:(_Bool)arg4 imageURL:(id)arg5 artists:(id)arg6 albumName:(id)arg7 albumURL:(id)arg8 viewURL:(id)arg9 contextSourceURL:(id)arg10 senderView:(id)arg11 metadataTitle:(id)arg12 logContext:(id)arg13 options:(id)arg14;
- (id)initWithViewURI:(id)arg1 actionsProvider:(id)arg2 imageLoaderFactory:(id)arg3 glueImageLoaderFactory:(id)arg4 scannablesUserInterfaceFactory:(id)arg5 modalPressentationController:(id)arg6 player:(id)arg7 theme:(id)arg8 notificationCenter:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

