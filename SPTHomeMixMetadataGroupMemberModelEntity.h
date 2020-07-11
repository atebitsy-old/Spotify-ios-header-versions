//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTHomeMixMetadataGroupMemberModelEntity : NSObject
{
    _Bool _enabled;
    _Bool _present;
    _Bool _tasteOnboardingRequired;
    NSURL *_avatarImageURL;
    NSURL *_avatarImageURLLarge;
    NSString *_colorHex;
    NSString *_username;
    NSString *_initials;
    NSString *_shortName;
}

@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic, getter=isTasteOnboardingRequired) _Bool tasteOnboardingRequired; // @synthesize tasteOnboardingRequired=_tasteOnboardingRequired;
@property(readonly, nonatomic, getter=isPresent) _Bool present; // @synthesize present=_present;
@property(readonly, copy, nonatomic) NSString *initials; // @synthesize initials=_initials;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *colorHex; // @synthesize colorHex=_colorHex;
@property(readonly, nonatomic) NSURL *avatarImageURLLarge; // @synthesize avatarImageURLLarge=_avatarImageURLLarge;
@property(readonly, nonatomic) NSURL *avatarImageURL; // @synthesize avatarImageURL=_avatarImageURL;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToGroupMemberModelEntity:(id)arg1;
- (id)initWithMemberFormatListAttributes:(id)arg1;
- (id)asFacePileViewModel;

@end

