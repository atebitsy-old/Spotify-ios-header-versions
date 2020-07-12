//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class SPTPremiumDestinationUIGLUETheme, SPTPremiumDestinationUILegalTextStyle, SPTPremiumDestinationUILegalTextView, UITapGestureRecognizer;
@protocol HUBComponentEventHandler;

@interface SPTPremiumDestinationUIPrimaryLegalTextComponentView : HUBComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTPremiumDestinationUIGLUETheme *_theme;
    SPTPremiumDestinationUILegalTextStyle *_style;
    SPTPremiumDestinationUILegalTextView *_legalTextView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) SPTPremiumDestinationUILegalTextView *legalTextView; // @synthesize legalTextView=_legalTextView;
@property(retain, nonatomic) SPTPremiumDestinationUILegalTextStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)tapGestureRecognized:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)addTapGestureRecognizer;
- (void)addLayoutConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

