//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface photos_getComments_req : VKRequest
{
    NSNumber *_photo_id;
    NSNumber *_owner_id;
    NSNumber *_offset;
    NSNumber *_count;
    NSNumber *_sort;
    NSNumber *_need_likes;
    NSNumber *_access_key;
}

@property(retain, nonatomic) NSNumber *access_key; // @synthesize access_key=_access_key;
@property(retain, nonatomic) NSNumber *need_likes; // @synthesize need_likes=_need_likes;
@property(retain, nonatomic) NSNumber *sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *photo_id; // @synthesize photo_id=_photo_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

