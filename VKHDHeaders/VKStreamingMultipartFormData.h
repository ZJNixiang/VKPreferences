//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKStreamingMultipartFormData.h"

@class NSMutableURLRequest, VKMultipartBodyStream;

@interface VKStreamingMultipartFormData : NSObject <VKStreamingMultipartFormData>
{
    VKMultipartBodyStream *bodyStream;
    NSMutableURLRequest *_request;
    unsigned long long _stringEncoding;
}

@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)requestByFinalizingMultipartFormData;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)appendPartWithFormData:(id)arg1 name:(id)arg2;
- (id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned long long)arg2;

@end

