//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VISREFHeaderSizeCalculator : NSObject
{
}

+ (double)calculateFullBleedHeaderHeightWithWindowSize:(struct CGSize)arg1 traitCollection:(id)arg2 hasDescription:(_Bool)arg3 hasCreatorRow:(_Bool)arg4;
+ (double)calculateHeaderHeightWithWindowSize:(struct CGSize)arg1 traitCollection:(id)arg2 hasDescription:(_Bool)arg3 hasCreatorRow:(_Bool)arg4;
+ (_Bool)useMediumHeaderForFullBleed:(struct CGSize)arg1;
+ (_Bool)useMediumHeader:(struct CGSize)arg1;
+ (_Bool)useSmallHeader:(struct CGSize)arg1;

@end

