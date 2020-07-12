//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentLayoutManager-Protocol.h"

@protocol HUBComponentLayoutManager;

@interface SPTSearchHubLayoutManager : NSObject <HUBComponentLayoutManager>
{
    id <HUBComponentLayoutManager> _superLayoutManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HUBComponentLayoutManager> superLayoutManager; // @synthesize superLayoutManager=_superLayoutManager;
- (double)verticalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(id)arg1 andHeaderComponentWithLayoutTraits:(id)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(id)arg1 andContentEdge:(unsigned long long)arg2;
- (double)horizontalOffsetForComponentsWithLayoutTraits:(id)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)horizontalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)containerMaxWidthForComponentWithLayoutTraits:(id)arg1;
- (unsigned long long)containerAlignmentForComponentWithLayoutTraits:(id)arg1;
- (id)initWithLayoutManager:(id)arg1;

@end

