//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewContentOffsetObserver-Protocol.h"
#import "HUBComponentViewWithChildren-Protocol.h"
#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class NSLayoutConstraint, NSURL, SPTPodcastUIEditorialHeaderViewController, SPTPodcastUIHubsChildCollectionViewController;
@protocol GLUETheme, HUBComponentEventHandler, HUBComponentViewChildDelegate;

@interface SPTPodcastUIEditorialHubHeaderComponentView : HUBComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents, HUBComponentViewContentOffsetObserver, HUBComponentViewWithChildren>
{
    id <HUBComponentEventHandler> _eventHandler;
    id <HUBComponentViewChildDelegate> _childDelegate;
    id <GLUETheme> _theme;
    SPTPodcastUIEditorialHeaderViewController *_headerController;
    SPTPodcastUIHubsChildCollectionViewController *_childController;
    NSLayoutConstraint *_heightConstraint;
    NSURL *_lastImageURL;
    double _statusBarHeight;
    double _currentWidth;
    double _heightContentConstant;
}

@property(nonatomic) double heightContentConstant; // @synthesize heightContentConstant=_heightContentConstant;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(retain, nonatomic) NSURL *lastImageURL; // @synthesize lastImageURL=_lastImageURL;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) SPTPodcastUIHubsChildCollectionViewController *childController; // @synthesize childController=_childController;
@property(retain, nonatomic) SPTPodcastUIEditorialHeaderViewController *headerController; // @synthesize headerController=_headerController;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)contentOffsetConstantForContentOffset:(struct CGPoint)arg1 imageHeight:(double)arg2 heightContentConstant:(double)arg3 totalMinHeight:(double)arg4;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (double)getImageHeightForFrame:(struct CGRect)arg1;
- (void)updateHeaderHeight;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

