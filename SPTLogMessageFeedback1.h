//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageFeedback1 : SPTLogMessage
{
    NSString *_trackUriValue;
    NSString *_contextUriValue;
    NSString *_viewUriValue;
    NSString *_typeValue;
    NSString *_actionValue;
}

+ (id)messageWithTrackUri:(id)arg1 contextUri:(id)arg2 viewUri:(id)arg3 type:(id)arg4 action:(id)arg5;
@property(copy, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(copy, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
@property(copy, nonatomic) NSString *viewUriValue; // @synthesize viewUriValue=_viewUriValue;
@property(copy, nonatomic) NSString *contextUriValue; // @synthesize contextUriValue=_contextUriValue;
@property(copy, nonatomic) NSString *trackUriValue; // @synthesize trackUriValue=_trackUriValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

