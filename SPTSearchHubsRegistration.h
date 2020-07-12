//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentRegistry;
@protocol GLUETheme;

@interface SPTSearchHubsRegistration : NSObject
{
    id <GLUETheme> _theme;
    HUBComponentRegistry *_componentRegistry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void)unregisterSearchComponents;
- (void)registerSearchComponents;
- (id)initWithTheme:(id)arg1 componentRegistry:(id)arg2;

@end

