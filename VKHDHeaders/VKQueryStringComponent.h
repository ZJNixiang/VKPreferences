//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VKQueryStringComponent : NSObject
{
    NSString *_key;
    NSString *_value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)pureStringValue;
- (id)URLEncodedStringValueWithEncoding:(unsigned long long)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end
