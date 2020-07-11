//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistTrackCellConfigurator-Protocol.h"

@class GLUEEntityRowStyle, GLUETrackMultipleAccessoriesViewStyle, NSString, SPTFreeTierPlaylistButtonSectionHeaderViewStyle, SPTFreeTierPlaylistGLUETheme, UIImage;
@protocol GLUEImageLoader, SPTFreeTierPlaylistTrackCellConfiguratorDelegate, SPTFreeTierPlaylistViewModel, SPTShelves;

@interface SPTFreeTierPlaylistDefaultTrackCellConfigurator : NSObject <SPTFreeTierPlaylistTrackCellConfigurator>
{
    id <SPTFreeTierPlaylistTrackCellConfiguratorDelegate> _delegate;
    id <SPTFreeTierPlaylistViewModel> _viewModel;
    SPTFreeTierPlaylistGLUETheme *_theme;
    id <SPTShelves> _shelves;
    GLUEEntityRowStyle *_trackRowStyle;
    GLUEEntityRowStyle *_trackRowWithColoredIconStyle;
    GLUEEntityRowStyle *_trackRowPreCurationStyle;
    SPTFreeTierPlaylistButtonSectionHeaderViewStyle *_sectionHeaderViewStyle;
    id <GLUEImageLoader> _glueImageLoader;
    UIImage *_trackPlaceholderImage;
    GLUETrackMultipleAccessoriesViewStyle *_trackMultipleAccessoriesDefaultStyle;
}

@property(readonly, nonatomic) GLUETrackMultipleAccessoriesViewStyle *trackMultipleAccessoriesDefaultStyle; // @synthesize trackMultipleAccessoriesDefaultStyle=_trackMultipleAccessoriesDefaultStyle;
@property(readonly, nonatomic) UIImage *trackPlaceholderImage; // @synthesize trackPlaceholderImage=_trackPlaceholderImage;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTFreeTierPlaylistButtonSectionHeaderViewStyle *sectionHeaderViewStyle; // @synthesize sectionHeaderViewStyle=_sectionHeaderViewStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowPreCurationStyle; // @synthesize trackRowPreCurationStyle=_trackRowPreCurationStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowWithColoredIconStyle; // @synthesize trackRowWithColoredIconStyle=_trackRowWithColoredIconStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) SPTFreeTierPlaylistGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTFreeTierPlaylistTrackCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)trackCellClass;
- (void)enableSwipeGesturesOnCell:(id)arg1 withTrackViewModel:(id)arg2;
- (void)contextMenuAction:(id)arg1;
- (void)setupTrailingAccessoryForCell:(id)arg1 trackViewModel:(id)arg2;
- (void)configureMultipleAccessoriesViewForCell:(id)arg1 trackViewModel:(id)arg2;
- (void)configureImageViewForCell:(id)arg1 trackViewModel:(id)arg2;
- (id)contentViewForCell:(id)arg1;
- (void)configureCell:(id)arg1 withTrackViewModel:(id)arg2 configureContent:(_Bool)arg3 configureLeadingAccessory:(_Bool)arg4 configureTrailingAccessory:(_Bool)arg5 swipeableCell:(id)arg6;
- (double)preferredCellHeight;
- (id)initWithViewModel:(id)arg1 trackRowStyle:(id)arg2 shelves:(id)arg3 theme:(id)arg4 glueImageLoader:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

