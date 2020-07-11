//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SPTPartnerDateProvider;

@interface SPTPartnerTimeTracker : NSObject
{
    NSDate *_startDate;
    SPTPartnerDateProvider *_dateProvider;
    NSDate *_backgroundDate;
    double _secondsInBackground;
}

@property(nonatomic) double secondsInBackground; // @synthesize secondsInBackground=_secondsInBackground;
@property(retain, nonatomic) NSDate *backgroundDate; // @synthesize backgroundDate=_backgroundDate;
@property(retain, nonatomic) SPTPartnerDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (double)secondsSinceStart;
- (void)appDidEnterForeground;
- (void)appDidEnterBackground;
- (void)dealloc;
- (id)init;

@end

