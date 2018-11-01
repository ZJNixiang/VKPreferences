//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UIGestureRecognizerDelegate.h"

@class CAShapeLayer, NSString, UINavigationController, UIViewController;

@interface ModalContainerViewController : UIViewControllerStyled <UIGestureRecognizerDelegate>
{
    UIViewController *innerViewController;
    _Bool ignoreKeyboard;
    double lastKeyboardHeight;
    CAShapeLayer *cornerMaskLayer;
    _Bool _onlyTopRoundedCorners;
    UINavigationController *_innerNavigationController;
}

@property(retain, nonatomic) UINavigationController *innerNavigationController; // @synthesize innerNavigationController=_innerNavigationController;
@property(nonatomic) _Bool onlyTopRoundedCorners; // @synthesize onlyTopRoundedCorners=_onlyTopRoundedCorners;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)updateInterfaceOrientation:(long long)arg1;
- (struct CGSize)preferredContentSize;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateMaskLayer;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)closeWindow;
- (void)showSelfInWindow;
- (void)dealloc;
- (void)moveKeyboardWithNotification:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (_Bool)resignFirstResponder;
- (id)initWithInnerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
