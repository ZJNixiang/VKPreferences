//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSString;

@interface internal_getNotifications_req : VKRequest
{
    NSString *_device;
    NSString *_os;
    NSString *_app_version;
    NSString *_locale;
}

@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end
