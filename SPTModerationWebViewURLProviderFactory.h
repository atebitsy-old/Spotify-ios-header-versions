//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTModerationReportDecorationRegistryImplementation;

@interface SPTModerationWebViewURLProviderFactory : NSObject
{
    SPTModerationReportDecorationRegistryImplementation *_decorationRegistry;
}

@property(retain, nonatomic) SPTModerationReportDecorationRegistryImplementation *decorationRegistry; // @synthesize decorationRegistry=_decorationRegistry;
- (void).cxx_destruct;
- (id)createProviderForURLBuilder:(id)arg1;
- (id)initWithDecorationRegistry:(id)arg1;

@end

