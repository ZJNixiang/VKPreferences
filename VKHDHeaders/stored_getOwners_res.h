//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKResponse.h"

@class VKGroups, VKUsers;

@interface stored_getOwners_res : VKResponse
{
    VKUsers *_users;
    VKGroups *_groups;
}

@property(retain, nonatomic) VKGroups *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) VKUsers *users; // @synthesize users=_users;
- (void).cxx_destruct;

@end
