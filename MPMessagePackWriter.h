//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MPMessagePackWriter : NSObject
{
    NSMutableData *_data;
}

+ (id)writeObject:(id)arg1 options:(long long)arg2 error:(id *)arg3;
+ (id)writeObject:(id)arg1 error:(id *)arg2;
@property(retain) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)writeObject:(id)arg1 options:(long long)arg2 context:(struct cmp_ctx_s *)arg3 error:(id *)arg4;
- (_Bool)writeNumber:(id)arg1 context:(struct cmp_ctx_s *)arg2 error:(id *)arg3;
- (id)writeObject:(id)arg1 options:(long long)arg2 error:(id *)arg3;
- (unsigned long long)write:(const void *)arg1 count:(unsigned long long)arg2;

@end

