//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSString;

@interface auth_validatePhone_req : VKRequest
{
    NSString *_sid;
    NSString *_voice;
    NSString *_phone;
}

@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;
- (id)init;

@end

