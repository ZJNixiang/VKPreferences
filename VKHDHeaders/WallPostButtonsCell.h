//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButtonHL, UIImageView, UILabel, UIView;

@interface WallPostButtonsCell : UITableViewCell
{
    _Bool _isExpanded;
    UIButtonHL *_addPostButton;
    UIButtonHL *_addPhotoButton;
    UIButtonHL *_addPlaceButton;
    UIView *_buttonsContainer;
    UIImageView *_addPostImage;
    UIImageView *_addPhotoImage;
    UIImageView *_addPlaceImage;
    UILabel *_addPostLabel;
    UILabel *_addPhotoLabel;
    UILabel *_addPlaceLabel;
}

@property(retain, nonatomic) UILabel *addPlaceLabel; // @synthesize addPlaceLabel=_addPlaceLabel;
@property(retain, nonatomic) UILabel *addPhotoLabel; // @synthesize addPhotoLabel=_addPhotoLabel;
@property(retain, nonatomic) UILabel *addPostLabel; // @synthesize addPostLabel=_addPostLabel;
@property(retain, nonatomic) UIImageView *addPlaceImage; // @synthesize addPlaceImage=_addPlaceImage;
@property(retain, nonatomic) UIImageView *addPhotoImage; // @synthesize addPhotoImage=_addPhotoImage;
@property(retain, nonatomic) UIImageView *addPostImage; // @synthesize addPostImage=_addPostImage;
@property(retain, nonatomic) UIView *buttonsContainer; // @synthesize buttonsContainer=_buttonsContainer;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) UIButtonHL *addPlaceButton; // @synthesize addPlaceButton=_addPlaceButton;
@property(retain, nonatomic) UIButtonHL *addPhotoButton; // @synthesize addPhotoButton=_addPhotoButton;
@property(retain, nonatomic) UIButtonHL *addPostButton; // @synthesize addPostButton=_addPostButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addPlaceButtonUp:(id)arg1;
- (void)addPlaceButtonDown:(id)arg1;
- (void)addPhotoButtonUp:(id)arg1;
- (void)addPhotoButtonDown:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

