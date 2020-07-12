//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

#import "SPTDismissContextMenuAction-Protocol.h"

@class NSURL;
@protocol SPTAssistedCurationUIService;

@interface SPTAssistedCurationAddSongsAction : SPAction <SPTDismissContextMenuAction>
{
    NSURL *_playlistURL;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(retain, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (_Bool)shouldDismissContextMenuBeforePerformingAction;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithPlaylistURL:(id)arg1 assistedCurationUIService:(id)arg2 logContext:(id)arg3;

@end

