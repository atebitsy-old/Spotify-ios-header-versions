//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "SPTFreeTierAddToCollectionButton-Protocol.h"
#import "SPTFreeTierEntityFeedbackButtonViewModelDelegate-Protocol.h"

@class NSString;
@protocol SPTFreeTierEntityFeedbackButtonViewModel;

@interface SPTFreeTierEntityHeartBanButton : UIButton <SPTFreeTierEntityFeedbackButtonViewModelDelegate, SPTFreeTierAddToCollectionButton>
{
    id <SPTFreeTierEntityFeedbackButtonViewModel> _viewModel;
    struct UIEdgeInsets alignmentRectInsetsOverride;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTFreeTierEntityFeedbackButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsetsOverride; // @synthesize alignmentRectInsetsOverride;
- (void)viewModel:(id)arg1 didUpdateState:(unsigned long long)arg2;
- (id)iconColorForState:(unsigned long long)arg1;
- (id)createImageForState:(unsigned long long)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

