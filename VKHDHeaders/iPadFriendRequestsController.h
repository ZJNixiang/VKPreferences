//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "RFQuiltLayoutDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UINoDataLoadingView, UIRefreshControl;

@interface iPadFriendRequestsController : UIViewControllerStyled <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, RFQuiltLayoutDelegate>
{
    NSString *guid;
    NSMutableArray *requestsArray;
    NSMutableDictionary *requestsArrayDict;
    UIRefreshControl *_refreshControl;
    _Bool endReached;
    _Bool loading;
    _Bool _suggested;
    UICollectionView *_friendsCollection;
    UINoDataLoadingView *_noDataView;
}

@property(retain, nonatomic) UINoDataLoadingView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) UICollectionView *friendsCollection; // @synthesize friendsCollection=_friendsCollection;
@property _Bool suggested; // @synthesize suggested=_suggested;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)insetsForItemAtIndexPath:(id)arg1;
- (struct CGSize)blockSizeForItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)requestsDidLoaded:(id)arg1;
- (void)friendsDidAdded:(id)arg1;
- (void)refreshTable;
- (double)heightForRequest:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithSuggested:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

