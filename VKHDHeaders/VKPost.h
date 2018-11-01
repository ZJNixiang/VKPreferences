//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

#import "Attachable.h"
#import "VKSizeable.h"

@class FastAttributedString, NSArray, NSNumber, NSString, VKAdsArray, VKAdsStatisticsArray, VKAttachmentsArray, VKComments, VKCopyPosts, VKGeo, VKLikes, VKNotesArray, VKPostSource, VKReposts;

@interface VKPost : VKObject <Attachable, VKSizeable>
{
    NSString *_objectString;
    _Bool _expanded;
    _Bool _canShowComments;
    _Bool _isCopy;
    _Bool _isParentHasText;
    _Bool _isDeleted;
    _Bool _isReported;
    _Bool _isHidden;
    _Bool _gotExtraPost;
    _Bool _dontDrawCopyContent;
    _Bool _postViewed;
    float _heightPost;
    float _heightPostTruncated;
    float _heightRepost;
    float _heightRepostTruncated;
    float _heightWall;
    float _heightWallTruncated;
    float _heightWallRepost;
    float _heightWallRepostTruncated;
    float _attachHeight;
    float _attachHeight2;
    float _attachHeight3;
    float _attachHeight4;
    float _attachHeight5;
    float _attachHeight6;
    NSNumber *_id;
    NSNumber *_owner_id;
    NSNumber *_from_id;
    NSNumber *_date;
    NSNumber *_insert_date;
    NSString *_text;
    NSNumber *_reply_owner_id;
    NSNumber *_reply_post_id;
    NSNumber *_friends_only;
    VKComments *_comments;
    VKLikes *_likes;
    VKReposts *_reposts;
    NSString *_post_type;
    VKPostSource *_post_source;
    VKAttachmentsArray *_attachments;
    VKGeo *_geo;
    NSNumber *_signer_id;
    NSNumber *_final_post;
    NSNumber *_is_pinned;
    NSNumber *_can_pin;
    VKCopyPosts *_copy_history;
    VKNotesArray *_notes;
    NSNumber *_can_edit;
    NSNumber *_can_delete;
    NSString *_tagText;
    FastAttributedString *_fullPostString;
    FastAttributedString *_wallPostString;
    NSArray *_hideSourceList;
    VKAdsArray *_ads;
    VKAdsStatisticsArray *_ads_statistics;
    NSString *_ads_debug;
    struct FastAttributedStringSize _fullPostSize;
    struct FastAttributedStringSize _wallPostSize;
}

