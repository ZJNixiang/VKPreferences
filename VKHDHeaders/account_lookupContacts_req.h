//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface account_lookupContacts_req : VKRequest
{
    NSString *_contacts;
    NSString *_service;
    NSString *_mycontact;
    NSNumber *_return_all;
}

@property(retain, nonatomic) NSNumber *return_all; // @synthesize return_all=_return_all;
@property(copy, nonatomic) NSString *mycontact; // @synthesize mycontact=_mycontact;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

