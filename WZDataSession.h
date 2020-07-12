//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet, NSString;
@protocol WZDataSessionDelegate;

@interface WZDataSession : NSObject
{
    NSMutableSet *_readSources;
    NSMutableSet *_listenSources;
    NSMutableSet *_writeSources;
    _Bool _isConnected;
    int _localPort;
    int _serverPort;
    NSData *_ivData;
    NSData *_keyData;
    id <WZDataSessionDelegate> _delegate;
}

+ (id)randomDataWithSize:(unsigned long long)arg1;
+ (_Bool)validateKeyData:(id)arg1 initializationVector:(id)arg2;
@property(nonatomic) __weak id <WZDataSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(retain, nonatomic) NSData *ivData; // @synthesize ivData=_ivData;
@property(nonatomic) int serverPort; // @synthesize serverPort=_serverPort;
@property(nonatomic) int localPort; // @synthesize localPort=_localPort;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void).cxx_destruct;
- (void)scheduleConnectionMonitor;
- (void)cancelConnectionMonitorRequest;
- (void)setConnected:(_Bool)arg1 wazeVersion:(id)arg2;
- (void)addSource:(id)arg1 toSet:(id)arg2;
- (void)removeSource:(id)arg1 fromSet:(id)arg2;
- (void)handleReceivedData:(id)arg1;
- (id)decryptMessage:(id)arg1;
- (id)encryptMessage:(id)arg1;
- (void)terminate;
- (void)sendDict:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendDict:(id)arg1;
- (void)monitorChanges;
@property(readonly, nonatomic) _Bool canSendData;
@property(readonly, copy, nonatomic) NSString *initializationVector;
@property(readonly, copy, nonatomic) NSString *key;
- (id)initWithDelegate:(id)arg1 keyData:(id)arg2 initializationVector:(id)arg3 serverPort:(int)arg4;
- (id)initWithDelegate:(id)arg1;

@end
