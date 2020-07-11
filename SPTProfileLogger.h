//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTProfileLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logFollowButtonInteraction:(_Bool)arg1 forPageURI:(id)arg2;
- (void)logProfileInteractionForSectionId:(id)arg1 pageURI:(id)arg2 targetURI:(id)arg3 itemIndex:(long long)arg4;
- (void)logProfileInteractionForDataType:(long long)arg1 pageURI:(id)arg2 targetURI:(id)arg3 itemIndex:(long long)arg4;
- (void)logProfileInteractionForPageURI:(id)arg1 targetURI:(id)arg2 itemIndex:(long long)arg3;
- (id)initWithLogCenter:(id)arg1;

@end

