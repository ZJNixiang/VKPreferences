//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface photos_move_req : VKRequest
{
    NSNumber *_photo_id;
    NSNumber *_target_album_id;
    NSNumber *_owner_id;
}

@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *target_album_id; // @synthesize target_album_id=_target_album_id;
@property(retain, nonatomic) NSNumber *photo_id; // @synthesize photo_id=_photo_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

