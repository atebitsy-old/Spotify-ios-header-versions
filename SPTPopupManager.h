//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SPTPopupDialog, SPTPopupWindow;
@protocol SPTPopupTheme;

@interface SPTPopupManager : NSObject
{
    id <SPTPopupTheme> _theme;
    SPTPopupWindow *_window;
    NSMutableArray *_presentationQueue;
    SPTPopupDialog *_presentedPopup;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTPopupDialog *presentedPopup; // @synthesize presentedPopup=_presentedPopup;
@property(readonly, nonatomic) NSMutableArray *presentationQueue; // @synthesize presentationQueue=_presentationQueue;
@property(retain, nonatomic) SPTPopupWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) id <SPTPopupTheme> theme; // @synthesize theme=_theme;
- (void)loadWindow;
- (void)dismissPresentedPopupDialogAndClearQueue:(_Bool)arg1 animate:(_Bool)arg2;
- (void)dismissPopupDialog:(id)arg1 animate:(_Bool)arg2;
- (void)dismissPopupDialog:(id)arg1 animate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissPopupDialog:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPopupDialog:(id)arg1;
- (_Bool)presentPopupDialog:(id)arg1;
- (void)presentNextQueuedPopup;
- (void)changePopupDialog:(id)arg1 toNewState:(long long)arg2;
- (void)didDismissPopup:(id)arg1;
- (void)willDismissPopup:(id)arg1;
- (void)didPresentPopup:(id)arg1;
- (void)willPresentPopup:(id)arg1;
- (_Bool)isPresentingPopup:(id)arg1;
- (_Bool)isPresentingPopup;
- (id)init;

@end

