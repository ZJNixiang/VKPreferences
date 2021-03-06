//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface VKAttachmentObject : NSObject
{
    _Bool _nonPrivate;
    int _type;
    NSString *_path;
    NSString *_uploadPath;
    NSString *_attachString;
    id _attachObject;
    NSNumber *_groupId;
}

@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) _Bool nonPrivate; // @synthesize nonPrivate=_nonPrivate;
@property(retain, nonatomic) id attachObject; // @synthesize attachObject=_attachObject;
@property(copy, nonatomic) NSString *attachString; // @synthesize attachString=_attachString;
@property(copy, nonatomic) NSString *uploadPath; // @synthesize uploadPath=_uploadPath;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithDictionary:(id)arg1;

@end

