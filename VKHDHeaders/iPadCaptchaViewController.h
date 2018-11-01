//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UIBarPositioningDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UITextFieldDelegate.h"

@class BackupImageView, CustomUINavigationBar, NSString, UIActivityIndicatorView, UIButton, UINavigationItem, UITextField, UIView, VKError;

@interface iPadCaptchaViewController : UIViewControllerStyled <UITextFieldDelegate, UINavigationBarDelegate, UIBarPositioningDelegate>
{
    float keyboardHeight;
    _Bool ignoreKeyboard;
    VKError *pendingError;
    UITextField *_textField;
    UIView *_centerView;
    UIButton *_doneButton;
    UIButton *_closeButton;
    CustomUINavigationBar *_navigationBar;
    UINavigationItem *_navigationBarItem;
    BackupImageView *_captchaImage;
    UIActivityIndicatorView *_captchaLoading;
}

+ (id)lastController;
@property(retain, nonatomic) UIActivityIndicatorView *captchaLoading; // @synthesize captchaLoading=_captchaLoading;
@property(retain, nonatomic) BackupImageView *captchaImage; // @synthesize captchaImage=_captchaImage;
@property(retain, nonatomic) UINavigationItem *navigationBarItem; // @synthesize navigationBarItem=_navigationBarItem;
@property(retain, nonatomic) CustomUINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (long long)positionForBar:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)DoneButtonClick:(id)arg1;
- (void)setError:(id)arg1;
- (void)showWithImageWithError:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)resizeView:(long long)arg1 orSize:(struct CGSize)arg2;
- (void)updateInterfaceForOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (void)closeWindow;
- (void)showSelfInWindow;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

