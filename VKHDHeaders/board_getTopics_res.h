//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, VKTopics, VKUsers;

@interface board_getTopics_res : VKResponse
{
    NSNumber *_count;
    VKTopics *_topics;
    VKUsers *_profiles;
    NSNumber *_can_add_topics;
    NSNumber *_default_order;
}

@property(retain, nonatomic) NSNumber *default_order; // @synthesize default_order=_default_order;
@property(retain, nonatomic) NSNumber *can_add_topics; // @synthesize can_add_topics=_can_add_topics;
@property(retain, nonatomic) VKUsers *profiles; // @synthesize profiles=_profiles;
@property(retain, nonatomic) VKTopics *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
