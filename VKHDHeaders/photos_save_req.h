//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface photos_save_req : VKRequest
{
    NSNumber *_album_id;
    NSNumber *_group_id;
    NSString *_caption;
}

@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSNumber *album_id; // @synthesize album_id=_album_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

