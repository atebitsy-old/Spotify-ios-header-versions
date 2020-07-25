//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileInAppMessage_InAppMessageCtaEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileInAppMessage_InAppMessageCtaEventFactoryImplementation : NSObject <SPTUBIMobileInAppMessage_InAppMessageCtaEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 uri:(id)arg2 components:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitNavigateToExternalUriWithDestination:(id)arg1;
- (id)hitOpenOsSettings;
- (id)hitUiHide;
- (id)hitUiNavigateWithDestination:(id)arg1;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)hitUnfollowWithItemToBeUnfollowed:(id)arg1;
- (id)hitFollowWithItemToBeFollowed:(id)arg1;
- (id)hitLikeWithItemToBeLiked:(id)arg1;
- (id)hitDislikeWithItemToBeDisliked:(id)arg1;
- (id)hitCreatePlaylist;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 uri:(id)arg2 components:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
