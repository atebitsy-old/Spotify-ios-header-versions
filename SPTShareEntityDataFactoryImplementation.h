//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareEntityDataFactory-Protocol.h"

@class NSString;

@interface SPTShareEntityDataFactoryImplementation : NSObject <SPTShareEntityDataFactory>
{
}

- (id)provideLinkEntityDataWithItemURI:(id)arg1 itemType:(long long)arg2 contextSourceURI:(id)arg3 logContext:(id)arg4 extraQueryItems:(id)arg5;
- (id)provideMessageEntityDataWithItemURI:(id)arg1 itemType:(long long)arg2 contextSourceURI:(id)arg3 text:(id)arg4 logContext:(id)arg5 extraQueryItems:(id)arg6;
- (id)provideImageStoryEntityDataWithItemURI:(id)arg1 itemType:(long long)arg2 contextSourceURI:(id)arg3 backgroundImage:(id)arg4 logContext:(id)arg5 extraQueryItems:(id)arg6;
- (id)provideVideoStoryEntityDataWithItemURI:(id)arg1 itemType:(long long)arg2 contextSourceURI:(id)arg3 logContext:(id)arg4 extraQueryItems:(id)arg5;
- (id)provideEntityDataWithItemURI:(id)arg1 contextSourceURI:(id)arg2 text:(id)arg3 itemName:(id)arg4 creatorName:(id)arg5 sourceName:(id)arg6 imageURL:(id)arg7 itemType:(long long)arg8 clipboardLinkTitle:(id)arg9 logContext:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

