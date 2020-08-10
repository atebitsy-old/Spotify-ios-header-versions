//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLoginLogger;

@interface SPTLoginEmailValidationDialogLogger : NSObject
{
    id <SPTLoginLogger> _logger;
    NSString *_screenIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void)logUserDidTapDismissButtonOnVoiceOverValidationErrorDialog;
- (void)logUserDidSeeVoiceOverValidationErrorDialog;
- (void)logUserDidTapDismissButtonOnEmailAlreadyExistsDialog;
- (void)logUserDidTapGoToLoginButtonOnEmailAlreadyExistsDialog;
- (void)logUserDidSeeEmailAlreadyExistsDialog;
- (id)initWithLogger:(id)arg1 screenIdentifier:(id)arg2;

@end

