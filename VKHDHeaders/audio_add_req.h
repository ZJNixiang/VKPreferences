//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface audio_add_req : VKRequest
{
    NSNumber *_audio_id;
    NSNumber *_owner_id;
    NSNumber *_group_id;
}

@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *audio_id; // @synthesize audio_id=_audio_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

