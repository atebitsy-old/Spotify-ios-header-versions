//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSArray, NSString, NSURL, SPTDataLoader, SPTPodcastTopicsEndpointFactory;
@protocol SPTPodcastTopicCategoryViewModelDelegate;

@interface SPTPodcastTopicCategoryViewModel : NSObject <SPTDataLoaderDelegate>
{
    id <SPTPodcastTopicCategoryViewModelDelegate> _delegate;
    NSArray *_categories;
    SPTDataLoader *_dataLoader;
    SPTPodcastTopicsEndpointFactory *_endpointFactory;
    NSURL *_URI;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) SPTPodcastTopicsEndpointFactory *endpointFactory; // @synthesize endpointFactory=_endpointFactory;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) __weak id <SPTPodcastTopicCategoryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)loadData;
- (id)initWithDataLoader:(id)arg1 endpointFactory:(id)arg2 podcastURI:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

