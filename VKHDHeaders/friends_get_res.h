//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class VKUsers;

@interface friends_get_res : VKResponse
{
    VKUsers *_users;
}

@property(retain, nonatomic) VKUsers *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

