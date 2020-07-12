//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCanvasModel;

@interface SPTCanvasImageResolverContext : NSObject
{
    long long _resolverType;
    CDUnknownBlockType _completionBlock;
    id <SPTCanvasModel> _canvasModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTCanvasModel> canvasModel; // @synthesize canvasModel=_canvasModel;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) long long resolverType; // @synthesize resolverType=_resolverType;
- (id)initWithResolverType:(long long)arg1 canvasModel:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

