//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol SPTAccountProductInformationController, SPTAlertController, SPTLinkDispatcher, SPTLocalSettings, SPTPlayer, SPTProductState;

@interface SPTRateMeController : NSObject <SPTPlayerObserver>
{
    _Bool _showingAlert;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
    id <SPTPlayer> _player;
    NSMutableArray *_requirementSets;
    id <SPTAccountProductInformationController> _productInformationController;
    NSArray *_partnerNavigationIntegrations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *partnerNavigationIntegrations; // @synthesize partnerNavigationIntegrations=_partnerNavigationIntegrations;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(nonatomic, getter=isShowingAlert) _Bool showingAlert; // @synthesize showingAlert=_showingAlert;
@property(readonly, nonatomic) NSMutableArray *requirementSets; // @synthesize requirementSets=_requirementSets;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)addRequirementSet:(id)arg1;
- (void)cancelShowingAlert;
- (void)showAlert;
- (void)actionNever;
- (void)actionRate;
- (_Bool)allRequirementsMet;
- (void)applyDefaults;
- (id)initWithProductState:(id)arg1 productInformationController:(id)arg2 localSettings:(id)arg3 linkDispatcher:(id)arg4 alertController:(id)arg5 player:(id)arg6 partnerNavigationIntegrations:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

