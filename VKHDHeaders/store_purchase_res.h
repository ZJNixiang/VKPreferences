//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSArray, NSNumber, NSString, VKProduct;

@interface store_purchase_res : VKResponse
{
    NSNumber *_state;
    NSNumber *_success;
    VKProduct *_product;
    NSNumber *_error_fatal;
    NSString *_error_message;
    NSArray *_user_ids;
    NSNumber *_withdrawn_votes;
}

@property(retain, nonatomic) NSNumber *withdrawn_votes; // @synthesize withdrawn_votes=_withdrawn_votes;
@property(retain, nonatomic) NSArray *user_ids; // @synthesize user_ids=_user_ids;
@property(copy, nonatomic) NSString *error_message; // @synthesize error_message=_error_message;
@property(retain, nonatomic) NSNumber *error_fatal; // @synthesize error_fatal=_error_fatal;
@property(retain, nonatomic) VKProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

