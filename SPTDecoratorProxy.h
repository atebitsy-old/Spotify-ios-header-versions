//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@interface SPTDecoratorProxy : NSProxy
{
    struct objc_method **_methods;
    unsigned int _methodCount;
    id *_conformedProtocols;
    unsigned int _protocolCount;
    id _decoratedObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id decoratedObject; // @synthesize decoratedObject=_decoratedObject;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)pose;
- (void)dealloc;
- (id)initWithDecoratedObject:(id)arg1;

@end

