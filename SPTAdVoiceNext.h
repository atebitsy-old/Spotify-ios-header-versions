//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SPTAdVoiceModel;

@interface SPTAdVoiceNext : NSObject
{
    SPTAdVoiceModel *_model;
    NSSet *_effects;
}

@property(readonly, nonatomic) NSSet *effects; // @synthesize effects=_effects;
@property(readonly, nonatomic) SPTAdVoiceModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 effects:(id)arg2;

@end

