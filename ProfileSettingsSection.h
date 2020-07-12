//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTImageLoaderDelegate-Protocol.h"

@class NSString, SPTSettingsLogger, SPTSettingsTableViewCell, SPTTheme;
@protocol SPTImageLoader, SPTLinkDispatcher, SPTProfileUserData;

@interface ProfileSettingsSection : SettingsSection <SPTImageLoaderDelegate>
{
    _Bool _guestAccount;
    id <SPTProfileUserData> _profileUserData;
    SPTSettingsTableViewCell *_tableViewCell;
    id <SPTImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTTheme *_theme;
    SPTSettingsLogger *_logger;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isGuestAccount) _Bool guestAccount; // @synthesize guestAccount=_guestAccount;
@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak SPTSettingsTableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(readonly, nonatomic) id <SPTProfileUserData> profileUserData; // @synthesize profileUserData=_profileUserData;
- (void)loadProfileImage;
- (void)loadPlaceholderImage;
- (id)croppedAvatarImage:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)didSelectRow:(long long)arg1;
- (double)headerHeight;
- (double)heightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 profileUserData:(id)arg2 imageLoader:(id)arg3 linkDispatcher:(id)arg4 theme:(id)arg5 logger:(id)arg6 guestAccount:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

