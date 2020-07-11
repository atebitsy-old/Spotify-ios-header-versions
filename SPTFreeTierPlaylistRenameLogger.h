//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTUBIMobileRenamePlaylistEventFactory, SPTUserBehaviourInstrumentationLogger;

@interface SPTFreeTierPlaylistRenameLogger : NSObject
{
    id <SPTUserBehaviourInstrumentationLogger> _ubiLogger;
    id <SPTUBIMobileRenamePlaylistEventFactory> _ubiEventFactory;
    NSURL *_playlistURL;
}

@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTUBIMobileRenamePlaylistEventFactory> ubiEventFactory; // @synthesize ubiEventFactory=_ubiEventFactory;
@property(readonly, nonatomic) id <SPTUserBehaviourInstrumentationLogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
- (void).cxx_destruct;
- (void)logCancelClicked;
- (void)logRenameClicked;
- (id)initWithUBIEventFactory:(id)arg1 ubiLogger:(id)arg2;

@end
