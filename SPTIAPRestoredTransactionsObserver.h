//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"

@class NSHashTable, NSString, SKPaymentQueue;
@protocol SPTIAPRestoredTransactionsObserverDelegate;

@interface SPTIAPRestoredTransactionsObserver : NSObject <SKPaymentTransactionObserver>
{
    id <SPTIAPRestoredTransactionsObserverDelegate> _delegate;
    SKPaymentQueue *_paymentQueue;
    NSHashTable *_registeredPayments;
    NSHashTable *_registeredTransactions;
}

@property(retain, nonatomic) NSHashTable *registeredTransactions; // @synthesize registeredTransactions=_registeredTransactions;
@property(retain, nonatomic) NSHashTable *registeredPayments; // @synthesize registeredPayments=_registeredPayments;
@property(retain, nonatomic) SKPaymentQueue *paymentQueue; // @synthesize paymentQueue=_paymentQueue;
@property(nonatomic) __weak id <SPTIAPRestoredTransactionsObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)registerTransaction:(id)arg1;
- (void)registerPayment:(id)arg1;
- (void)dealloc;
- (id)initWithPaymentQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

