//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSString;

@interface database_getCitiesById_req : VKRequest
{
    NSString *_city_ids;
}

@property(copy, nonatomic) NSString *city_ids; // @synthesize city_ids=_city_ids;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

