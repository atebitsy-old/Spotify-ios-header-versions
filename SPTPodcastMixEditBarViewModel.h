//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTPodcastMixEditBarViewModel : NSObject
{
    NSArray *_headerTitles;
    NSArray *_headerImages;
    long long _showsCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long showsCount; // @synthesize showsCount=_showsCount;
@property(copy, nonatomic) NSArray *headerImages; // @synthesize headerImages=_headerImages;
@property(copy, nonatomic) NSArray *headerTitles; // @synthesize headerTitles=_headerTitles;
- (id)fallbackText;
- (id)stylizedString:(id)arg1 withColor:(id)arg2;
- (id)contentDescriptionText;
- (void)applyModelToView:(id)arg1;
- (void)updateFromPlaylistModelEntity:(id)arg1;

@end

