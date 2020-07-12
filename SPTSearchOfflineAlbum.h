//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface SPTSearchOfflineAlbum : NSObject
{
    NSString *_name;
    NSURL *_collectionURI;
    NSURL *_imageURL;
    NSArray *_artistNames;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *artistNames; // @synthesize artistNames=_artistNames;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSURL *collectionURI; // @synthesize collectionURI=_collectionURI;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 collectionURI:(id)arg2 imageURL:(id)arg3 artistNames:(id)arg4;

@end

