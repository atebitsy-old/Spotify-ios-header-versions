//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCKSessionManagerListener-Protocol.h"
#import "GCKUIMediaButtonBarProtocol-Protocol.h"

@class GCKSessionManager, GCKUIDeviceVolumeController, GCKUIMediaController, GCKUIStyleAttributes, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface GCKUIButtonBarViewController : UIViewController <GCKSessionManagerListener, GCKUIMediaButtonBarProtocol>
{
    GCKSessionManager *_sessionManager;
    GCKUIMediaController *_mediaController;
    GCKUIDeviceVolumeController *_deviceVolumeController;
    NSMutableDictionary *_customButtons;
    NSMutableArray *_buttonTypes;
    NSArray *_buttonContainerViews;
    unsigned long long _buttonCount;
    GCKUIStyleAttributes *_styleAttributes;
}

- (void).cxx_destruct;
- (void)applyStyleAttributes;
- (id)customButtonAtIndex:(unsigned long long)arg1;
- (void)setCustomButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)buttonTypeAtIndex:(unsigned long long)arg1;
- (void)setButtonType:(long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)buttonCount;
- (void)installButtonAtIndex:(unsigned long long)arg1;
- (void)styleButtonAtIndex:(unsigned long long)arg1;
- (id)containerViewAtIndex:(unsigned long long)arg1;
- (id)createButtonWithType:(long long)arg1;
- (_Bool)isIndexValid:(unsigned long long)arg1;
- (void)initButtonContainers;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithButtonCount:(long long)arg1 styleAttributes:(id)arg2;
- (id)initWithButtonCount:(long long)arg1 styleAttributes:(id)arg2 mediaController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

