//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface wall_editComment_req : VKRequest
{
    NSNumber *_comment_id;
    NSNumber *_owner_id;
    NSString *_message;
    NSString *_attachments;
}

@property(copy, nonatomic) NSString *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *comment_id; // @synthesize comment_id=_comment_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

