//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface friends_getMutual_req : VKRequest
{
    NSNumber *_target_uid;
    NSNumber *_source_uid;
    NSString *_order;
    NSNumber *_count;
    NSNumber *_offset;
}

@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *order; // @synthesize order=_order;
@property(retain, nonatomic) NSNumber *source_uid; // @synthesize source_uid=_source_uid;
@property(retain, nonatomic) NSNumber *target_uid; // @synthesize target_uid=_target_uid;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

