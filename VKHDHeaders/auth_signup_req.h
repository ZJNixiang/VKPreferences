//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface auth_signup_req : VKRequest
{
    NSString *_phone;
    NSString *_first_name;
    NSString *_last_name;
    NSString *_client_id;
    NSString *_client_secret;
    NSNumber *_sex;
    NSString *_password;
    NSNumber *_voice;
    NSString *_sid;
    NSNumber *_test_mode;
}

@property(retain, nonatomic) NSNumber *test_mode; // @synthesize test_mode=_test_mode;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSNumber *voice; // @synthesize voice=_voice;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSNumber *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *client_secret; // @synthesize client_secret=_client_secret;
@property(copy, nonatomic) NSString *client_id; // @synthesize client_id=_client_id;
@property(copy, nonatomic) NSString *last_name; // @synthesize last_name=_last_name;
@property(copy, nonatomic) NSString *first_name; // @synthesize first_name=_first_name;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;
- (id)init;

@end

