//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GLUENavigationRow-Protocol.h"

@class GLUELabel, GLUENavigationRowView, NSString;

@interface GLUENavigationTableViewCell : UITableViewCell <GLUENavigationRow>
{
    GLUENavigationRowView *_rowView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GLUENavigationRowView *rowView; // @synthesize rowView=_rowView;
- (void)glue_applyStyle:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) unsigned long long state;
@property(nonatomic) long long icon;
@property(readonly, nonatomic) GLUELabel *titleLabel;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

