//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

@protocol HUBComponentEventHandler;

@interface _TtC21FollowFeedFeatureImpl44FullSizeExpandableReleaseComponentViewBinder : HUBComponentView
{
    // Error parsing type: , name: eventHandler
    // Error parsing type: , name: containerView
    // Error parsing type: , name: logger
    // Error parsing type: , name: theme
    // Error parsing type: , name: tracks
    // Error parsing type: , name: $__lazy_storage_$_contentViewClickBehavior
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)trackContextMenuButtonClickedWithSender:(id)arg1;
- (void)contextMenuButtonClickedWithSender:(id)arg1;
- (void)trackClickedAt:(long long)arg1;
- (void)playButtonClicked;
- (void)expansionControlTapped;
- (void)artistAvatarClicked;
- (void)configureWithModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidDisappearWithContext:(id)arg1;
- (void)viewWillAppearWithContext:(id)arg1;
@property(nonatomic) __weak id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;

@end

