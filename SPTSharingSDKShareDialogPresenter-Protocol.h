//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTSharingSDKShareDialogPresenterData;

@protocol SPTSharingSDKShareDialogPresenter <NSObject>
- (void)presentShareDialogForDestination:(unsigned long long)arg1 shareableData:(id <SPTSharingSDKShareDialogPresenterData>)arg2 completionHandler:(void (^)(_Bool, NSError *, _Bool))arg3;
@end
