//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface store_getProducts_req : VKRequest
{
    NSString *_type;
    NSString *_merchant;
    NSString *_product_ids;
    NSString *_filters;
    NSNumber *_extended;
}

@property(retain, nonatomic) NSNumber *extended; // @synthesize extended=_extended;
@property(copy, nonatomic) NSString *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSString *product_ids; // @synthesize product_ids=_product_ids;
@property(copy, nonatomic) NSString *merchant; // @synthesize merchant=_merchant;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

