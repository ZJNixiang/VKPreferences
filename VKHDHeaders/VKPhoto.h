//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

#import "Attachable.h"

@class FastAttributedString, NSMutableDictionary, NSNumber, NSOrderedSet, NSString, VKComments, VKLikes, VKLink, VKPage, VKPhotoSizes;

@interface VKPhoto : VKObject <Attachable>
{
    NSMutableDictionary *qualityResultsDictionary;
    _Bool _adsPhoto;
    NSNumber *_id;
    NSNumber *_album_id;
    NSNumber *_owner_id;
    NSNumber *_user_id;
    NSNumber *_post_id;
    NSString *_photo_50;
    NSString *_photo_75;
    NSString *_photo_100;
    NSString *_photo_130;
    NSString *_photo_200;
    NSString *_photo_320;
    NSString *_photo_510;
    NSString *_photo_604;
    NSString *_photo_807;
    NSString *_photo_1280;
    NSString *_photo_2560;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_text;
    NSNumber *_date;
    NSNumber *_can_comment;
    NSString *_access_key;
    VKLikes *_likes;
    VKComments *_comments;
    VKPhotoSizes *_sizes;
    NSOrderedSet *_availableSizes;
    VKLink *_attached_link;
    VKPage *_attached_page;
    double _photoPostHeight;
    double _postHeightWithoutPhoto;
    FastAttributedString *_attributedText;
    struct FastAttributedStringSize _attributedTextSize;
}

+ (id)photoWithSizes:(id)arg1;
@property(nonatomic) _Bool adsPhoto; // @synthesize adsPhoto=_adsPhoto;
@property(nonatomic) struct FastAttributedStringSize attributedTextSize; // @synthesize attributedTextSize=_attributedTextSize;
@property(retain, nonatomic) FastAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) double postHeightWithoutPhoto; // @synthesize postHeightWithoutPhoto=_postHeightWithoutPhoto;
@property(nonatomic) double photoPostHeight; // @synthesize photoPostHeight=_photoPostHeight;
@property(retain, nonatomic) VKPage *attached_page; // @synthesize attached_page=_attached_page;
@property(retain, nonatomic) VKLink *attached_link; // @synthesize attached_link=_attached_link;
@property(retain, nonatomic) NSOrderedSet *availableSizes; // @synthesize availableSizes=_availableSizes;
@property(retain, nonatomic) VKPhotoSizes *sizes; // @synthesize sizes=_sizes;
@property(retain, nonatomic) VKComments *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) VKLikes *likes; // @synthesize likes=_likes;
@property(copy, nonatomic) NSString *access_key; // @synthesize access_key=_access_key;
@property(retain, nonatomic) NSNumber *can_comment; // @synthesize can_comment=_can_comment;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *photo_2560; // @synthesize photo_2560=_photo_2560;
@property(copy, nonatomic) NSString *photo_1280; // @synthesize photo_1280=_photo_1280;
@property(copy, nonatomic) NSString *photo_807; // @synthesize photo_807=_photo_807;
@property(copy, nonatomic) NSString *photo_604; // @synthesize photo_604=_photo_604;
@property(copy, nonatomic) NSString *photo_510; // @synthesize photo_510=_photo_510;
@property(copy, nonatomic) NSString *photo_320; // @synthesize photo_320=_photo_320;
@property(copy, nonatomic) NSString *photo_200; // @synthesize photo_200=_photo_200;
@property(copy, nonatomic) NSString *photo_130; // @synthesize photo_130=_photo_130;
@property(copy, nonatomic) NSString *photo_100; // @synthesize photo_100=_photo_100;
@property(copy, nonatomic) NSString *photo_75; // @synthesize photo_75=_photo_75;
@property(copy, nonatomic) NSString *photo_50; // @synthesize photo_50=_photo_50;
@property(retain, nonatomic) NSNumber *post_id; // @synthesize post_id=_post_id;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSNumber *owner_id; // @synthesize owner_id=_owner_id;
@property(retain, nonatomic) NSNumber *album_id; // @synthesize album_id=_album_id;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)thumbnail;
- (id)serialize;
- (void)calculatePostSizeWithMaxWidth:(double)arg1;
- (id)optimalPhotoForWidth:(double)arg1;
- (id)bestQualityPhoto;
- (id)photoOfSize:(id)arg1;
- (id)objectString;
- (id)attachmentStringLight;
- (id)attachmentString;
- (void)prepareSizes;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

