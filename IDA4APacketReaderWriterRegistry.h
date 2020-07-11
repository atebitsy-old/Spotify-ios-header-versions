//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDA4AProtocol, NSLock, NSMapTable;
@protocol IDA4APacketWriter;

@interface IDA4APacketReaderWriterRegistry : NSObject
{
    IDA4AProtocol *_a4aProtocol;
    NSMapTable *_readers;
    id <IDA4APacketWriter> _writer;
    NSLock *_packetReaderLock;
    struct _NSRange _validConnectionIds;
}

@property struct _NSRange validConnectionIds; // @synthesize validConnectionIds=_validConnectionIds;
@property(readonly) NSLock *packetReaderLock; // @synthesize packetReaderLock=_packetReaderLock;
@property __weak id <IDA4APacketWriter> writer; // @synthesize writer=_writer;
@property(retain) NSMapTable *readers; // @synthesize readers=_readers;
@property(retain) IDA4AProtocol *a4aProtocol; // @synthesize a4aProtocol=_a4aProtocol;
- (void).cxx_destruct;
- (struct _NSRange)connectionIdRangeForProtocol:(id)arg1;
- (long long)nextAvailableConnectionId;
- (void)registerA4AProtocol:(id)arg1;
- (void)registerA4APacketWriter:(id)arg1;
- (void)deregisterA4APacketReader:(id)arg1;
- (void)registerA4APacketReader:(id)arg1;
- (id)init;

@end

