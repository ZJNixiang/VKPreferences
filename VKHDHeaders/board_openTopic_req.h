//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface board_openTopic_req : VKRequest
{
    NSNumber *_group_id;
    NSNumber *_topic_id;
}

@property(retain, nonatomic) NSNumber *topic_id; // @synthesize topic_id=_topic_id;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

