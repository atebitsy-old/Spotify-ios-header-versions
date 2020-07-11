//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountProductInformationController-Protocol.h"

@class NSDate, NSString;

@interface SPTPremiumDestinationSettingsProductInformationControllerImplementation : NSObject <SPTAccountProductInformationController>
{
    _Bool _upgradeAvailableButCantPurchase;
    _Bool _canActivatePremiumTrial;
    _Bool _hasCanActivatePremiumTrialValue;
    long long _currentProduct;
    long long _availableProduct;
    NSDate *_currentProductExpieryDate;
}

@property(readonly, nonatomic) _Bool hasCanActivatePremiumTrialValue; // @synthesize hasCanActivatePremiumTrialValue=_hasCanActivatePremiumTrialValue;
@property(readonly, nonatomic) _Bool canActivatePremiumTrial; // @synthesize canActivatePremiumTrial=_canActivatePremiumTrial;
@property(readonly, nonatomic) NSDate *currentProductExpieryDate; // @synthesize currentProductExpieryDate=_currentProductExpieryDate;
@property(nonatomic) _Bool upgradeAvailableButCantPurchase; // @synthesize upgradeAvailableButCantPurchase=_upgradeAvailableButCantPurchase;
@property(nonatomic) long long availableProduct; // @synthesize availableProduct=_availableProduct;
@property(nonatomic) long long currentProduct; // @synthesize currentProduct=_currentProduct;
- (void).cxx_destruct;
- (void)removeProductInformationObserver:(id)arg1;
- (void)addProductInformationObserver:(id)arg1;
- (id)marketingNameForProduct:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *currentProductMarketingName;
@property(readonly, copy, nonatomic) NSString *username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

