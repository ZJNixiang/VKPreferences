//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIButton, UINoDataLoadingView, UITableView;

@interface VideoAlbumsViewController : UIViewControllerStyled <UITableViewDelegate, UITableViewDataSource>
{
    NSString *guid;
    NSMutableArray *getAlbumsArray;
    NSNumber *ownerId;
    _Bool loading;
    _Bool endReached;
    long long totalAlbumsCount;
    NSMutableDictionary *getAlbumsDict;
    _Bool _isAdmin;
    id <VideoViewDelegate> _delegate;
    UINoDataLoadingView *_noDataView;
    UITableView *_table;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) UINoDataLoadingView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(nonatomic) id <VideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)refreshControlFiredEvent:(id)arg1;
- (void)videoAlbumsDidFinishLoadingWithStatus:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)checkData:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithUid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

