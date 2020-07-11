//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDView.h"

#import "IDHmiActionDelegate-Protocol.h"
#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDHmiAction, NSString;
@protocol IDLocationInputViewDelegate;

@interface IDLocationInputView : IDView <IDHmiActionDelegate, IDHmiServiceLifecycleProtocol>
{
    id <IDLocationInputViewDelegate> _locationInputViewDelegate;
    IDView *_targetView;
    IDHmiAction *_selectAction;
}

@property(retain, nonatomic) IDHmiAction *selectAction; // @synthesize selectAction=_selectAction;
@property(nonatomic) __weak IDView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) __weak id <IDLocationInputViewDelegate> locationInputViewDelegate; // @synthesize locationInputViewDelegate=_locationInputViewDelegate;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 info:(id)arg2;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 selectAction:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

