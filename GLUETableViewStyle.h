//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor;

@interface GLUETableViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    double _rowHeight;
    double _estimatedRowHeight;
    long long _separatorStyle;
    UIColor *_separatorColor;
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) double estimatedRowHeight; // @synthesize estimatedRowHeight=_estimatedRowHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTableViewStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

