//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface groups_getMembers_req : VKRequest
{
    NSString *_group_id;
    NSString *_sort;
    NSNumber *_count;
    NSNumber *_offset;
    NSString *_fields;
}

@property(copy, nonatomic) NSString *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

