//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTSharingSDKImageSaver, SPTSharingSDKPermissionManager;

@interface SPTSharingSDKPhotosAlbumManager : NSObject
{
    SPTSharingSDKPermissionManager *_permissionManager;
    SPTSharingSDKImageSaver *_imageSaver;
    CDUnknownBlockType _saveImageCompletion;
}

+ (id)permissionDeniedOrRestricted;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType saveImageCompletion; // @synthesize saveImageCompletion=_saveImageCompletion;
@property(readonly, nonatomic) SPTSharingSDKImageSaver *imageSaver; // @synthesize imageSaver=_imageSaver;
@property(readonly, nonatomic) SPTSharingSDKPermissionManager *permissionManager; // @synthesize permissionManager=_permissionManager;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToPhotosAlbum:(id)arg1;
- (void)requestForPermissionThenTryToSaveImage:(id)arg1;
- (void)saveImageCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)saveImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPermissionManager:(id)arg1 imageSaver:(id)arg2;

@end
