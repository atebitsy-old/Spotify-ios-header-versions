//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdPreviewToolPreview-Protocol.h"

@class NSArray, NSString;

@interface SPTAdPreviewToolOrder : NSObject <SPTAdPreviewToolPreview>
{
    NSString *_name;
    long long _identifier;
    long long _type;
    NSArray *_lineItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithIdentifier:(long long)arg1 lineItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

