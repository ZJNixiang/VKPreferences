//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface messages_send_req : VKRequest
{
    NSNumber *_user_id;
    NSString *_domain;
    NSNumber *_chat_id;
    NSNumber *_user_ids;
    NSString *_message;
    NSString *_title;
    NSNumber *_guid;
    NSNumber *_lat;
    NSNumber *_Mlong;
    NSString *_attachment;
    NSString *_forward_messages;
}

@property(copy, nonatomic) NSString *forward_messages; // @synthesize forward_messages=_forward_messages;
@property(copy, nonatomic) NSString *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSNumber *Mlong; // @synthesize Mlong=_Mlong;
@property(retain, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSNumber *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *user_ids; // @synthesize user_ids=_user_ids;
@property(retain, nonatomic) NSNumber *chat_id; // @synthesize chat_id=_chat_id;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (id)init;

@end

