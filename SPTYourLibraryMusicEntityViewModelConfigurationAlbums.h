//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicEntityViewModelConfiguration-Protocol.h"

@class NSString;
@protocol SPTLocalSettings, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicEntityViewModelConfigurationAlbums : NSObject <SPTYourLibraryMusicEntityViewModelConfiguration>
{
    _Bool _collapsed;
    id <SPTLocalSettings> _localSettings;
    id <SPTYourLibraryMusicTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) _Bool collapsed; // @synthesize collapsed=_collapsed;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long trailingAccessoryType;
- (_Bool)readLocallyStoredCollapsedState;
- (void)persistCollapsed:(_Bool)arg1 forSection:(long long)arg2;
- (_Bool)showHeaderForSection:(unsigned long long)arg1;
- (_Bool)collapsedSection:(long long)arg1;
- (id)subtitleForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (_Bool)showSectionInModalMode:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long scrollIndexMinimumDisplayRowCount;
- (id)initWithLocalSettings:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

