//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginLogger;

@interface SPTLoginMagicLinkSentConfirmationViewLogger : NSObject
{
    id <SPTLoginLogger> _logger;
}

@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logUserDidTapOpenEmailButton;
- (void)logUserDidSeeView;
- (id)initWithLogger:(id)arg1;

@end