+ (long long)defaultNameRectOffset;
+ (long long)defaultCommentsHeight;
+ (long long)defaultCommentsOffsetY;
+ (long long)defaultBackgroundOffsetY;
+ (long long)defaultNameRectHeight;
+ (long long)defaultEmptyPostHeight;
@property(copy, nonatomic) NSString *ads_debug; // @synthesize ads_debug=_ads_debug;
@property(retain, nonatomic) VKAdsStatisticsArray *ads_statistics; // @synthesize ads_statistics=_ads_statistics;
@property(retain, nonatomic) VKAdsArray *ads; // @synthesize ads=_ads;
@property _Bool postViewed; // @synthesize postViewed=_postViewed;
@property(retain, nonatomic) NSArray *hideSourceList; // @synthesize hideSourceList=_hideSourceList;
@property(nonatomic) _Bool dontDrawCopyContent; // @synthesize dontDrawCopyContent=_dontDrawCopyContent;
@property(nonatomic) _Bool gotExtraPost; // @synthesize gotExtraPost=_gotExtraPost;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isReported; // @synthesize isReported=_isReported;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isParentHasText; // @synthesize isParentHasText=_isParentHasText;
@property(nonatomic) _Bool isCopy; // @synthesize isCopy=_isCopy;
@property(nonatomic) _Bool canShowComments; // @synthesize canShowComments=_canShowComments;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) float attachHeight6; // @synthesize attachHeight6=_attachHeight6;
@property(nonatomic) float attachHeight5; // @synthesize attachHeight5=_attachHeight5;
@property(nonatomic) float attachHeight4; // @synthesize attachHeight4=_attachHeight4;
@property(nonatomic) float attachHeight3; // @synthesize attachHeight3=_attachHeight3;
@property(nonatomic) float attachHeight2; // @synthesize attachHeight2=_attachHeight2;
@property(nonatomic) float attachHeight; // @synthesize attachHeight=_attachHeight;
@property(nonatomic) float heightWallRepostTruncated; // @synthesize heightWallRepostTruncated=_heightWallRepostTruncated;
@property(nonatomic) float heightWallRepost; // @synthesize heightWallRepost=_heightWallRepost;
@property(nonatomic) float heightWallTruncated; // @synthesize heightWallTruncated=_heightWallTruncated;
@property(nonatomic) float heightWall; // @synthesize heightWall=_heightWall;
@property(nonatomic) float heightRepostTruncated; // @synthesize heightRepostTruncated=_heightRepostTruncated;
@property(nonatomic) float heightRepost; // @synthesize heightRepost=_heightRepost;
@property(nonatomic) float heightPostTruncated; // @synthesize heightPostTruncated=_heightPostTruncated;
@property(nonatomic) float heightPost; // @synthesize heightPost=_heightPost;
@property(retain, nonatomic) FastAttributedString *wallPostString; // @synthesize wallPostString=_wallPostString;
@property(nonatomic) struct FastAttributedStringSize wallPostSize; // @synthesize wallPostSize=_wallPostSize;
@property(retain, nonatomic) FastAttributedString *fullPostString; // @synthesize fullPostString=_fullPostString;
@property(nonatomic) struct FastAttributedStringSize fullPostSize; // @synthesize fullPostSize=_fullPostSize;
@property(copy, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) NSNumber *can_delete; // @synthesize can_delete=_can_delete;
@property(retain, nonatomic) NSNumber *can_edit; // @synthesize can_edit=_can_edit;
@property(retain, nonatomic) VKNotesArray *notes; // @synthesize notes=_notes;
@property(retain, nonatomic, getter=getCopyHistory) VKCopyPosts *copy_history; // @synthesize copy_history=_copy_history;
@property(retain, nonatomic) NSNumber *can_pin; // @synthesize can_pin=_can_pin;
@property(retain, nonatomic) NSNumber *is_pinned; // @synthesize is_pinned=_is_pinned;
@property(retain, nonatomic) NSNumber *final_post; // @synthesize final_post=_final_post;
@property(retain, nonatomic) NSNumber *signer_id; // @synthesize signer_id=_signer_id;
@property(retain, nonatomic) VKGeo *geo; // @synthesize geo=_geo;
@property(retain, nonatomic) VKAttachmentsArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) VKPostSource *post_source; // @synthesize post_source=_post_source;
@property(copy, nonatomic) NSString *post_type; // @synthesize post_type=_post_type;
@property(retain, nonatomic) VKReposts *reposts; // @synthesize reposts=_reposts;
@property(retain, nonatomic) VKLikes *likes; // @synthesize likes=_likes;
@property(retain, nonatomic) VKComments *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSNumber *friends_only; // @synthesize friends_only=_friends_only;
@property(retain, nonatomic) NSNumber *reply_post_id; // @synthesize reply_post_id=_reply_post_id;
@property(retain, nonatomic) NSNumber *reply_owner_id; // @synthesize reply_owner_id=_reply_owner_id;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber *insert_date; // @synthesize insert_date=_insert_date;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *from_id; // @synthesize from_id=_from_id;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)processAdvertismentTap;
- (_Bool)isEqual:(id)arg1;
- (void)addAttachment:(id)arg1;
- (id)objectString;
@property(readonly, nonatomic) NSNumber *wall_owner;
@property(readonly, nonatomic) NSNumber *post_owner;
- (id)attachmentStringLight;
- (id)attachmentString;
- (_Bool)mayBeNewsfeedTruncated;
- (_Bool)mayBeWallTruncated;
- (double)viewHeightFullRepost;
- (double)viewHeightFullPost;
- (double)viewHeightRepost:(_Bool)arg1;
- (double)newsfeedHeightWithComments;
- (double)viewHeight:(_Bool)arg1;
- (double)deletedPostHeight;
- (id)initWithDictionary:(id)arg1;
- (void)addExtraOffset:(double)arg1;
- (void)calculateSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
