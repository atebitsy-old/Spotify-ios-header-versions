//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTFreeTierEntityOfflineSongModel : NSObject
{
    _Bool _premiumOnly;
    _Bool _ratedExplicit;
    _Bool _availableOffline;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_artistURL;
    NSURL *_albumURL;
    NSURL *_trackURL;
}

@property(readonly, nonatomic) _Bool availableOffline; // @synthesize availableOffline=_availableOffline;
@property(readonly, nonatomic) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, nonatomic) _Bool premiumOnly; // @synthesize premiumOnly=_premiumOnly;
@property(copy, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(copy, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(copy, nonatomic) NSURL *artistURL; // @synthesize artistURL=_artistURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTrackURL:(id)arg1 trackName:(id)arg2 artistName:(id)arg3 artistURL:(id)arg4 albumURL:(id)arg5 isPremiumOnly:(_Bool)arg6 isRatedExplicit:(_Bool)arg7 isAvailableOffline:(_Bool)arg8;

@end

