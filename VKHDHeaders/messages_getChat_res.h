//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, NSString, VKChat, VKUsers;

@interface messages_getChat_res : VKResponse
{
    NSString *_type;
    NSString *_title;
    NSNumber *_chat_id;
    NSNumber *_admin_id;
    VKUsers *_users;
    VKChat *_chat;
}

@property(retain, nonatomic) VKChat *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) VKUsers *users; // @synthesize users=_users;
@property(retain, nonatomic) NSNumber *admin_id; // @synthesize admin_id=_admin_id;
@property(retain, nonatomic) NSNumber *chat_id; // @synthesize chat_id=_chat_id;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

