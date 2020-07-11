//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, UIImage;
@protocol SPTShareEntityData;

@protocol SPTShareEntityDataFactory <NSObject>
- (id <SPTShareEntityData>)provideLinkEntityDataWithItemURI:(NSURL *)arg1 itemType:(long long)arg2 contextSourceURI:(NSURL *)arg3 logContext:(NSString *)arg4 extraQueryItems:(NSArray *)arg5;
- (id <SPTShareEntityData>)provideMessageEntityDataWithItemURI:(NSURL *)arg1 itemType:(long long)arg2 contextSourceURI:(NSURL *)arg3 text:(NSString *)arg4 logContext:(NSString *)arg5 extraQueryItems:(NSArray *)arg6;
- (id <SPTShareEntityData>)provideStoryEntityDataWithItemURI:(NSURL *)arg1 itemType:(long long)arg2 contextSourceURI:(NSURL *)arg3 backgroundImage:(UIImage *)arg4 logContext:(NSString *)arg5 extraQueryItems:(NSArray *)arg6;
- (id <SPTShareEntityData>)provideEntityDataWithItemURI:(NSURL *)arg1 contextSourceURI:(NSURL *)arg2 itemName:(NSString *)arg3 creatorName:(NSString *)arg4 sourceName:(NSString *)arg5 imageURL:(NSURL *)arg6 itemType:(long long)arg7 clipboardLinkTitle:(NSString *)arg8 logContext:(NSString *)arg9;
@end

