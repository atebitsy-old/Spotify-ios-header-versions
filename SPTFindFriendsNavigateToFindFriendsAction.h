//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@protocol SPTLinkDispatcher;

@interface SPTFindFriendsNavigateToFindFriendsAction : SPAction
{
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithLinkDispatcher:(id)arg1 logContext:(id)arg2;

@end

