//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObjectsArray.h"

@class NSNumber;

@interface VKTopics : VKObjectsArray
{
    NSNumber *_default_order;
    NSNumber *_can_add_topics;
}

@property(retain, nonatomic) NSNumber *can_add_topics; // @synthesize can_add_topics=_can_add_topics;
@property(retain, nonatomic) NSNumber *default_order; // @synthesize default_order=_default_order;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(long long)arg1;
- (Class)objectClass;

@end

