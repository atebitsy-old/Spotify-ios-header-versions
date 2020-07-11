//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSArray;
@protocol HUBContentOperationDelegate, SPTExplicitContentAccessManager;

@interface SPTFreeTierUIExplicitTracksContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    NSArray *_trackRowKeys;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
}

@property(readonly, nonatomic) __weak id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(copy, nonatomic) NSArray *trackRowKeys; // @synthesize trackRowKeys=_trackRowKeys;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithExplicitContentAccessManager:(id)arg1;

@end

