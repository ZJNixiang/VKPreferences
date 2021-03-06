//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatLogicViewController.h"

#import "AttachManagerDelegate.h"
#import "AttachTextViewDelegate.h"
#import "AudioViewDelegate.h"
#import "ChatAttachViewDelegate.h"
#import "CommentFieldDelegate.h"
#import "DocsViewControllerDelegate.h"
#import "MapKitControllerDelegate.h"
#import "PhotosViewDelegate.h"
#import "SmilesViewDelegate.h"
#import "StickersShopControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VideoViewDelegate.h"
#import "iPadChatViewCellDelegate.h"

@class AttachManager, BackupImageView, CommentFieldView, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer, ObservingInputAccessoryView, PossiblyFixedJumpTableView, SmilesViewController, UIActionSheet, UIBarButtonItem, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIPopoverController, UISelectiveBorderView, UIView, VKMessage, VKUser;

@interface iPadChatViewController : ChatLogicViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, MapKitControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, iPadChatViewCellDelegate, AudioViewDelegate, PhotosViewDelegate, VideoViewDelegate, UIGestureRecognizerDelegate, DocsViewControllerDelegate, AttachManagerDelegate, AttachTextViewDelegate, SmilesViewDelegate, CommentFieldDelegate, StickersShopControllerDelegate, ChatAttachViewDelegate>
{
    NSString *guid;
    double heightForNewRows;
    NSString *loadedMessage;
    NSNumber *currentChatPeer;
    VKUser *currentUser;
    _Bool ignoreKeyboard;
    BackupImageView *avatar;
    UIBarButtonItem *avatarButtonItem;
    UIView *topOnlineView;
    UILabel *nameLabel;
    UILabel *onlineLabel;
    UIImageView *mobileOnlinePic;
    VKMessage *selectedMessage;
    NSIndexPath *errorIndexPath;
    VKMessage *errorMessage;
    UIActionSheet *errorSheet;
    long long minMid;
    _Bool cacheEnded;
    _Bool loading;
    _Bool endReached;
    double minDate;
    _Bool wasSkipped;
    double lastSendActive;
    NSMutableArray *markAsReadArr;
    NSTimer *readTimer;
    double currentHeight;
    NSMutableArray *dialogHistoryKeysArray;
    NSMutableDictionary *dialogHistoryArray;
    long long currentLoadingDialogHistoryCount;
    NSDictionary *loadedMessages;
    NSMutableArray *typingUsers;
    _Bool markAsReadAvalible;
    NSMutableArray *selectedMessages;
    NSMutableDictionary *selectedMessagesDict;
    NSMutableArray *longPressGestures;
    double lastKeyboardHeight;
    _Bool sendAfterUpload;
    UIActionSheet *attachSheet;
    _Bool ignoreAnimation;
    _Bool shouldOpenKeyboardAfterRotation;
    _Bool animateToolbars;
    _Bool forceZeroInset;
    UIPopoverController *popover;
    _Bool _sending;
    UIBarButtonItem *_doneEditButton;
    UIButton *_forwardEditButton;
    UIButton *_deleteEditButton;
    UILabel *_noMessagesLabel;
    PossiblyFixedJumpTableView *_chatTable;
    AttachManager *_attachManager;
    CommentFieldView *_commentField;
    UISelectiveBorderView *_editButtonsBackground;
    SmilesViewController *_smilesViewController;
    ObservingInputAccessoryView *_observer;
    UILongPressGestureRecognizer *_longTapGesture;
}

