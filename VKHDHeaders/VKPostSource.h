//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class NSString, VKLink;

@interface VKPostSource : VKObject
{
    NSString *_type;
    NSString *_data;
    VKLink *_link;
}

@property(retain, nonatomic) VKLink *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

