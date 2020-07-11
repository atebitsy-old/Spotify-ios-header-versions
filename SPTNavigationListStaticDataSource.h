//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationListDataSource-Protocol.h"

@class NSString, SPTNavigationSettingsRegistration;
@protocol SPTNavigationListIdentifierFromABTestSource;

@interface SPTNavigationListStaticDataSource : NSObject <SPTNavigationListDataSource>
{
    id <SPTNavigationListIdentifierFromABTestSource> _abTestDataSource;
    SPTNavigationSettingsRegistration *_settingsRegistration;
}

@property(retain, nonatomic) SPTNavigationSettingsRegistration *settingsRegistration; // @synthesize settingsRegistration=_settingsRegistration;
@property(nonatomic) __weak id <SPTNavigationListIdentifierFromABTestSource> abTestDataSource; // @synthesize abTestDataSource=_abTestDataSource;
- (void).cxx_destruct;
- (id)staticListIdentifiers;
- (id)createListChosenViaSettingsExcludingIdentifiers:(id)arg1;
- (id)defaultNavigationResourceURL;
- (id)createNavigationListMatchingIdentifier:(id)arg1;
- (id)loadNavigationlists;
- (id)initWithNavigationABTestSource:(id)arg1 settingsRegistration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

