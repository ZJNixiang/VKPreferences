//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface newsfeed_get_req : VKRequest
{
    NSString *_filters;
    NSNumber *_return_banned;
    NSNumber *_start_time;
    NSNumber *_end_time;
    NSNumber *_max_photos;
    NSString *_source_ids;
    NSString *_start_from;
    NSNumber *_offset;
    NSNumber *_count;
    NSString *_fields;
    NSNumber *_photo_sizes;
}

@property(retain, nonatomic) NSNumber *photo_sizes; // @synthesize photo_sizes=_photo_sizes;
@property(copy, nonatomic) NSString *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *start_from; // @synthesize start_from=_start_from;
@property(copy, nonatomic) NSString *source_ids; // @synthesize source_ids=_source_ids;
@property(retain, nonatomic) NSNumber *max_photos; // @synthesize max_photos=_max_photos;
@property(retain, nonatomic) NSNumber *end_time; // @synthesize end_time=_end_time;
@property(retain, nonatomic) NSNumber *start_time; // @synthesize start_time=_start_time;
@property(retain, nonatomic) NSNumber *return_banned; // @synthesize return_banned=_return_banned;
@property(copy, nonatomic) NSString *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

