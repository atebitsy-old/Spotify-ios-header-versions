//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIColor, UIImage;
@protocol SPTShareEntityData, SPTSocialListeningViewModelObserver;

@protocol SPTSocialListeningViewModel <NSObject>
@property(readonly, nonatomic) id <SPTShareEntityData> shareEntityData;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) _Bool shareLinkButtonHidden;
@property(readonly, nonatomic) _Bool scanCodeButtonHidden;
@property(readonly, nonatomic) _Bool leaveButtonHidden;
@property(readonly, nonatomic) _Bool tryAgainViewHidden;
@property(readonly, copy, nonatomic) NSString *tryAgainLabelText;
@property(readonly, nonatomic) unsigned long long numberOfOverflowUsers;
@property(readonly, nonatomic) unsigned long long numberOfVisibleUsers;
@property(readonly, nonatomic) _Bool scannablesImageHidden;
@property(readonly, nonatomic) _Bool scannableViewHidden;
@property(readonly, copy, nonatomic) NSArray *connectedUsers;
@property(readonly, copy, nonatomic) UIColor *sessionColor;
@property(readonly, copy, nonatomic) UIImage *scannablesImage;
@property(readonly, copy, nonatomic) NSString *leaveButtonText;
@property(readonly, copy, nonatomic) NSString *descriptionLabelText;
@property(readonly, copy, nonatomic) NSString *headerLabelText;
- (void)removeObserver:(id <SPTSocialListeningViewModelObserver>)arg1;
- (void)addObserver:(id <SPTSocialListeningViewModelObserver>)arg1;
@property(readonly, nonatomic) unsigned long long numberOfUsers;
- (void)navigateToUserProfilePage:(NSString *)arg1;
- (void)leaveOrDeleteSession;
- (void)load;
@end

