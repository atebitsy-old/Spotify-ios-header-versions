//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString;

@interface SPTPremiumDestinationUIOfferCardStyle : NSObject <GLUEStyle>
{
    double _contentViewCornerRadius;
    struct UIEdgeInsets _offerCardInsets;
    struct UIEdgeInsets _childComponentViewInsets;
}

@property(nonatomic) double contentViewCornerRadius; // @synthesize contentViewCornerRadius=_contentViewCornerRadius;
@property(nonatomic) struct UIEdgeInsets childComponentViewInsets; // @synthesize childComponentViewInsets=_childComponentViewInsets;
@property(nonatomic) struct UIEdgeInsets offerCardInsets; // @synthesize offerCardInsets=_offerCardInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