@property(nonatomic) __weak UILongPressGestureRecognizer *longTapGesture; // @synthesize longTapGesture=_longTapGesture;
@property(retain, nonatomic) ObservingInputAccessoryView *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) SmilesViewController *smilesViewController; // @synthesize smilesViewController=_smilesViewController;
@property(retain, nonatomic) UISelectiveBorderView *editButtonsBackground; // @synthesize editButtonsBackground=_editButtonsBackground;
@property(retain, nonatomic) CommentFieldView *commentField; // @synthesize commentField=_commentField;
@property(retain, nonatomic) AttachManager *attachManager; // @synthesize attachManager=_attachManager;
@property(retain, nonatomic) PossiblyFixedJumpTableView *chatTable; // @synthesize chatTable=_chatTable;
@property(retain, nonatomic) UILabel *noMessagesLabel; // @synthesize noMessagesLabel=_noMessagesLabel;
@property(retain, nonatomic) UIButton *deleteEditButton; // @synthesize deleteEditButton=_deleteEditButton;
@property(retain, nonatomic) UIButton *forwardEditButton; // @synthesize forwardEditButton=_forwardEditButton;
@property(retain, nonatomic) UIBarButtonItem *doneEditButton; // @synthesize doneEditButton=_doneEditButton;
@property(nonatomic) _Bool sending; // @synthesize sending=_sending;
- (void).cxx_destruct;
- (_Bool)chatAttachView:(id)arg1 canOpenAttach:(id)arg2;
- (void)chatPushSettingsUpdated:(id)arg1;
- (struct CGSize)sizeForCurrentOrientation;
- (void)reloadTable;
- (void)stickersShopClosed;
- (id)collectionControllerRootWindow:(id)arg1;
- (void)collectionControllerShouldBecomeFirstResponder:(id)arg1;
- (void)stickersShopDidHide:(id)arg1;
- (void)stickersShopWillHide:(id)arg1;
- (void)stickersShopDidAppear:(id)arg1;
- (void)collectionControllerShouldOpenStickersShop:(id)arg1;
- (void)collectionControllerShowSystemKeyboard:(id)arg1;
- (void)collectionControllerBackspace:(id)arg1;
- (_Bool)collectionControllerShouldHide:(id)arg1;
- (void)smileButtonPressed:(id)arg1;
- (void)longPress:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tap:(id)arg1;
- (void)tapAvatar:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)failButtonPressed:(id)arg1 inCell:(id)arg2;
- (void)didSelectDoc:(id)arg1;
- (void)didSelectPhoto:(id)arg1;
- (void)videoView:(id)arg1 didSelectVideo:(id)arg2;
- (id)videoViewNeedDialogId:(id)arg1;
- (void)didSelectAudio:(id)arg1 controlPopover:(_Bool)arg2;
- (void)placeDidSelected:(id)arg1 lon:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)attachButtonPressed:(id)arg1;
- (void)showAttachSheet;
- (void)DeleteEditButtonPressed:(id)arg1;
- (void)ForwardEditButtonPressed:(id)arg1;
- (void)DoneEditButtonPressed:(id)arg1;
- (void)sendButtonPressed:(id)arg1;
- (void)ShowUsersClick:(id)arg1;
- (void)userBecomeOnline:(id)arg1;
- (void)userBecomeOffline:(id)arg1;
- (void)updateOnlineStatus;
- (void)userDidRemovedFromChat:(id)arg1;
- (void)userDidAddedToChat:(id)arg1;
- (void)checkUnreadMessages;
- (void)checkNoMessagesState;
- (void)dialogHistoryDidFinishLoadingWithStatus:(id)arg1;
- (void)performInsertMessages:(id)arg1 performTableUpdates:(_Bool)arg2;
- (void)performInsertTransaction:(id)arg1;
- (void)messageWasSent:(id)arg1;
- (void)processTypingUpdates:(id)arg1 performTableUpdates:(_Bool)arg2;
- (void)performTransactionBlock:(CDUnknownBlockType)arg1;
- (void)userPrintUpdate:(id)arg1;
- (id)thisChatKey;
- (void)messageReadStateChanged:(id)arg1;
- (void)chatTitleDidChanged:(id)arg1;
- (void)chatInfoDidLoaded:(id)arg1;
- (void)messageDeleteStateChanged:(id)arg1;
- (void)forwardedUsersDidLoaded:(id)arg1;
- (_Bool)tableIsFree;
- (_Bool)tableIsNotStickToEnd;
- (void)messagesForChatDidFinishLoadingCache:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshControlFiredEvent:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hideMenu:(id)arg1;
- (void)extraMessageActions;
- (id)indexPathForMessage:(id)arg1;
- (void)deleteMessage;
- (void)copyMessage;
- (void)replyMessage;
- (void)calcMessage;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)markAsReadProc;
- (void)attachmentsWillUpdateAttachScroll;
- (void)attachmentsDidUploaded;
- (void)attachmentsCountDidChanged;
- (void)attachTextViewDidEndEditing:(id)arg1;
- (void)attachTextViewDidBeginEditing:(id)arg1;
- (_Bool)attachTextViewShouldBeginEditing:(id)arg1;
- (void)attachTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)attachTextViewDidChange:(id)arg1;
- (_Bool)sendButtonEnabled;
- (_Bool)attachTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)didResignFirstResponder;
- (void)updateToolbars;
- (void)updateEditPanelButtons;
- (void)resetMessageField;
- (void)collectionController:(id)arg1 didSelectObject:(id)arg2;
- (void)sendMessage;
- (void)insertMessageToArray:(id)arg1;
- (id)createNewOutMessageWithBody:(id)arg1;
- (void)setMessage:(id)arg1 deleteState:(id)arg2;
- (void)setMessage:(id)arg1 readState:(id)arg2;
- (void)attachPost:(id)arg1;
- (void)attachMessages:(id)arg1;
- (void)willResignFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)resignResponderNow;
- (void)resignIfPossible;
- (_Bool)isFirstResponder;
- (void)updateInterfaceForSize:(struct CGSize)arg1 fromTextChange:(int)arg2 animated:(_Bool)arg3 duration:(double)arg4 animateTextField:(_Bool)arg5;
- (void)updateInterfaceForSize:(struct CGSize)arg1 fromTextChange:(int)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidHidden:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)updateChatViewAnimated:(_Bool)arg1;
- (void)setRightButtonAvatar:(_Bool)arg1;
- (void)updateGroupBarButton;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)forceClose;
- (void)dealloc;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)finishRotation;
- (void)beginRotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willChangeOrientation:(id)arg1;
- (void)configureListeners;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setAttachButtonEnabled:(_Bool)arg1;
- (void)setSendButtonEnabled:(_Bool)arg1;
- (void)disableInputIfKicked;
- (void)viewDidLoad;
- (void)loadView;
- (void)createChatTable;
- (id)initWithChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

