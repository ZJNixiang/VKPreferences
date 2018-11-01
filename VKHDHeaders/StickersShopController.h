//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, ShopBannersView, StickerProductView, UICollectionView, UINavigationController, UINoDataLoadingView, UISegmentedControl, VKStockItems, VKStoreBanners, VKStoreSections;

@interface StickersShopController : UIViewControllerStyled <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool isLoadingStoreInformation;
    _Bool isLoadingSection;
    NSString *_referrer;
    id <StickersShopControllerDelegate> _delegate;
    NSString *_selectedSection;
    UICollectionView *_itemsCollection;
    UINavigationController *_navigationController;
    StickerProductView *_demoProductView;
    UINoDataLoadingView *_noDataView;
    VKStoreBanners *_banners;
    VKStoreSections *_sections;
    VKStockItems *_currentSectionStockItems;
    UISegmentedControl *_segmentedControl;
    ShopBannersView *_lastBannersView;
    struct CGRect _endNavigationFrame;
}

@property(nonatomic) __weak ShopBannersView *lastBannersView; // @synthesize lastBannersView=_lastBannersView;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) VKStockItems *currentSectionStockItems; // @synthesize currentSectionStockItems=_currentSectionStockItems;
@property(retain, nonatomic) VKStoreSections *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) VKStoreBanners *banners; // @synthesize banners=_banners;
@property(retain, nonatomic) UINoDataLoadingView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) StickerProductView *demoProductView; // @synthesize demoProductView=_demoProductView;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UICollectionView *itemsCollection; // @synthesize itemsCollection=_itemsCollection;
@property(nonatomic) struct CGRect endNavigationFrame; // @synthesize endNavigationFrame=_endNavigationFrame;
@property(copy, nonatomic) NSString *selectedSection; // @synthesize selectedSection=_selectedSection;
@property(nonatomic) __weak id <StickersShopControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)productWasPurchased:(id)arg1;
- (void)showStickerSettings;
- (void)reloadItem:(id)arg1;
- (void)fullReload:(id)arg1;
- (void)sectionSelected:(id)arg1;
- (void)openSectionWithName:(id)arg1;
- (void)configDemoViewForCell:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)loadSectionWithName:(id)arg1;
- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)closeWindow;
- (_Bool)shouldAnimateWindowAlpha;
- (void)makeWindowTransaction:(id)arg1 toClose:(_Bool)arg2;
- (void)finishWindowTransaction:(id)arg1 toClose:(_Bool)arg2;
- (void)beginWindowTransaction:(id)arg1 toClose:(_Bool)arg2;
- (id)rootController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
