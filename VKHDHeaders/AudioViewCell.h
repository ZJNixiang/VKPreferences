//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iPadStandardCell.h"

@class UIImageView, UILabel;

@interface AudioViewCell : iPadStandardCell
{
    UILabel *_nameLabel;
    UILabel *_artistLabel;
    UIImageView *_playImage;
}

@property(retain, nonatomic) UIImageView *playImage; // @synthesize playImage=_playImage;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (id)reuseIdentifier;

@end
