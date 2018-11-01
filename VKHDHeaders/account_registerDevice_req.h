//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface account_registerDevice_req : VKRequest
{
    NSString *_token;
    NSString *_device_model;
    NSString *_device_id;
    NSString *_system_version;
    NSNumber *_no_text;
    NSNumber *_sandbox;
    NSString *_subscribe;
    NSString *_app_version;
    NSString *_token_sig;
}

@property(copy, nonatomic) NSString *token_sig; // @synthesize token_sig=_token_sig;
@property(copy, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(copy, nonatomic) NSString *subscribe; // @synthesize subscribe=_subscribe;
@property(retain, nonatomic) NSNumber *sandbox; // @synthesize sandbox=_sandbox;
@property(retain, nonatomic) NSNumber *no_text; // @synthesize no_text=_no_text;
@property(copy, nonatomic) NSString *system_version; // @synthesize system_version=_system_version;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(copy, nonatomic) NSString *device_model; // @synthesize device_model=_device_model;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end
