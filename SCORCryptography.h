//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCORCryptography : NSObject
{
}

+ (id)md5:(id)arg1;
+ (id)dataFromBase64String:(id)arg1;
+ (id)getX509FormattedPublicKey:(id)arg1;
+ (id)getPEMFormattedPrivateKey:(id)arg1;
+ (void)removeKey:(id)arg1;
+ (void)setPrivateKey:(id)arg1 tag:(id)arg2;
+ (void)setPublicKey:(id)arg1 tag:(id)arg2;
+ (id)encryptRSA:(id)arg1 key:(id)arg2;
+ (id)encryptRSA:(id)arg1;
+ (id)decryptRSA:(id)arg1 key:(id)arg2;

@end

