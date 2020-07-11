//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTContextMenuHeader-Protocol.h"

@class NSArray, NSString, NSURL, SPTScannablesDependencies, SPTScannablesImageView, UILabel;

@interface SPTScannablesContextMenuHeaderView : UIView <SPTContextMenuHeader>
{
    NSString *_title;
    NSString *_headerSubtitle;
    SPTScannablesDependencies *_dependencies;
    NSArray *_layoutConstraints;
    SPTScannablesImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) SPTScannablesImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)preferredImageSize;
- (double)preferredHeight;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 entityURL:(id)arg3 imageURL:(id)arg4 dataSource:(id)arg5 onboardingPresenter:(id)arg6 authorizationRequester:(id)arg7 dependencies:(id)arg8 alertController:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURL *headerImageURL;
@property(readonly) Class superclass;

@end

