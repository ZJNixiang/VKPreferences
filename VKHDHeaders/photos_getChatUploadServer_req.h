//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface photos_getChatUploadServer_req : VKRequest
{
    NSNumber *_chat_id;
    NSNumber *_crop_x;
    NSNumber *_crop_y;
    NSNumber *_crop_width;
}

@property(retain, nonatomic) NSNumber *crop_width; // @synthesize crop_width=_crop_width;
@property(retain, nonatomic) NSNumber *crop_y; // @synthesize crop_y=_crop_y;
@property(retain, nonatomic) NSNumber *crop_x; // @synthesize crop_x=_crop_x;
@property(retain, nonatomic) NSNumber *chat_id; // @synthesize chat_id=_chat_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end
