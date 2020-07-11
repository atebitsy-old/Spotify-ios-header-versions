//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"

@class NSSet;
@protocol GLUETheme, SPTFreeTierEntityOfflineViewModel, SPTImageLoader, SPTLinkDispatcher;

@interface VISREFHubHeaderComponent : NSObject <HUBComponent>
{
    CDUnknownBlockType _backButtonTappedBlock;
    id _followButtonModel;
    id _contextMenuButtonModel;
    id <SPTFreeTierEntityOfflineViewModel> _offlineButtonModel;
    Class _headerControllerClass;
    id <GLUETheme> _theme;
    id <SPTImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) Class headerControllerClass; // @synthesize headerControllerClass=_headerControllerClass;
@property(retain, nonatomic) id <SPTFreeTierEntityOfflineViewModel> offlineButtonModel; // @synthesize offlineButtonModel=_offlineButtonModel;
@property(retain, nonatomic) id contextMenuButtonModel; // @synthesize contextMenuButtonModel=_contextMenuButtonModel;
@property(retain, nonatomic) id followButtonModel; // @synthesize followButtonModel=_followButtonModel;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithHubHeaderControllerClass:(Class)arg1 theme:(id)arg2 imageLoader:(id)arg3 linkDispatcher:(id)arg4;

@end

