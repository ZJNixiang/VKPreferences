//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber;

@interface fave_getPosts_req : VKRequest
{
    NSNumber *_extended;
    NSNumber *_count;
    NSNumber *_offset;
}

@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *extended; // @synthesize extended=_extended;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

