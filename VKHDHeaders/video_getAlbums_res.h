//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, VKAlbums;

@interface video_getAlbums_res : VKResponse
{
    VKAlbums *_items;
    NSNumber *_count;
}

@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) VKAlbums *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

