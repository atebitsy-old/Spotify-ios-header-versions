//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface SPTHomeMixTrackViewModel : NSObject
{
    _Bool _ratedExplicit;
    NSString *_subtitle;
    NSString *_albumName;
    NSURL *_albumURL;
    NSURL *_albumImageURL;
    NSArray *_artistEntities;
    NSString *_title;
    NSURL *_URL;
    NSArray *_members;
    NSArray *_affinities;
    NSArray *_memberShortNames;
}

@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, copy, nonatomic) NSArray *memberShortNames; // @synthesize memberShortNames=_memberShortNames;
@property(readonly, copy, nonatomic) NSArray *affinities; // @synthesize affinities=_affinities;
@property(readonly, copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *artistEntities; // @synthesize artistEntities=_artistEntities;
@property(readonly, nonatomic) NSURL *albumImageURL; // @synthesize albumImageURL=_albumImageURL;
@property(readonly, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (id)constructMemberShortNamesFromAffinities:(id)arg1 homeMixMembers:(id)arg2;
- (id)constructMemberViewModelsFromAffinities:(id)arg1 homeMixMembers:(id)arg2;
- (id)initWithTrackModelEntity:(id)arg1 homeMixMembers:(id)arg2;

@end

