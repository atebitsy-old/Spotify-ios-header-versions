//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTIAPProductActivationRequest.h"

@class NSString, SPTHermesController;

@interface SPTIAPProductActivationHermesRequest : SPTIAPProductActivationRequest
{
    SPTHermesController *_hermesController;
    NSString *_applicationVersionString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *applicationVersionString; // @synthesize applicationVersionString=_applicationVersionString;
@property(readonly, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
- (void)start;
- (id)initWithReceiptData:(id)arg1 hermesController:(id)arg2 applicationVersionString:(id)arg3;

@end

