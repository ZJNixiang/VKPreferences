//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface wall_delete_req : VKRequest
{
    NSNumber *_post_id;
    NSNumber *_owner_id;
}

@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *post_id; // @synthesize post_id=_post_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

