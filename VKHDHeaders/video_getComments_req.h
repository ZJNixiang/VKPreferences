//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface video_getComments_req : VKRequest
{
    NSNumber *_video_id;
    NSNumber *_owner_id;
    NSNumber *_offset;
    NSNumber *_count;
    NSNumber *_sort;
}

@property(retain, nonatomic) NSNumber *sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *video_id; // @synthesize video_id=_video_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

