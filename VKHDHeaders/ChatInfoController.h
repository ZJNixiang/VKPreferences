//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "FriendsSelectViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CrossDissolveImageView, NSString, UIActionSheet, UIBarButtonItem, UIButton, UIButtonHL, UIImageView, UILabel, UIPopoverController, UITableView, UITextField, UIView, VKMessage, VKUsers;

@interface ChatInfoController : UIViewControllerStyled <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, FriendsSelectViewControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate>
{
    _Bool loading;
    NSString *guid;
    VKMessage *currentChat;
    VKUsers *chatUsersArray;
    NSString *creatingTitle;
    UIActionSheet *avatarSheet;
    UIActionSheet *dndSheet;
    UIPopoverController *popover;
    UIView *_bottomView;
    UIButton *_logoutButton;
    UIView *_toolBar;
    UILabel *_titleLabel;
    UILabel *_memberCountLabel;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_editButton;
    UITextField *_titleField;
    UITableView *_table;
    CrossDissolveImageView *_groupAvatar;
    UIButtonHL *_avatarButton;
    UIImageView *_bottomAvatarImage;
}

@property(retain, nonatomic) UIImageView *bottomAvatarImage; // @synthesize bottomAvatarImage=_bottomAvatarImage;
@property(retain, nonatomic) UIButtonHL *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) CrossDissolveImageView *groupAvatar; // @synthesize groupAvatar=_groupAvatar;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) UITextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIButton *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)userDidAddedToChat:(id)arg1;
- (void)didSelectFriends:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)userUpdatedOnlineStatus:(id)arg1;
- (void)chatListDidFinishLoading:(id)arg1;
- (void)chatPushSettingsUpdated:(id)arg1;
- (void)chatInfoDidLoaded:(id)arg1;
- (void)updateWithChat:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)avatarButtonPressed:(id)arg1;
- (void)doneButtonClick:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)EditButtonClick:(id)arg1;
- (void)LogoutButtonClick:(id)arg1;
- (void)swchChange:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)applicationDidChangeInterfaceOrientation:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configGroupAvatar;
- (void)loadView;
- (void)dealloc;
- (id)initWithChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

