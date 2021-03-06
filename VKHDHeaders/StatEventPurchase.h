//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StatEvent.h"

@class NSString;

@interface StatEventPurchase : StatEvent
{
    NSString *_product_id;
    NSString *_merchant_product_id;
    NSString *_result;
    NSString *_store_error;
    NSString *_api_error;
}

@property(copy, nonatomic) NSString *api_error; // @synthesize api_error=_api_error;
@property(copy, nonatomic) NSString *store_error; // @synthesize store_error=_store_error;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *merchant_product_id; // @synthesize merchant_product_id=_merchant_product_id;
@property(copy, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end

