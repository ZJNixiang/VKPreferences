//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class NSNumber, NSString;

@interface voip_ping_res : VKResponse
{
    NSNumber *_uid;
    NSNumber *_call_id;
    NSString *_code;
    NSString *_far_id;
    NSString *_Mhash;
    NSString *_prefer;
    NSString *_stream;
}

@property(copy, nonatomic) NSString *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) NSString *prefer; // @synthesize prefer=_prefer;
@property(copy, nonatomic) NSString *Mhash; // @synthesize Mhash=_Mhash;
@property(copy, nonatomic) NSString *far_id; // @synthesize far_id=_far_id;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSNumber *call_id; // @synthesize call_id=_call_id;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
