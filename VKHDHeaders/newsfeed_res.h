//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, NSString, VKGroups, VKNewsfeedNews, VKUsers;

@interface newsfeed_res : VKResponse
{
    VKUsers *_profiles;
    VKGroups *_groups;
    VKNewsfeedNews *_items;
    NSNumber *_count;
    NSString *_next_from;
    NSNumber *_new_offset;
    NSNumber *_device_info_saved;
    NSNumber *_server_time;
}

@property(retain, nonatomic) NSNumber *server_time; // @synthesize server_time=_server_time;
@property(retain, nonatomic) NSNumber *device_info_saved; // @synthesize device_info_saved=_device_info_saved;
@property(retain, nonatomic, getter=getNewOffset) NSNumber *new_offset; // @synthesize new_offset=_new_offset;
@property(copy, nonatomic, getter=getNextFrom) NSString *next_from; // @synthesize next_from=_next_from;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) VKNewsfeedNews *items; // @synthesize items=_items;
@property(retain, nonatomic) VKGroups *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) VKUsers *profiles; // @synthesize profiles=_profiles;
- (void).cxx_destruct;

@end

