//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSAttributedString, NSString, SPTEncoreTypeStyle, UIColor, UITapGestureRecognizer, UITextView;
@protocol VISREFExpandableTextViewDelegate;

@interface VISREFExpandableTextView : UIView <UIGestureRecognizerDelegate>
{
    id <VISREFExpandableTextViewDelegate> _delegate;
    SPTEncoreTypeStyle *_typeStyle;
    SPTEncoreTypeStyle *_truncationTextTypeStyle;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSAttributedString *_attributedTruncationText;
    UIColor *_textColor;
    UIColor *_truncationTextColor;
    UITextView *_textView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct _NSRange _truncationTextRange;
}

+ (long long)numberOfLinesForAttributedText:(id)arg1 inSize:(struct CGSize)arg2;
+ (id)truncatedText:(id)arg1 truncationText:(id)arg2 toNumberOfLines:(unsigned long long)arg3 inSize:(struct CGSize)arg4;
@property(nonatomic) struct _NSRange truncationTextRange; // @synthesize truncationTextRange=_truncationTextRange;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIColor *truncationTextColor; // @synthesize truncationTextColor=_truncationTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSAttributedString *attributedTruncationText; // @synthesize attributedTruncationText=_attributedTruncationText;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) SPTEncoreTypeStyle *truncationTextTypeStyle; // @synthesize truncationTextTypeStyle=_truncationTextTypeStyle;
@property(retain, nonatomic) SPTEncoreTypeStyle *typeStyle; // @synthesize typeStyle=_typeStyle;
@property(nonatomic) __weak id <VISREFExpandableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)truncationTextAttributes;
- (id)textAttributes;
- (void)configureTextView;
- (void)didTapTextView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(nonatomic) unsigned long long numberOfLines;
- (id)defaultAttributedTruncationText;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

