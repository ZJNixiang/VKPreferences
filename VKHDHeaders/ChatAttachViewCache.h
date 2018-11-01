//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ChatAttachViewCache : NSObject
{
    NSMutableArray *freeAudios;
    NSMutableArray *freeVideoViews;
    NSMutableArray *freeMediaViews;
    NSMutableArray *freeMessageViews;
    NSMutableArray *freeImages;
    NSMutableArray *freeStandart;
    NSMutableArray *freeAlbums;
    NSMutableDictionary *_reusableImages;
    NSMutableDictionary *_reusableMediaViews;
    NSMutableDictionary *_reusableVideoViews;
    NSMutableDictionary *_reusableAudios;
    NSMutableDictionary *_reusableMessagesViews;
    NSMutableDictionary *_reusableStandart;
    NSMutableDictionary *_reusableAlbums;
}

+ (void)clearCacheForGuid:(id)arg1;
+ (id)cacheForGuid:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *reusableAlbums; // @synthesize reusableAlbums=_reusableAlbums;
@property(retain, nonatomic) NSMutableDictionary *reusableStandart; // @synthesize reusableStandart=_reusableStandart;
@property(retain, nonatomic) NSMutableDictionary *reusableMessagesViews; // @synthesize reusableMessagesViews=_reusableMessagesViews;
@property(retain, nonatomic) NSMutableDictionary *reusableAudios; // @synthesize reusableAudios=_reusableAudios;
@property(retain, nonatomic) NSMutableDictionary *reusableVideoViews; // @synthesize reusableVideoViews=_reusableVideoViews;
@property(retain, nonatomic) NSMutableDictionary *reusableMediaViews; // @synthesize reusableMediaViews=_reusableMediaViews;
@property(retain, nonatomic) NSMutableDictionary *reusableImages; // @synthesize reusableImages=_reusableImages;
- (void).cxx_destruct;
- (id)getFreeImage:(id)arg1;
- (id)getFreeMediaView:(id)arg1;
- (id)getFreeAlbums:(id)arg1;
- (id)getFreeVideo:(id)arg1;
- (id)getFreeAudio:(id)arg1;
- (id)getFreeMessage:(id)arg1;
- (id)getFreeStandart:(id)arg1;
- (void)freeCacheForGuid:(id)arg1;
- (void)createPreCache;
- (id)init;

@end

