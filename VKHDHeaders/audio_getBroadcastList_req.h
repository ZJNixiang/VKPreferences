//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface audio_getBroadcastList_req : VKRequest
{
    NSString *_filter;
    NSNumber *_active;
}

@property(retain, nonatomic) NSNumber *active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

