//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTRequestLifetime : NSObject
{
    _Bool _acquired;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) _Bool acquired; // @synthesize acquired=_acquired;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)acquire;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1;

@end

