//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTDrivingModeHomeFeedShelfItem : NSObject
{
    NSURL *_uri;
    NSString *_title;
    NSURL *_imageURL;
    NSString *_placeholderIconIdentifier;
}

@property(copy, nonatomic) NSString *placeholderIconIdentifier; // @synthesize placeholderIconIdentifier=_placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (_Bool)isEqualToShelf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithURI:(id)arg1 title:(id)arg2 imageURL:(id)arg3 placeholderIconIdentifier:(id)arg4;

@end

