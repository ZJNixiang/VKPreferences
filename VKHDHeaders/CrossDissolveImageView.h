//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NetworkingImageView.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewReleasable.h"

@class BackupImageView, NSString, UIImageView, UITapGestureRecognizer;

@interface CrossDissolveImageView : UIView <UIGestureRecognizerDelegate, NetworkingImageView, UIViewReleasable>
{
    UITapGestureRecognizer *tapGesture;
    _Bool _preparedToRelease;
    _Bool _imageAnimationEnabled;
    _Bool _placeholderHidden;
    BackupImageView *_imageContainer;
    CDUnknownBlockType _attachPressBlock;
    UIImageView *_placeholderView;
}

@property(nonatomic) _Bool placeholderHidden; // @synthesize placeholderHidden=_placeholderHidden;
@property(retain, nonatomic) UIImageView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(copy, nonatomic) CDUnknownBlockType attachPressBlock; // @synthesize attachPressBlock=_attachPressBlock;
@property(nonatomic) _Bool imageAnimationEnabled; // @synthesize imageAnimationEnabled=_imageAnimationEnabled;
@property _Bool preparedToRelease; // @synthesize preparedToRelease=_preparedToRelease;
@property(retain, nonatomic) BackupImageView *imageContainer; // @synthesize imageContainer=_imageContainer;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)touchPressed;
- (void)finishHighlight;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlightedImage:(id)arg1;
@property(nonatomic) _Bool allowGrayPlaceholder;
- (void)setGroupImages:(id)arg1 withPlaceholder:(id)arg2;
- (void)setPlaceholder:(id)arg1 config:(_Bool)arg2;
- (void)setImage:(id)arg1 fromUrl:(id)arg2;
- (void)cancelLoading;
- (id)prepareForImageWithPath:(id)arg1 withFilter:(id)arg2 withPlaceholder:(id)arg3 highlighted:(id)arg4 cropPlaceholder:(_Bool)arg5;
- (void)setImageWithPath:(id)arg1 withFilter:(id)arg2 withPlaceholder:(id)arg3 highlighted:(id)arg4 cropPlaceholder:(_Bool)arg5;
- (void)setImageWithPath:(id)arg1 withFilter:(id)arg2 withPlaceholder:(id)arg3 highlighted:(id)arg4;
- (void)setImageWithPath:(id)arg1 withFilter:(id)arg2 withPlaceholder:(id)arg3;
- (void)setImageWithPath:(id)arg1 withFilter:(id)arg2;
- (void)setAvatarUsers:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

