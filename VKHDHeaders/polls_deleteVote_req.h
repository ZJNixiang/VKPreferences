//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface polls_deleteVote_req : VKRequest
{
    NSNumber *_owner_id;
    NSNumber *_poll_id;
    NSNumber *_answer_id;
    NSNumber *_is_board;
}

@property(retain, nonatomic) NSNumber *is_board; // @synthesize is_board=_is_board;
@property(retain, nonatomic) NSNumber *answer_id; // @synthesize answer_id=_answer_id;
@property(retain, nonatomic) NSNumber *poll_id; // @synthesize poll_id=_poll_id;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

