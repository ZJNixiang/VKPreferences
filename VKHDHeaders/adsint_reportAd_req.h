//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSString;

@interface adsint_reportAd_req : VKRequest
{
    NSString *_reason;
    NSString *_ad_data;
}

@property(copy, nonatomic) NSString *ad_data; // @synthesize ad_data=_ad_data;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

