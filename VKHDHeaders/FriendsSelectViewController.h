//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "FriendsViewDelegate.h"

@class FriendsView, NSString, UISegmentedControl, UIView;

@interface FriendsSelectViewController : UIViewControllerStyled <FriendsViewDelegate>
{
    _Bool onlyOne;
    id <FriendsSelectViewControllerDelegate> delegate;
    FriendsView *friendsView;
    NSString *headerTitle;
    UIView *BarView;
    UISegmentedControl *BarViewSegment;
}

@property(retain, nonatomic) UISegmentedControl *BarViewSegment; // @synthesize BarViewSegment;
@property(retain, nonatomic) UIView *BarView; // @synthesize BarView;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle;
@property(nonatomic) _Bool onlyOne; // @synthesize onlyOne;
@property(retain, nonatomic) FriendsView *friendsView; // @synthesize friendsView;
@property(nonatomic) id <FriendsSelectViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)selectedFriendsDidChanged;
- (void)backButtonPressed:(id)arg1;
- (void)selectTab;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

