//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLinkDispatcher;

@interface SPTAccountExternalLinkController : NSObject
{
    id <SPTLinkDispatcher> _linkDispatcher;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (id)campaignURL:(id)arg1;
- (long long)externalLinkControllerHandleCampaignURIIfRelevant:(id)arg1;
- (_Bool)canHandleURIForExternalLinkController:(id)arg1;
- (id)initWithLinkDispatcher:(id)arg1;

@end

