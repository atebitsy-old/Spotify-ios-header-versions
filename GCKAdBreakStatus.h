//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GCKAdBreakStatus : NSObject <NSCopying>
{
    double _currentAdBreakTime;
    double _currentAdBreakClipTime;
    NSString *_adBreakID;
    NSString *_adBreakClipID;
}

@property(retain, nonatomic) NSString *adBreakClipID; // @synthesize adBreakClipID=_adBreakClipID;
@property(retain, nonatomic) NSString *adBreakID; // @synthesize adBreakID=_adBreakID;
@property(nonatomic) double currentAdBreakClipTime; // @synthesize currentAdBreakClipTime=_currentAdBreakClipTime;
@property(nonatomic) double currentAdBreakTime; // @synthesize currentAdBreakTime=_currentAdBreakTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONObject:(id)arg1;

@end

