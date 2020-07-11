//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFHeaderController-Protocol.h"

@class UIImage;
@protocol GLUETheme, HUBComponentEventHandler, HUBComponentModel, SPTImageLoader, SPTLinkDispatcher;

@protocol VISREFHubHeaderController <VISREFHeaderController>
+ (struct CGSize)preferredHeaderSizeForContainerViewSize:(struct CGSize)arg1;
- (void)setBackButtonTappedBlock:(void (^)(void))arg1;
- (void)setNavigationBarHeight:(double)arg1;
- (void)configureWithModel:(id <HUBComponentModel>)arg1 eventHandler:(id <HUBComponentEventHandler>)arg2;
- (double)headerHeight;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id <GLUETheme>)arg2 imageLoader:(id <SPTImageLoader>)arg3 linkDispatcher:(id <SPTLinkDispatcher>)arg4;

@optional
- (void)setImage:(UIImage *)arg1;
- (void)setOfflineButtonModel:(id)arg1;
- (void)setContextMenuButtonModel:(id)arg1;
- (void)setFollowButtonModel:(id)arg1;
@end

