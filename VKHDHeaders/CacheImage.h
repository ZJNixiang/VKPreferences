//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperation, NSString, NSURL;

@interface CacheImage : NSObject
{
    NSString *_key;
    NSMutableArray *_imageViewArray;
    NSOperation *_loadOperation;
    NSURL *_imageUrl;
    long long _attempts;
    CDUnknownBlockType _completeBlock;
}

@property(copy) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property long long attempts; // @synthesize attempts=_attempts;
@property(retain) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain) NSOperation *loadOperation; // @synthesize loadOperation=_loadOperation;
@property(retain) NSMutableArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(copy) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)cancelAndClear;
- (void)callAndClear:(id)arg1 animated:(_Bool)arg2;
- (void)addImageView:(id)arg1;

@end

