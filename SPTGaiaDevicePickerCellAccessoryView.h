//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSIndexPath, SPTContextMenuAccessoryButton, SPTTheme;

@interface SPTGaiaDevicePickerCellAccessoryView : UIControl
{
    NSIndexPath *_indexPath;
    SPTContextMenuAccessoryButton *_contextMenuButton;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTContextMenuAccessoryButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupContextMenuButton;
- (id)initWithIndexPath:(id)arg1;

@end

