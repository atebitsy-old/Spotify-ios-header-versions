//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTVoiceCommandMedia : NSObject
{
    NSURL *_imageURI;
    NSString *_imagePlaceholder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *imagePlaceholder; // @synthesize imagePlaceholder=_imagePlaceholder;
@property(readonly, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURI:(id)arg1 placeholder:(id)arg2;

@end

