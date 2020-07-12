//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTDrivingModeLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logInteractionWithType:(id)arg1 sectionId:(id)arg2 intent:(id)arg3 pageUri:(id)arg4 itemIndex:(int)arg5;
- (void)logDismissCoachMarks;
- (void)logSelectScrollPivotListWithSectionId:(id)arg1 itemIndex:(int)arg2;
- (void)logScrollPivotListWithSectionId:(id)arg1 itemIndex:(int)arg2;
- (void)logClosePivotButtonInteractionWithItemIndex:(int)arg1;
- (void)logOpenPivotButtonInteraction;
- (void)logCarViewEnabledInSettingsChanged:(_Bool)arg1;
- (void)logDisableDrivingModeButtonInteraction;
- (void)logDrivingModeContextMenuOpenButtonInteraction;
- (void)logDrivingModeContextMenuCancelButtonInteraction;
- (id)initWithLogCenter:(id)arg1;

@end

