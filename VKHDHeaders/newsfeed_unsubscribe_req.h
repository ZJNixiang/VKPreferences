//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface newsfeed_unsubscribe_req : VKRequest
{
    NSString *_type;
    NSNumber *_owner_id;
    NSNumber *_item_id;
}

@property(retain, nonatomic) NSNumber *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end
