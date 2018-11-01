//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class CacheFileInfo, NSFileManager, NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;

@interface CacheLayerConnection : NSObject <NSStreamDelegate>
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *cacheFile;
    unsigned long long currentWrited;
    unsigned long long currentTotal;
    NSString *cacheFilePath;
    NSString *destinationPath;
    NSFileManager *fileManager;
    struct _NSRange writingRange;
    CacheFileInfo *fileInfo;
    NSMutableData *inputBuffer;
    NSMutableData *outputBuffer;
    _Bool hasSpaceAvailable;
    unsigned long long inputBufferCapacity;
    unsigned long long outputBufferCapacity;
    NSInputStream *inputStream;
    NSOutputStream *outputStream;
    _Bool isOpen;
    _Bool proxyIsOpen;
    NSInputStream *proxyInputStream;
    NSOutputStream *proxyOutputStream;
    NSMutableArray *proxyOutputQueue;
    _Bool proxyHasSpaceAvailable;
    double lastNotificationTime;
    id <CacheLayerConnectionDelegate> delegate;
    NSString *currentAID;
    NSString *currentOID;
}

@property(copy, nonatomic) NSString *currentOID; // @synthesize currentOID;
@property(copy, nonatomic) NSString *currentAID; // @synthesize currentAID;
@property(nonatomic) id <CacheLayerConnectionDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)sendCommandProxy:(id)arg1;
- (void)processOutputProxy;
- (void)processInputProxy;
- (void)closeProxy:(_Bool)arg1;
- (void)openProxyToHost:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendCommand:(id)arg1;
- (id)unionRanges:(id)arg1;
- (void)processOutput;
- (void)processInput;
- (void)close:(_Bool)arg1;
- (void)open;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

