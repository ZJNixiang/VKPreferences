//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface board_getTopics_req : VKRequest
{
    NSNumber *_group_id;
    NSNumber *_topic_ids;
    NSNumber *_extended;
    NSNumber *_order;
    NSNumber *_offset;
    NSNumber *_count;
    NSNumber *_preview;
    NSNumber *_preview_length;
}

@property(retain, nonatomic) NSNumber *preview_length; // @synthesize preview_length=_preview_length;
@property(retain, nonatomic) NSNumber *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(retain, nonatomic) NSNumber *extended; // @synthesize extended=_extended;
@property(retain, nonatomic) NSNumber *topic_ids; // @synthesize topic_ids=_topic_ids;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

