//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface FBCrypto : NSObject
{
    NSData *_encryptionKeyData;
    NSData *_macKeyData;
}

+ (id)randomBytes:(unsigned long long)arg1;
+ (id)makeMasterKey;
- (id)decrypt:(id)arg1 additionalSignedData:(id)arg2;
- (id)encrypt:(id)arg1 additionalDataToSign:(id)arg2;
- (id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3;
- (void)dealloc;
- (id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2;
- (id)initWithMasterKey:(id)arg1;

@end

