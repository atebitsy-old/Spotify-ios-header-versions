//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUIStringFormatter-Protocol.h"

@class NSCalendar, NSDateComponentsFormatter, NSDateFormatter, NSLocale, NSString;

@interface SPTPodcastUIStringFormatterImpl : NSObject <SPTPodcastUIStringFormatter>
{
    NSCalendar *_calendar;
    NSLocale *_locale;
    NSDateFormatter *_dateFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
}

+ (id)formatterWithCurrentCalendarAndCurrentLocale;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponentsFormatter *dateComponentFormatter; // @synthesize dateComponentFormatter=_dateComponentFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)dateWithYearTemplateFormat;
- (id)dateWithoutYearTemplateFormat;
- (id)publicationDateStringWithPublicationDate:(id)arg1 currentDate:(id)arg2;
- (id)dateTextForGivenLatestEpisodeDate:(id)arg1;
- (id)durationStringWithDuration:(double)arg1;
- (id)timeLeftStringWithDuration:(double)arg1 listenedDuration:(double)arg2;
- (id)durationOrTimeLeftStringWithEpisodeDuration:(double)arg1 listenedDuration:(double)arg2 isPlayed:(_Bool)arg3;
- (id)fixedPublicationAndDurationWithEpisodePublicationDate:(id)arg1 currentDate:(id)arg2 episodeDuration:(double)arg3;
- (id)relativePublicationAndTimeLeftWithPublicationDate:(id)arg1 currentDate:(id)arg2 duration:(double)arg3 listenedDuration:(double)arg4;
- (id)relativePublicationAndDurationWithEpisodePublicationDate:(id)arg1 currentDate:(id)arg2 episodeDuration:(double)arg3 listenedDuration:(double)arg4 isPlayed:(_Bool)arg5;
- (id)lowercaseRelativePublicationAndFixedDurationWithPublicationDate:(id)arg1 currentDate:(id)arg2 duration:(double)arg3;
- (id)relativePublicationAndFixedDurationWithPublicationDate:(id)arg1 currentDate:(id)arg2 duration:(double)arg3;
- (id)initWithCalendar:(id)arg1 locale:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

