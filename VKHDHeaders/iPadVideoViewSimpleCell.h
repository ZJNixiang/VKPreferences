//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iPadStandardCell.h"

@class BackupImageView, UIImageView, UILabel;

@interface iPadVideoViewSimpleCell : iPadStandardCell
{
    UIImageView *_checkMark;
    BackupImageView *_imageForVideo;
    UILabel *_labelForVideo;
}

@property(retain, nonatomic) UILabel *labelForVideo; // @synthesize labelForVideo=_labelForVideo;
@property(retain, nonatomic) BackupImageView *imageForVideo; // @synthesize imageForVideo=_imageForVideo;
@property(retain, nonatomic) UIImageView *checkMark; // @synthesize checkMark=_checkMark;
- (void).cxx_destruct;
- (void)setAlbum:(id)arg1;
- (void)setVideo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

