//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginDialogController, SPTLoginMagicLinkRequestWarningDialogLogger;

@interface SPTLoginMagicLinkRequestWarningPresenter : NSObject
{
    SPTLoginDialogController *_dialogController;
    SPTLoginMagicLinkRequestWarningDialogLogger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTLoginMagicLinkRequestWarningDialogLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
- (void)presentMagicLinkRequestWarning:(CDUnknownBlockType)arg1;
- (id)initWithDialogController:(id)arg1 logger:(id)arg2;

@end

