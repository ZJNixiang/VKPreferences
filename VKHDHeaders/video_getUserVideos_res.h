//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, VKVideos;

@interface video_getUserVideos_res : VKResponse
{
    VKVideos *_items;
    NSNumber *_count;
}

@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) VKVideos *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

