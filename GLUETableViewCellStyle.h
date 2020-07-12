//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface GLUETableViewCellStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    UIColor *_selectedBackgroundColor;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    UIFont *_titleTextFont;
    UIFont *_subtitleTextFont;
    struct CGSize _preferredSize;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *subtitleTextFont; // @synthesize subtitleTextFont=_subtitleTextFont;
@property(retain, nonatomic) UIFont *titleTextFont; // @synthesize titleTextFont=_titleTextFont;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

