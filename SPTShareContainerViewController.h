//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"

@class NSArray, NSString, NSURL, SPTShareDataProvider, SPTShareLogger, UIView;
@protocol SPTPageContainer, SPTShareContainerViewControllerProtocol, SPTShareEntityData;

@interface SPTShareContainerViewController : UIViewController <SPTPageController>
{
    UIView *_contextMenuPopOverOriginView;
    id <SPTShareContainerViewControllerProtocol> _delegate;
    id <SPTShareEntityData> _entityData;
    NSArray *_destinations;
    SPTShareDataProvider *_shareDataProvider;
    SPTShareLogger *_shareLogger;
    UIView *_containerView;
    NSArray *_layoutConstraints;
    struct CGRect _contextMenuPopOverOriginRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(retain, nonatomic) SPTShareDataProvider *shareDataProvider; // @synthesize shareDataProvider=_shareDataProvider;
@property(copy, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) id <SPTShareEntityData> entityData; // @synthesize entityData=_entityData;
@property(nonatomic) __weak id <SPTShareContainerViewControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect contextMenuPopOverOriginRect; // @synthesize contextMenuPopOverOriginRect=_contextMenuPopOverOriginRect;
@property(retain, nonatomic) UIView *contextMenuPopOverOriginView; // @synthesize contextMenuPopOverOriginView=_contextMenuPopOverOriginView;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)updateViewConstraints;
- (void)addShareViewControllerWithShareData:(id)arg1 destinations:(id)arg2;
- (void)resetBarButtonItemAppearance;
- (void)setupBarButtonItemAppearance;
- (void)setupContainerView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithShareDataProvider:(id)arg1 entityData:(id)arg2 destinations:(id)arg3 shareLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

