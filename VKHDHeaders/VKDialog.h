//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class VKMessage;

@interface VKDialog : VKObject
{
    VKMessage *_message;
    long long _unread;
}

+ (id)dialogWith:(id)arg1;
@property(nonatomic) long long unread; // @synthesize unread=_unread;
@property(retain, nonatomic) VKMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

