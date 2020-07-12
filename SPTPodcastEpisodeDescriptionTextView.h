//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, NSURL, SPTPodcastEpisodeDescriptionTextViewStyle;

@interface SPTPodcastEpisodeDescriptionTextView : UITextView <GLUEStyleable>
{
    NSURL *_episodeURL;
    double _episodeDuration;
    NSString *_originalText;
    double _lineHeight;
    SPTPodcastEpisodeDescriptionTextViewStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPodcastEpisodeDescriptionTextViewStyle *style; // @synthesize style=_style;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) double episodeDuration; // @synthesize episodeDuration=_episodeDuration;
@property(copy, nonatomic) NSURL *episodeURL; // @synthesize episodeURL=_episodeURL;
- (id)collapsedStringEnding;
- (void)glue_applyStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

