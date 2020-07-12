//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulStyle.h"

@class GLUEImageStyle, SPTSearchUILabelStyle;

@interface SPTSearchUICardStyle : GLUEStatefulStyle
{
    SPTSearchUILabelStyle *_titleLabelStyle;
    GLUEImageStyle *_imageStyle;
    struct UIEdgeInsets _titleInsets;
}

+ (id)makeUIStatesToStylesWithTheme:(id)arg1;
+ (id)defaultStyleWithTheme:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets titleInsets; // @synthesize titleInsets=_titleInsets;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) SPTSearchUILabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUIStatesToStyles:(id)arg1 titleLabelStyle:(id)arg2 imageStyle:(id)arg3 titleInsets:(struct UIEdgeInsets)arg4;

@end

