//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@protocol HUBComponentEventHandler;

@interface _TtC7SPTTing24EpisodeCardComponentView : HUGSThemableComponentView
{
    // Error parsing type: , name: cardView
    // Error parsing type: , name: eventHandler
}

- (void).cxx_destruct;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
@property(nonatomic, retain) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

