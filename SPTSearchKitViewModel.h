//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class SPTHubsKitViewModel;

@interface SPTSearchKitViewModel : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _updating;
    SPTHubsKitViewModel *_hubsViewModel;
}

@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(copy, nonatomic) SPTHubsKitViewModel *hubsViewModel; // @synthesize hubsViewModel=_hubsViewModel;
- (void).cxx_destruct;
- (_Bool)isEqualToViewModel:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHubsViewModel:(id)arg1 updating:(_Bool)arg2;

@end

