//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber;

@interface wall_addLike_res : VKResponse
{
    NSNumber *_likes;
    NSNumber *_reposts;
    NSNumber *_reposted_post_id;
}

@property(retain, nonatomic) NSNumber *reposted_post_id; // @synthesize reposted_post_id=_reposted_post_id;
@property(retain, nonatomic) NSNumber *reposts; // @synthesize reposts=_reposts;
@property(retain, nonatomic) NSNumber *likes; // @synthesize likes=_likes;
- (void).cxx_destruct;

@end

