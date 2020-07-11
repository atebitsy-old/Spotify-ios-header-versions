//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchKitViewModelProvider-Protocol.h"
#import "SPTSearchKitViewModelProviderDelegate-Protocol.h"

@class NSString, SPTSearchKitViewModel;
@protocol SPTSearchKitViewModelProvider, SPTSearchKitViewModelProviderDelegate;

@interface SPTSearchKitQuerySwitchingViewModelProvider : NSObject <SPTSearchKitViewModelProviderDelegate, SPTSearchKitViewModelProvider>
{
    id <SPTSearchKitViewModelProviderDelegate> _delegate;
    id <SPTSearchKitViewModelProvider> _initialVMP;
    id <SPTSearchKitViewModelProvider> _resultsVMP;
    NSString *_query;
    SPTSearchKitViewModel *_viewModel;
}

@property(copy, nonatomic) SPTSearchKitViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) id <SPTSearchKitViewModelProvider> resultsVMP; // @synthesize resultsVMP=_resultsVMP;
@property(readonly, nonatomic) id <SPTSearchKitViewModelProvider> initialVMP; // @synthesize initialVMP=_initialVMP;
@property(nonatomic) __weak id <SPTSearchKitViewModelProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateViewModel;
- (void)viewModelProvider:(id)arg1 didUpdateFromViewModel:(id)arg2;
- (id)initWithInitialViewModelProvider:(id)arg1 resultsViewModelProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

