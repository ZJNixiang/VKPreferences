//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKRequest.h"

@class NSNumber, NSString;

@interface pages_get_req : VKRequest
{
    NSNumber *_page_id;
    NSString *_title;
    NSNumber *_group_id;
    NSNumber *_message_id;
    NSNumber *_global;
    NSNumber *_need_html;
    NSNumber *_owner_id;
    NSNumber *_site_preview;
}

@property(retain, nonatomic) NSNumber *site_preview; // @synthesize site_preview=_site_preview;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *need_html; // @synthesize need_html=_need_html;
@property(retain, nonatomic) NSNumber *global; // @synthesize global=_global;
@property(retain, nonatomic) NSNumber *message_id; // @synthesize message_id=_message_id;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *page_id; // @synthesize page_id=_page_id;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)getMethodName;

@end

