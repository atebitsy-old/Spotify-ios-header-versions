//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTSocialListeningGLUETheme, SPTSocialListeningSessionViewUserCellStyle;
@protocol GLUEImageLoader;

@interface SPTSocialListeningSessionViewUserCellConfigurator : NSObject
{
    id <GLUEImageLoader> _glueImageLoader;
    SPTSocialListeningGLUETheme *_theme;
    SPTSocialListeningSessionViewUserCellStyle *_cellStyle;
}

@property(retain, nonatomic) SPTSocialListeningSessionViewUserCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2;

@end

