//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandModelBuilder-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString;

@interface HUBCommandModelBuilderImplementation : NSObject <HUBCommandModelBuilder, NSCopying>
{
    NSString *_name;
    NSMutableDictionary *_data;
}

@property(readonly, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (id)build;
- (id)init;

@end

