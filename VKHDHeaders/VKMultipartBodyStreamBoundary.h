//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKMultipartBodyStreamElement.h"

@class NSData;

@interface VKMultipartBodyStreamBoundary : VKMultipartBodyStreamElement
{
    NSData *boundaryData;
}

+ (id)boundaryFromString:(id)arg1 withEncoding:(unsigned long long)arg2;
- (void).cxx_destruct;
- (unsigned long long)contentLength;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initWithBoundaryString:(id)arg1 stringEncoding:(unsigned long long)arg2;
- (id)init;

@end

