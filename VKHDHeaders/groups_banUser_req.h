//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface groups_banUser_req : VKRequest
{
    NSNumber *_group_id;
    NSNumber *_user_id;
    NSNumber *_end_date;
    NSNumber *_reason;
    NSString *_comment;
    NSNumber *_comment_visible;
}

@property(retain, nonatomic) NSNumber *comment_visible; // @synthesize comment_visible=_comment_visible;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSNumber *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSNumber *end_date; // @synthesize end_date=_end_date;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end
