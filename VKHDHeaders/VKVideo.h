//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

#import "Attachable.h"

@class FastAttributedString, NSArray, NSMutableDictionary, NSNumber, NSString, VKLikes, VKPhoto, VKPrivacy;

@interface VKVideo : VKObject <Attachable>
{
    _Bool _loadedExtra;
    NSNumber *_id;
    NSNumber *_owner_id;
    NSString *_title;
    NSString *_Mdescription;
    NSNumber *_duration;
    NSString *_link;
    NSString *_photo_130;
    NSString *_photo_320;
    NSString *_photo_640;
    VKPhoto *_photo;
    NSNumber *_date;
    NSNumber *_adding_date;
    NSNumber *_views;
    NSNumber *_comments;
    NSString *_player;
    NSNumber *_can_comment;
    NSNumber *_can_repost;
    NSNumber *_added_to_me;
    NSString *_access_key;
    NSMutableDictionary *_files;
    VKLikes *_likes;
    NSNumber *_repeat;
    VKPrivacy *_privacy_comment;
    VKPrivacy *_privacy_view;
    NSString *_searchQuery;
    FastAttributedString *_attributedText;
    NSNumber *_target_id;
    NSNumber *_from_album;
    NSArray *_userVideoAlbums;
    NSArray *_targetVideoAlbums;
    struct FastAttributedStringSize _attributedTextSize;
}

@property(nonatomic) _Bool loadedExtra; // @synthesize loadedExtra=_loadedExtra;
@property(retain, nonatomic) NSArray *targetVideoAlbums; // @synthesize targetVideoAlbums=_targetVideoAlbums;
@property(retain, nonatomic) NSArray *userVideoAlbums; // @synthesize userVideoAlbums=_userVideoAlbums;
@property(retain, nonatomic) NSNumber *from_album; // @synthesize from_album=_from_album;
@property(retain, nonatomic) NSNumber *target_id; // @synthesize target_id=_target_id;
@property(nonatomic) struct FastAttributedStringSize attributedTextSize; // @synthesize attributedTextSize=_attributedTextSize;
@property(retain, nonatomic) FastAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) VKPrivacy *privacy_view; // @synthesize privacy_view=_privacy_view;
@property(retain, nonatomic) VKPrivacy *privacy_comment; // @synthesize privacy_comment=_privacy_comment;
@property(retain, nonatomic) NSNumber *repeat; // @synthesize repeat=_repeat;
@property(retain, nonatomic) VKLikes *likes; // @synthesize likes=_likes;
@property(retain, nonatomic) NSMutableDictionary *files; // @synthesize files=_files;
@property(copy, nonatomic) NSString *access_key; // @synthesize access_key=_access_key;
@property(retain, nonatomic) NSNumber *added_to_me; // @synthesize added_to_me=_added_to_me;
@property(retain, nonatomic) NSNumber *can_repost; // @synthesize can_repost=_can_repost;
@property(retain, nonatomic) NSNumber *can_comment; // @synthesize can_comment=_can_comment;
@property(copy, nonatomic) NSString *player; // @synthesize player=_player;
@property(retain, nonatomic) NSNumber *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSNumber *views; // @synthesize views=_views;
@property(retain, nonatomic) NSNumber *adding_date; // @synthesize adding_date=_adding_date;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(retain, nonatomic) VKPhoto *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSString *photo_640; // @synthesize photo_640=_photo_640;
@property(copy, nonatomic) NSString *photo_320; // @synthesize photo_320=_photo_320;
@property(copy, nonatomic) NSString *photo_130; // @synthesize photo_130=_photo_130;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *Mdescription; // @synthesize Mdescription=_Mdescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)markAsAddedToMe;
- (void)calculatePostSizeWithMaxWidth:(double)arg1;
- (id)objectString;
- (id)attachmentStringLight;
- (id)attachmentString;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

