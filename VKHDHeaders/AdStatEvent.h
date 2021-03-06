//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StatEvent.h"

@class NSNumber, NSString;

@interface AdStatEvent : StatEvent
{
    NSString *_ad_data_impression;
    NSString *_ad_data;
    NSString *_ads_device_id;
    NSNumber *_ads_tracking_disabled;
}

@property(retain, nonatomic) NSNumber *ads_tracking_disabled; // @synthesize ads_tracking_disabled=_ads_tracking_disabled;
@property(copy, nonatomic) NSString *ads_device_id; // @synthesize ads_device_id=_ads_device_id;
@property(copy, nonatomic) NSString *ad_data; // @synthesize ad_data=_ad_data;
@property(copy, nonatomic) NSString *ad_data_impression; // @synthesize ad_data_impression=_ad_data_impression;
- (void).cxx_destruct;
- (_Bool)serializeAll;
- (id)eventNameKey;

@end

