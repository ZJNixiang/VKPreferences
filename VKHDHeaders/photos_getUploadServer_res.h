//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, NSString;

@interface photos_getUploadServer_res : VKResponse
{
    NSString *_upload_url;
    NSNumber *_album_id;
    NSNumber *_user_id;
}

@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSNumber *album_id; // @synthesize album_id=_album_id;
@property(copy, nonatomic) NSString *upload_url; // @synthesize upload_url=_upload_url;
- (void).cxx_destruct;

@end

