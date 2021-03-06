//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIViewReleasable.h"

@class NSString, UIImageView, UILabel;

@interface StandardAttachObject : UIControl <UIViewReleasable>
{
    _Bool _preparedToRelease;
    UIImageView *_attachImage;
    UILabel *_nameLabel;
    UILabel *_typeLabel;
    id _attachObject;
}

@property _Bool preparedToRelease; // @synthesize preparedToRelease=_preparedToRelease;
@property(retain, nonatomic) id attachObject; // @synthesize attachObject=_attachObject;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *attachImage; // @synthesize attachImage=_attachImage;
- (void).cxx_destruct;
- (void)attachPressed;
- (void)setHighlightedTable:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

