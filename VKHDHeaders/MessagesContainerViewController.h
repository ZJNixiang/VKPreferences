//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UIBarPositioningDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "iPadChatCreateViewControllerDelegate.h"

@class GraySeparatorView, MessagesView, NSString, UIButton, UINavigationController, UISelectiveBorderView, UIView, iPadChatCreateViewController, iPadChatViewController;

@interface MessagesContainerViewController : UIViewControllerStyled <iPadChatCreateViewControllerDelegate, UINavigationControllerDelegate, UIBarPositioningDelegate>
{
    MessagesView *messagesView;
    iPadChatCreateViewController *createChatController;
    UINavigationController *messagesNavigationController;
    UINavigationController *chatNavigationController;
    UIView *chatPlaceholderView;
    UIButton *settingsButton;
    UISelectiveBorderView *messagesBottomView;
    GraySeparatorView *graySeparator;
    iPadChatViewController *_currentChatViewController;
}

@property(retain, nonatomic) iPadChatViewController *currentChatViewController; // @synthesize currentChatViewController=_currentChatViewController;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (long long)positionForBar:(id)arg1;
- (void)chatCreateViewControllerDidCancel:(id)arg1;
- (void)newMessageButtonPressed:(id)arg1;
- (void)settingsButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)cleanCurrentChat;
- (void)pushChatViewController:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)resizeToSize:(struct CGSize)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

