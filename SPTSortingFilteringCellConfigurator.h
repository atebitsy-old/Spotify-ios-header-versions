//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTSortingFilteringGLUETheme, SPTSortingFilteringRuleTableViewCellStyle;

@interface SPTSortingFilteringCellConfigurator : NSObject
{
    SPTSortingFilteringGLUETheme *_theme;
    SPTSortingFilteringRuleTableViewCellStyle *_cellStyle;
}

@property(retain, nonatomic) SPTSortingFilteringRuleTableViewCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) SPTSortingFilteringGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2 atIndexPath:(id)arg3;
- (double)preferredCellHeight;
- (id)initWithTheme:(id)arg1;

@end

