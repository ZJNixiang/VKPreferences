//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, VKPhotos;

@interface photos_getUserPhotos_res : VKResponse
{
    NSNumber *_count;
    VKPhotos *_items;
}

@property(retain, nonatomic) VKPhotos *items; // @synthesize items=_items;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

