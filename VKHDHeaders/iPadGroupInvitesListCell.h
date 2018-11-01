//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class BackupImageView, UIButton, UIImageView, UILabel, VKGroup;

@interface iPadGroupInvitesListCell : UITableViewCell
{
    BackupImageView *avatarImage[2];
    UILabel *nameLabel[2];
    UILabel *membersLabel[2];
    UILabel *descriptionLabel[2];
    UIImageView *backgroundImage[2];
    VKGroup *groups[2];
    UIImageView *requestResultBackground[2];
    UIButton *acceptButton[2];
    UIButton *declineButton[2];
    UILabel *requestResultLabel[2];
    UIButton *acceptEventButton[2];
    UIButton *declineEventButton[2];
    UIButton *acceptMaybeButton[2];
    UILabel *invitedByLabel[2];
    UIButton *invitedByButton[2];
}

- (void).cxx_destruct;
- (void)acceptEventButtonPressed:(id)arg1;
- (void)maybeEventButtonPressed:(id)arg1;
- (void)touchEventUpInMiddle:(id)arg1;
- (void)touchEventDownInMiddle:(id)arg1;
- (void)declineEventButtonPressed:(id)arg1;
- (void)touchEventUpInRight:(id)arg1;
- (void)touchEventDownInRight:(id)arg1;
- (void)acceptButtonPressed:(id)arg1;
- (void)declineButtonPressed:(id)arg1;
- (void)touchUpInRight:(id)arg1;
- (void)touchDownInRight:(id)arg1;
- (void)invitedByPressed:(id)arg1;
- (void)avatarTap:(id)arg1;
- (void)setGroup:(id)arg1 pos:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

