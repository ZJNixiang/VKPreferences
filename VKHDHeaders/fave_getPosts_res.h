//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, VKGroups, VKPosts, VKUsers;

@interface fave_getPosts_res : VKResponse
{
    NSNumber *_count;
    VKPosts *_items;
    VKUsers *_profiles;
    VKGroups *_groups;
}

@property(retain, nonatomic) VKGroups *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) VKUsers *profiles; // @synthesize profiles=_profiles;
@property(retain, nonatomic) VKPosts *items; // @synthesize items=_items;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

