//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AnimatedGifFrame, AnimatedGifQueueObject, MediaView, NSData, NSDate, NSMutableData, NSThread, NSURL, UIImage, UIImageView, VKDocument;

@interface AnimatedGif : NSObject
{
    NSData *GIF_pointer;
    NSMutableData *GIF_buffer;
    NSMutableData *GIF_screen;
    NSMutableData *GIF_global;
    NSDate *frameTime;
    struct CGContext *imageContext;
    int GIF_sorted;
    int GIF_colorS;
    int GIF_colorC;
    int GIF_colorF;
    int dataPointer;
    int totalFrames;
    int frameCounter;
    _Bool didShowFrame;
    _Bool didCountAllFrames;
    AnimatedGifFrame *thisFrame;
    AnimatedGifFrame *lastFrame;
    UIImage *overlayImage;
    NSThread *opQueue;
    _Bool _isLoading;
    CDUnknownBlockType _loadingProgressBlock;
    CDUnknownBlockType _willShowFrameBlock;
    UIImageView *_parentView;
    MediaView *_parentMedia;
    VKDocument *_parentDocument;
    AnimatedGifQueueObject *_queueObject;
    struct CGSize _animationSize;
}

+ (id)getAnimationForGifWithData:(id)arg1;
+ (id)getAnimationForGifAtUrl:(id)arg1;
@property(retain, nonatomic) AnimatedGifQueueObject *queueObject; // @synthesize queueObject=_queueObject;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak VKDocument *parentDocument; // @synthesize parentDocument=_parentDocument;
@property(nonatomic) __weak MediaView *parentMedia; // @synthesize parentMedia=_parentMedia;
@property(nonatomic) __weak UIImageView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) struct CGSize animationSize; // @synthesize animationSize=_animationSize;
@property(copy, nonatomic) CDUnknownBlockType willShowFrameBlock; // @synthesize willShowFrameBlock=_willShowFrameBlock;
@property(copy, nonatomic) CDUnknownBlockType loadingProgressBlock; // @synthesize loadingProgressBlock=_loadingProgressBlock;
- (void).cxx_destruct;
- (_Bool)GIFSkipBytes:(long long)arg1;
- (_Bool)GIFGetBytes:(int)arg1;
- (void)GIFReadDescriptor;
- (void)GIFReadExtensions;
- (void)drawNextFrame:(id)arg1;
- (void)decodeGIF;
- (void)joinRunloop;
- (void)startThreadWithData:(id)arg1;
- (void)start;
- (void)startDownload;
- (void)destroyInternal;
- (void)clear:(_Bool)arg1;
- (void)clear;
- (void)stopAndReload;
- (void)stop;
@property(nonatomic) NSURL *url;
@property(readonly, nonatomic) double progress;
- (void)dealloc;

@end

