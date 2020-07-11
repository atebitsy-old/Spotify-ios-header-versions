//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUELabel, NSString;
@protocol GLUETheme;

@interface SPTHomeUISectionHeaderView : UIView
{
    GLUELabel *_titleLabel;
    id <GLUETheme> _theme;
    unsigned long long _type;
}

+ (id)titleLabelAttributesForTheme:(id)arg1;
+ (double)verticalMarginsForType:(unsigned long long)arg1 theme:(id)arg2;
+ (double)heightForSectionHeaderWithTitle:(id)arg1 containerWidth:(double)arg2 theme:(id)arg3 type:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)applyTitleLabelStyle;
@property(copy, nonatomic) NSString *title;
- (id)habitsConstraintsForTitleLabel:(id)arg1;
- (id)defaultConstraintsForTitleLabel:(id)arg1;
- (id)titleLabel:(id)arg1 constraintsForType:(unsigned long long)arg2;
- (void)constrainTitleLabel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 type:(unsigned long long)arg3;

@end

