//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationTrackModelEntity-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTAssistedCurationTrackModelEntityImplementation : NSObject <SPTAssistedCurationTrackModelEntity>
{
    _Bool _ratedExplicit;
    _Bool _is19PlusOnly;
    NSURL *_URL;
    NSString *_name;
    NSArray *_artists;
    NSURL *_imageURL;
    NSString *_previewId;
}

+ (id)tracksFromCollectionTracks:(id)arg1;
@property(readonly, nonatomic) _Bool is19PlusOnly; // @synthesize is19PlusOnly=_is19PlusOnly;
@property(readonly, nonatomic) NSString *previewId; // @synthesize previewId=_previewId;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 name:(id)arg2 artists:(id)arg3 imageURL:(id)arg4 ratedExplicit:(_Bool)arg5 is19PlusOnly:(_Bool)arg6 previewId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

