//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"

@class NSString, SPTFreeTierAllSongsHeaderContentView, SPTFreeTierAllSongsLogger, SPTFreeTierAllSongsTheme;
@protocol SPTFreeTierAllSongsHeaderEntityViewModel;

@interface SPTFreeTierAllSongsHeaderViewController : UIViewController <SPTEntityHeaderContentController>
{
    id <SPTFreeTierAllSongsHeaderEntityViewModel> _headerEntityViewModel;
    SPTFreeTierAllSongsTheme *_theme;
    SPTFreeTierAllSongsHeaderContentView *_headerView;
    SPTFreeTierAllSongsLogger *_logger;
}

@property(retain, nonatomic) SPTFreeTierAllSongsLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTFreeTierAllSongsHeaderContentView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTFreeTierAllSongsTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTFreeTierAllSongsHeaderEntityViewModel> headerEntityViewModel; // @synthesize headerEntityViewModel=_headerEntityViewModel;
- (void).cxx_destruct;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)updateWithHeaderEntityViewModel:(id)arg1;
- (void)headerAction:(id)arg1;
- (void)initializeInterface;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

