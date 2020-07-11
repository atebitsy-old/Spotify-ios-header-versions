//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTChartEntityLoaderNetworkAdapter-Protocol.h"

@class NSString;
@protocol SPTChartEntityLoaderNetworkAdapterDelegate, SPTResolver;

@interface SPTChartEntityLoaderCosmosNetworkAdapter : NSObject <SPTChartEntityLoaderNetworkAdapter>
{
    id <SPTChartEntityLoaderNetworkAdapterDelegate> _delegate;
    id <SPTResolver> _resolver;
}

@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTChartEntityLoaderNetworkAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadDataForURL:(id)arg1;
@property(readonly, nonatomic) long long transportProtocol;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

