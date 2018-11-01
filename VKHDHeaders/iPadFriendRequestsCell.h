//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class BackupImageView, UIButton, UIImageView, UILabel, VKFriendRequest;

@interface iPadFriendRequestsCell : UICollectionViewCell
{
    BackupImageView *avatarImage;
    UIImageView *onlineImage;
    UILabel *nameLabel;
    UILabel *occupationLabel;
    UILabel *cityLabel;
    UIButton *acceptButton;
    UIButton *declineButton;
    UILabel *requestResultLabel;
    UILabel *messageLabel;
    UILabel *mutualLabel;
    BackupImageView *mutualImage[5];
    _Bool _isSuggestion;
    VKFriendRequest *_request;
}

+ (double)heightForRequest:(id)arg1;
@property(nonatomic) _Bool isSuggestion; // @synthesize isSuggestion=_isSuggestion;
@property(retain, nonatomic) VKFriendRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)occupationTap:(id)arg1;
- (void)avatarTap:(id)arg1;
- (void)acceptButtonPressed:(id)arg1;
- (void)declineButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

