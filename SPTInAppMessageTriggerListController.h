//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageTriggerConfigurationsControllerDelegate-Protocol.h"

@class NSString, SPTInAppMessageTriggerListParser;
@protocol SPTInAppMessageTriggerListControllerDelegate;

@interface SPTInAppMessageTriggerListController : NSObject <SPTInAppMessageTriggerConfigurationsControllerDelegate>
{
    id <SPTInAppMessageTriggerListControllerDelegate> _delegate;
    SPTInAppMessageTriggerListParser *_triggerListParser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTInAppMessageTriggerListParser *triggerListParser; // @synthesize triggerListParser=_triggerListParser;
@property(nonatomic) __weak id <SPTInAppMessageTriggerListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)triggerConfigurationsController:(id)arg1 didFetchActiveTriggers:(id)arg2;
- (id)initWithTriggerListParser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

