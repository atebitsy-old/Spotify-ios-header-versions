//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastSectionTableViewCell.h"

@class GLUEContextMenuAccessoryButton, SPTPodcastTrailerSectionContentView;
@protocol GLUEImageLoader, GLUETheme;

@interface SPTPodcastTrailerSectionTableViewCell : SPTPodcastSectionTableViewCell
{
    id <GLUEImageLoader> _imageLoader;
    id <GLUETheme> _glueTheme;
    SPTPodcastTrailerSectionContentView *_trailerContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPodcastTrailerSectionContentView *trailerContentView; // @synthesize trailerContentView=_trailerContentView;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void)updateWithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)configureLayout;
- (void)configureAppearance;
@property(readonly, nonatomic) GLUEContextMenuAccessoryButton *contextMenuButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

