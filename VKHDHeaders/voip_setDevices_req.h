//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface voip_setDevices_req : VKRequest
{
    NSNumber *_camera;
    NSNumber *_call_id;
    NSNumber *_from_id;
}

@property(retain, nonatomic) NSNumber *from_id; // @synthesize from_id=_from_id;
@property(retain, nonatomic) NSNumber *call_id; // @synthesize call_id=_call_id;
@property(retain, nonatomic) NSNumber *camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;
- (id)serialize;

@end
