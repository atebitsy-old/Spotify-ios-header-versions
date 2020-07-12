//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SettingsSwitchTableViewCell;
@protocol SPTPreferences;

@interface SPTAutomixSettingsSection : SettingsSection
{
    id <SPTPreferences> _preferences;
    SettingsSwitchTableViewCell *_cell;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)automixChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 preferences:(id)arg2;

@end

