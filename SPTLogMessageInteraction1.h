//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInteraction1 : SPTLogMessage
{
    NSString *_interactionIdValue;
    NSString *_itemIdValue;
    NSString *_typeValue;
    NSString *_intentValue;
    NSString *_pageIdentifierValue;
    NSString *_pageUriValue;
}

+ (id)messageWithInteractionId:(id)arg1 itemId:(id)arg2 type:(id)arg3 intent:(id)arg4 pageIdentifier:(id)arg5 pageUri:(id)arg6;
@property(copy, nonatomic) NSString *pageUriValue; // @synthesize pageUriValue=_pageUriValue;
@property(copy, nonatomic) NSString *pageIdentifierValue; // @synthesize pageIdentifierValue=_pageIdentifierValue;
@property(copy, nonatomic) NSString *intentValue; // @synthesize intentValue=_intentValue;
@property(copy, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
@property(copy, nonatomic) NSString *itemIdValue; // @synthesize itemIdValue=_itemIdValue;
@property(copy, nonatomic) NSString *interactionIdValue; // @synthesize interactionIdValue=_interactionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

