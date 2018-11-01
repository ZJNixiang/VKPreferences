//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GraySeparatorView, UIButtonHL, UIImageView, UILabel;

@interface PostCommentsView : UIView
{
    _Bool _isWallCell;
    _Bool _extraBottomLine;
    GraySeparatorView *_grayTop;
    GraySeparatorView *_grayBottom;
    UIButtonHL *_shareButton;
    UIButtonHL *_commentButton;
    UIImageView *_commentsImage;
    UILabel *_commentsText;
    UIImageView *_shareImage;
    UILabel *_shareLabel;
    UIButtonHL *_likeButton;
    UIImageView *_likeImage;
    UILabel *_likeText;
    UILabel *_likeLabel;
}

@property(nonatomic) _Bool extraBottomLine; // @synthesize extraBottomLine=_extraBottomLine;
@property(nonatomic) _Bool isWallCell; // @synthesize isWallCell=_isWallCell;
@property(retain, nonatomic) UILabel *likeLabel; // @synthesize likeLabel=_likeLabel;
@property(retain, nonatomic) UILabel *likeText; // @synthesize likeText=_likeText;
@property(retain, nonatomic) UIImageView *likeImage; // @synthesize likeImage=_likeImage;
@property(retain, nonatomic) UIButtonHL *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) UIImageView *shareImage; // @synthesize shareImage=_shareImage;
@property(retain, nonatomic) UILabel *commentsText; // @synthesize commentsText=_commentsText;
@property(retain, nonatomic) UIImageView *commentsImage; // @synthesize commentsImage=_commentsImage;
@property(retain, nonatomic) UIButtonHL *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButtonHL *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) GraySeparatorView *grayBottom; // @synthesize grayBottom=_grayBottom;
@property(retain, nonatomic) GraySeparatorView *grayTop; // @synthesize grayTop=_grayTop;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateLikesBlock;
- (id)initWithFrame:(struct CGRect)arg1;

@end

