//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTChartEntry : NSObject
{
    _Bool _playable;
    _Bool _explicitTrack;
    _Bool _locallyPlayable;
    _Bool _inCollection;
    _Bool _banned;
    NSURL *_URI;
    NSString *_title;
    unsigned long long _rank;
    NSString *_artistsTitle;
    NSURL *_artistURI;
    NSURL *_albumURI;
    NSURL *_albumImageURL;
    NSString *_albumTitle;
    NSString *_previewID;
    unsigned long long _status;
    unsigned long long _currentPosition;
    unsigned long long _previousPosition;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isBanned) _Bool banned; // @synthesize banned=_banned;
@property(nonatomic, getter=isInCollection) _Bool inCollection; // @synthesize inCollection=_inCollection;
@property(nonatomic, getter=isLocallyPlayable) _Bool locallyPlayable; // @synthesize locallyPlayable=_locallyPlayable;
@property(nonatomic, getter=isExplicitTrack) _Bool explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property(nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=_playable;
@property(nonatomic) unsigned long long previousPosition; // @synthesize previousPosition=_previousPosition;
@property(nonatomic) unsigned long long currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *previewID; // @synthesize previewID=_previewID;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSURL *albumImageURL; // @synthesize albumImageURL=_albumImageURL;
@property(retain, nonatomic) NSURL *albumURI; // @synthesize albumURI=_albumURI;
@property(retain, nonatomic) NSURL *artistURI; // @synthesize artistURI=_artistURI;
@property(copy, nonatomic) NSString *artistsTitle; // @synthesize artistsTitle=_artistsTitle;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;

@end

