//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTTheme, UIColor, UIImage;

@interface SPTPartnerActiveSessionBannerViewModel : NSObject
{
    UIColor *_backgroundColor;
    UIImage *_iconImage;
    double _bannerHeight;
    SPTTheme *_theme;
    NSString *_bannerText;
    NSString *_bannerSubText;
    long long _textAlignment;
    NSString *_accessibilityText;
    struct CGSize _iconImageSize;
}

@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *bannerSubText; // @synthesize bannerSubText=_bannerSubText;
@property(copy, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(nonatomic) struct CGSize iconImageSize; // @synthesize iconImageSize=_iconImageSize;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)init;

@end

