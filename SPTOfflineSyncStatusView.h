//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView;

@interface SPTOfflineSyncStatusView : UIView
{
    _Bool _requiresIconUpdate;
    long long _status;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
}

+ (id)accessibilityLabelForStatus:(long long)arg1;
+ (id)offlineSyncStatusView;
- (void).cxx_destruct;
@property(nonatomic) _Bool requiresIconUpdate; // @synthesize requiresIconUpdate=_requiresIconUpdate;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)accessibilityLabel;
- (void)layoutSubviews;

@end

