//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UIGestureRecognizerDelegate.h"

@class CAShapeLayer, ExpandableView, NSString, UIView;

@interface ExpandableViewController : UIViewControllerStyled <UIGestureRecognizerDelegate>
{
    CAShapeLayer *_maskLayer;
    ExpandableView *_expandableView;
    UIView *_maskView;
}

@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) ExpandableView *expandableView; // @synthesize expandableView=_expandableView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)setMaskRect:(struct CGRect)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)completeRotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)closeExpanding;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
