//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface video_get_req : VKRequest
{
    NSString *_videos;
    NSNumber *_owner_id;
    NSNumber *_album_id;
    NSNumber *_width;
    NSNumber *_count;
    NSNumber *_offset;
    NSNumber *_extended;
    NSNumber *_need_embed;
}

@property(retain, nonatomic) NSNumber *need_embed; // @synthesize need_embed=_need_embed;
@property(retain, nonatomic) NSNumber *extended; // @synthesize extended=_extended;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *album_id; // @synthesize album_id=_album_id;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(copy, nonatomic) NSString *videos; // @synthesize videos=_videos;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end
