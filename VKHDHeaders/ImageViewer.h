//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "PostMenuControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UIScrollViewDelegate.h"
#import "VKHostImageViewDeleage.h"
#import "iPadCommentsViewControllerDelegate.h"

@class BackupImageView, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIBarButtonItem, UIButton, UIButtonHL, UIImageView, UILabel, UINavigationBar, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIToolbar, VKDocument, VKHostImageView, VKPhoto;

@interface ImageViewer : UIViewControllerStyled <UIGestureRecognizerDelegate, UIScrollViewDelegate, VKHostImageViewDeleage, PostMenuControllerDelegate, UINavigationBarDelegate, iPadCommentsViewControllerDelegate>
{
    NSString *guid;
    UIScrollView *PageScroll;
    VKHostImageView *LImage;
    VKHostImageView *CImage;
    VKHostImageView *RImage;
    UIBarButtonItem *barButton2;
    UIBarButtonItem *barButton;
    UIToolbar *toolBar;
    UILabel *descriptionLabel;
    UIToolbar *bottomImage;
    UIImageView *descriptionGradient;
    UINavigationBar *topImage;
    UIBarButtonItem *closeButton;
    UIBarButtonItem *shareButton;
    UIButton *likeButton;
    UILabel *likeLabel;
    UIButton *commentsButton;
    UILabel *commentsLabel;
    UIButtonHL *avatarButton;
    BackupImageView *avatarImage;
    UILabel *nameLabel;
    UILabel *timeLabel;
    VKPhoto *Attach;
    NSMutableArray *Photos;
    long long currentIndex;
    long long oldIndex;
    _Bool pageChanged;
    _Bool ignore;
    _Bool isOverlayShowing;
    long long lastUpdateIndex;
    long long totalCount;
    NSNumber *album_;
    NSNumber *uid_;
    _Bool loading;
    _Bool endReached;
    NSMutableDictionary *getPhotosDict;
    UIPanGestureRecognizer *panRecognizer;
    UITapGestureRecognizer *tap;
    _Bool restoreOverlayState;
    NSNumber *feed;
    NSString *feed_type;
    VKDocument *transferDocument;
}

@property(retain, nonatomic) VKDocument *transferDocument; // @synthesize transferDocument;
@property(copy, nonatomic) NSString *feed_type; // @synthesize feed_type;
@property(retain, nonatomic) NSNumber *feed; // @synthesize feed;
- (void).cxx_destruct;
- (void)setLikesCount:(id)arg1;
- (void)menuController:(id)arg1 sendPhotoWithMessage:(id)arg2;
- (void)menuController:(id)arg1 savePhotoToCameraRoll:(id)arg2;
- (void)menuController:(id)arg1 shouldDeletePhoto:(id)arg2;
- (void)menuController:(id)arg1 reportPhoto:(id)arg2 reason:(unsigned long long)arg3;
- (void)didEndScrollingOrZooming;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)doubleTap:(id)arg1;
- (void)swipe:(id)arg1;
- (void)panGestureEvent:(id)arg1;
- (void)isLikedDidFinishLoading:(id)arg1;
- (void)photosCommentsDidLoaded:(id)arg1;
- (void)photosAllDidFinishLoadingWithStatus:(id)arg1;
- (void)photosDidFinishLoadingWithStatus:(id)arg1;
- (void)didChangePhotoCommentsCount:(id)arg1;
- (void)didChangePhotoLikesCount:(id)arg1;
- (void)export:(id)arg1;
- (void)close:(id)arg1;
- (void)like:(_Bool)arg1;
- (void)like;
- (void)postCommentsControllerWillBeClosed:(id)arg1;
- (void)showComments;
- (void)avatarButtonPressed:(id)arg1;
- (void)updatePage;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (void)updateTextLabelForOrientation:(long long)arg1;
- (void)UpdateImage:(id)arg1;
- (void)BuildImages:(long long)arg1;
- (void)SetAttach:(id)arg1;
- (void)resignActive:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (long long)positionForBar:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)show:(_Bool)arg1;
- (void)show;
- (void)fade:(_Bool)arg1;
- (void)fade;
- (void)updateHeader;
- (void)setLikeButtonLiked:(_Bool)arg1;
- (void)updateOwnerAvatar;
- (void)updateButtonSizes;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)closeWindow;
- (void)hideWindow;
- (void)showSelfInWindow;
- (id)initWithAttachments:(id)arg1 withIndex:(long long)arg2 withTotalCount:(long long)arg3 withAlbum:(id)arg4 withUid:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

