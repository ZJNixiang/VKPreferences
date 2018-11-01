//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "store_request.h"

@class NSNumber, NSString;

@interface store_purchase_req : store_request
{
    NSString *_type;
    NSString *_product_id;
    NSString *_merchant;
    NSString *_merchant_product_id;
    NSString *_merchant_transaction_id;
    NSString *_application_receipt;
    NSString *_receipt;
    NSNumber *_user_id;
    NSString *_referrer;
}

@property(retain, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
@property(copy, nonatomic) NSString *application_receipt; // @synthesize application_receipt=_application_receipt;
@property(copy, nonatomic) NSString *merchant_transaction_id; // @synthesize merchant_transaction_id=_merchant_transaction_id;
@property(copy, nonatomic) NSString *merchant_product_id; // @synthesize merchant_product_id=_merchant_product_id;
@property(copy, nonatomic) NSString *merchant; // @synthesize merchant=_merchant;
@property(copy, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

