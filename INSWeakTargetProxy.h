//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject;

@interface INSWeakTargetProxy : NSProxy
{
    Class _targetClass;
    NSObject *_target;
}

+ (id)proxyWithTarget:(id)arg1;
@property(readonly, nonatomic) __weak NSObject *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1;

@end

