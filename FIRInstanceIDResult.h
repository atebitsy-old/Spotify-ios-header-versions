//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FIRInstanceIDResult : NSObject <NSCopying>
{
    NSString *_instanceID;
    NSString *_token;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *instanceID; // @synthesize instanceID=_instanceID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

