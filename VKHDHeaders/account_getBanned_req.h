//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface account_getBanned_req : VKRequest
{
    NSNumber *_offset;
    NSNumber *_count;
    NSString *_fields;
}

@property(copy, nonatomic) NSString *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end
