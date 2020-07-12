//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareEntityData-Protocol.h"

@class NSArray, NSString, NSURL, UIImage;

@interface SPTShareEntityDataImplementation : NSObject <SPTShareEntityData>
{
    NSURL *_itemURI;
    NSURL *_itemContextSourceURI;
    NSString *_itemName;
    NSString *_creatorName;
    NSString *_sourceName;
    NSURL *_itemImageURL;
    long long _itemType;
    NSString *_clipboardLinkTitle;
    NSString *_logContext;
    UIImage *_fullscreenBackgroundImage;
    NSString *_freeText;
    NSArray *_extraQueryItems;
    unsigned long long _capability;
}

@property(readonly, nonatomic) unsigned long long capability; // @synthesize capability=_capability;
@property(readonly, nonatomic) NSArray *extraQueryItems; // @synthesize extraQueryItems=_extraQueryItems;
@property(readonly, nonatomic) NSString *freeText; // @synthesize freeText=_freeText;
@property(readonly, nonatomic) UIImage *fullscreenBackgroundImage; // @synthesize fullscreenBackgroundImage=_fullscreenBackgroundImage;
@property(readonly, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) NSString *clipboardLinkTitle; // @synthesize clipboardLinkTitle=_clipboardLinkTitle;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) NSURL *itemImageURL; // @synthesize itemImageURL=_itemImageURL;
@property(readonly, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(readonly, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, nonatomic) NSURL *itemContextSourceURI; // @synthesize itemContextSourceURI=_itemContextSourceURI;
@property(readonly, nonatomic) NSURL *itemURI; // @synthesize itemURI=_itemURI;
- (void).cxx_destruct;
- (id)initWithItemURI:(id)arg1 contextSourceURI:(id)arg2 itemName:(id)arg3 creatorName:(id)arg4 sourceName:(id)arg5 itemImageURL:(id)arg6 itemType:(long long)arg7 clipboardLinkTitle:(id)arg8 logContext:(id)arg9 fullscreenBackgroundImage:(id)arg10 freeText:(id)arg11 extraQueryItems:(id)arg12 capability:(unsigned long long)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

