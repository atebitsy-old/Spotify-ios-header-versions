//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTFilePickerFilterBarDelegate-Protocol.h"
#import "SPTFilePickerItemCell-Protocol.h"
#import "SPTFilePickerSectionModelDelegate-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEntityRowStyle, NSMutableDictionary, NSString, SPTFilePickerFilterBar, SPTFilePickerSectionModel, SPTInfoView, SPTLocalFilesLogger, SPTTableView;
@protocol SPTImageLoader;

@interface SPTFilePickerSectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPTFilePickerItemCell, SPTImageLoaderDelegate, SPTFilePickerFilterBarDelegate, SPTFilePickerSectionModelDelegate, SPContentInsetViewController>
{
    SPTTableView *_tableView;
    SPTFilePickerSectionModel *_model;
    SPTInfoView *_infoView;
    id <SPTImageLoader> _imageLoader;
    SPTFilePickerFilterBar *_filterBar;
    NSMutableDictionary *_imagesForIndexPaths;
    SPTLocalFilesLogger *_logger;
    unsigned long long _sectionIndex;
    GLUEEntityRowStyle *_rowStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GLUEEntityRowStyle *rowStyle; // @synthesize rowStyle=_rowStyle;
@property(readonly, nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(readonly, nonatomic) SPTLocalFilesLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSMutableDictionary *imagesForIndexPaths; // @synthesize imagesForIndexPaths=_imagesForIndexPaths;
@property(retain, nonatomic) SPTFilePickerFilterBar *filterBar; // @synthesize filterBar=_filterBar;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTFilePickerSectionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (void)sectionModelDidUpdate:(id)arg1;
- (void)filterBarContextButtonTapped:(id)arg1;
- (void)filterBar:(id)arg1 textDidChange:(id)arg2;
- (void)filterBarTextDidBeginEditing:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)sp_updateContentInsets;
- (void)updateInfoView;
- (void)reload;
- (void)filePickerItemCell:(id)arg1 didDeselectItem:(id)arg2;
- (void)filePickerItemCell:(id)arg1 didSelectItem:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (unsigned long long)selectionModeForItemAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 imageLoader:(id)arg2 logger:(id)arg3 sectionIndex:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

