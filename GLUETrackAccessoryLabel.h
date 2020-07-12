//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "GLUEStyleable-Protocol.h"

@class GLUETrackAccessoryLabelStyle, NSString;

@interface GLUETrackAccessoryLabel : UILabel <GLUEStyleable>
{
    long long _type;
    GLUETrackAccessoryLabelStyle *_style;
}

+ (long long)trackAccessoryLabelTypeFromExplicit:(_Bool)arg1 premium:(_Bool)arg2 prefersLongType:(_Bool)arg3;
+ (long long)trackAccessoryLabelTypeFromExplicit:(_Bool)arg1 premium:(_Bool)arg2;
+ (id)explicitLongLabel;
+ (id)explicitLabel;
+ (id)premiumLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) GLUETrackAccessoryLabelStyle *style; // @synthesize style=_style;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)setHighlighted:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

