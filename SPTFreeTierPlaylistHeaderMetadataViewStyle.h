//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString;

@interface SPTFreeTierPlaylistHeaderMetadataViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_lastModifiedAndDurationLabelStyle;
    GLUELabelStyle *_metadataLabelStyle;
    GLUEButtonStyle *_ownerButtonStyle;
}

@property(retain, nonatomic) GLUEButtonStyle *ownerButtonStyle; // @synthesize ownerButtonStyle=_ownerButtonStyle;
@property(retain, nonatomic) GLUELabelStyle *metadataLabelStyle; // @synthesize metadataLabelStyle=_metadataLabelStyle;
@property(retain, nonatomic) GLUELabelStyle *lastModifiedAndDurationLabelStyle; // @synthesize lastModifiedAndDurationLabelStyle=_lastModifiedAndDurationLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

