//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistAdditionalCallToAction-Protocol.h"

@protocol SPTFreeTierPlaylistAdditionalCallToActionDelegate;

@interface _TtC25PlaylistTuningFeatureImpl36PlaylistTuningAdditionalCallToAction : NSObject <SPTFreeTierPlaylistAdditionalCallToAction>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: icon
    // Error parsing type: , name: selected
    // Error parsing type: , name: enabled
    // Error parsing type: , name: viewController
}

- (void).cxx_destruct;
- (id)init;
- (void)performAction:(id)arg1;
- (void)didAppearInViewController:(id)arg1;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(nonatomic) unsigned long long icon; // @synthesize icon;
@property(nonatomic) __weak id <SPTFreeTierPlaylistAdditionalCallToActionDelegate> delegate; // @synthesize delegate;

@end

