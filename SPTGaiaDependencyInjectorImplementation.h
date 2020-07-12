//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDependencyInjector-Protocol.h"

@class NSString, UIView;
@protocol SPTGaiaDevicePickerExternalPresenter, SPTGaiaDevicePickerURIHandler, SPTGaiaDevicePickerViewFactory;

@interface SPTGaiaDependencyInjectorImplementation : NSObject <SPTGaiaDependencyInjector>
{
    UIView *_injectedVolumeSliderView;
    id <SPTGaiaDevicePickerURIHandler> _injectedURIHandler;
    id <SPTGaiaDevicePickerExternalPresenter> _injectedDevicePickerPresenter;
    id <SPTGaiaDevicePickerViewFactory> _injectedViewFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTGaiaDevicePickerViewFactory> injectedViewFactory; // @synthesize injectedViewFactory=_injectedViewFactory;
@property(retain, nonatomic) id <SPTGaiaDevicePickerExternalPresenter> injectedDevicePickerPresenter; // @synthesize injectedDevicePickerPresenter=_injectedDevicePickerPresenter;
@property(retain, nonatomic) id <SPTGaiaDevicePickerURIHandler> injectedURIHandler; // @synthesize injectedURIHandler=_injectedURIHandler;
- (void)injectDevicePickerPresenter:(id)arg1;
- (void)injectDevicePickerURIHandler:(id)arg1;
@property(readonly, nonatomic) UIView *injectedVolumeSliderView; // @synthesize injectedVolumeSliderView=_injectedVolumeSliderView;
- (void)injectVolumeSliderViewWithFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

