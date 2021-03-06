//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIButton, UINoDataLoadingView, UITableView;

@interface iPadSubscriptionsViewController : UIViewControllerStyled <UITableViewDelegate, UITableViewDataSource>
{
    NSString *guid;
    NSMutableArray *getGroupsArray;
    _Bool loading;
    _Bool endReached;
    NSMutableDictionary *getGroupDict;
    NSNumber *ownerId;
    UITableView *_table;
    UIButton *_backButton;
    UINoDataLoadingView *_noDataView;
}

@property(retain, nonatomic) UINoDataLoadingView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)refreshControlFiredEvent:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)loadPagesForUid:(id)arg1 offset:(id)arg2 count:(id)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithOwnerId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

