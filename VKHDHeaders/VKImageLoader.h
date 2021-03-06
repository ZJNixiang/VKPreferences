//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue;

@interface VKImageLoader : NSObject
{
    NSOperationQueue *networkOutQueue;
    NSOperationQueue *imageProcessingQueue;
    NSMutableDictionary *imageLoading;
    NSMutableDictionary *failures;
    NSMutableDictionary *cacheKeys;
}

+ (id)urlStringWithPaths:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *networkQueue;
- (void)retrieveImageWithUrl:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)tryToFindImageForKey:(id)arg1 withUrl:(id)arg2 forImageView:(id)arg3 postProcessing:(CDUnknownBlockType)arg4;
- (id)getProcessingQueue;
- (id)loadGroupImages:(id)arg1 toImageView:(id)arg2;
- (void)makePlaceholderWithName:(id)arg1 filter:(id)arg2 image:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)saveGifData:(id)arg1 forURL:(id)arg2;
- (void)gifWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelLoadingForImageView:(id)arg1;
- (id)imageFromMemoryCacheFromURL:(id)arg1 filter:(id)arg2;
- (void)removeLoadingKey:(id)arg1;
- (id)loadImage:(id)arg1 andImageView:(id)arg2 andFilter:(id)arg3 cancel:(_Bool)arg4 diskLoadBlock:(CDUnknownBlockType)arg5 postProcessingBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (id)loadImage:(id)arg1 andImageView:(id)arg2 andFilter:(id)arg3 cancel:(_Bool)arg4 diskLoadBlock:(CDUnknownBlockType)arg5 postProcessingBlock:(CDUnknownBlockType)arg6;
- (id)loadImage:(id)arg1 andImageView:(id)arg2 andFilter:(id)arg3 cancel:(_Bool)arg4 diskLoadBlock:(CDUnknownBlockType)arg5;
- (id)loadImageWithoutCache:(id)arg1 andImageView:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (id)cachePathForKey:(id)arg1;
- (void)processImage:(id)arg1 andImageView:(id)arg2 andFilter:(id)arg3 cancel:(_Bool)arg4;
- (void)enqueueImageProcessingOperationWithImage:(id)arg1 filter:(id)arg2 cacheImage:(id)arg3 animated:(_Bool)arg4;
- (id)processingOperationForImage:(id)arg1 filter:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)cleanDisk;
- (void)dealloc;
- (id)init;

@end

