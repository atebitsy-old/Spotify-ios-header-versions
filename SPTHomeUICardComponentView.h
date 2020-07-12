//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class SPTHomeUICardView;
@protocol HUBComponentEventHandler;

@interface SPTHomeUICardComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    unsigned long long _type;
    SPTHomeUICardView *_cardView;
}

+ (id)defaultHomeCardStyleForTheme:(id)arg1 model:(id)arg2 type:(unsigned long long)arg3;
+ (double)maxCardViewWidthForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2 type:(unsigned long long)arg3;
+ (id)attributedString:(id)arg1 foregroundColor:(id)arg2 alignment:(long long)arg3 shuffleEnabled:(_Bool)arg4 font:(id)arg5;
+ (_Bool)isShuffleBadgeEnabledForModel:(id)arg1;
+ (_Bool)shouldAddShuffleBadgeForSubtitle:(id)arg1;
+ (_Bool)shouldAddShuffleBadgeForTitle:(id)arg1;
+ (id)attributedSubtitleForModel:(id)arg1 theme:(id)arg2;
+ (id)attributedTitleForModel:(id)arg1 theme:(id)arg2 textAlignment:(long long)arg3 type:(unsigned long long)arg4;
+ (struct CGSize)preferredSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3 type:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUICardView *cardView; // @synthesize cardView=_cardView;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)sendSelectionEvent;
- (id)defaultHomeCardStyleForModel:(id)arg1;
- (double)maxCardViewWidthForContainerViewSize:(struct CGSize)arg1;
- (void)updateAccessibilityWithModel:(id)arg1;
- (void)setupConstraints;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 type:(unsigned long long)arg3;

@end

