//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HUBComponentViewAccessibility-Protocol.h"

@class NSString;
@protocol HUBComponent, HUBComponentModel;

@interface HUBComponentView : UIView <HUBComponentViewAccessibility>
{
    id <HUBComponentModel> _model;
    id <HUBComponent> _component;
}

@property(retain, nonatomic) id <HUBComponent> component; // @synthesize component=_component;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (struct CGSize)preferredSizeForContainerViewSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)hub_setupAccessibility;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

