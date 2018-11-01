//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExpandableView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class BackupImageView, NSString, ParallaxCollectionView, ShopStatusButton, UIImageView, UILabel, UIPageControl, VKProduct, VKStockItem;

@interface StickerProductView : ExpandableView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSString *_referrer;
    ParallaxCollectionView *_demoView;
    unsigned long long _productStatus;
    VKStockItem *_currentStockItem;
    VKProduct *_loadProduct;
    UILabel *_stickerTitle;
    UILabel *_stickerAuthor;
    UILabel *_descriptionLabel;
    ShopStatusButton *_shopButton;
    BackupImageView *_fakeImage;
    UIImageView *_itemIsNewImage;
    UIPageControl *_pageControl;
}

+ (id)instantiate;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIImageView *itemIsNewImage; // @synthesize itemIsNewImage=_itemIsNewImage;
@property(retain, nonatomic) BackupImageView *fakeImage; // @synthesize fakeImage=_fakeImage;
@property(retain, nonatomic) ShopStatusButton *shopButton; // @synthesize shopButton=_shopButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *stickerAuthor; // @synthesize stickerAuthor=_stickerAuthor;
@property(retain, nonatomic) UILabel *stickerTitle; // @synthesize stickerTitle=_stickerTitle;
@property(retain, nonatomic) VKProduct *loadProduct; // @synthesize loadProduct=_loadProduct;
@property(retain, nonatomic) VKStockItem *currentStockItem; // @synthesize currentStockItem=_currentStockItem;
@property(nonatomic) unsigned long long productStatus; // @synthesize productStatus=_productStatus;
@property(retain, nonatomic) ParallaxCollectionView *demoView; // @synthesize demoView=_demoView;
@property(retain, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
- (void).cxx_destruct;
- (void)forceRedraw;
- (void)pageControlChanged:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)productProgressChanged:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)updateProductStatus;
- (void)purchaseButtonPressed:(id)arg1;
- (void)dealloc;
- (struct CGSize)expandedSize;
- (void)finishTransition;
- (void)beginTransition;
- (double)descriptionHeight;
- (void)makeLayout:(struct CGSize)arg1;
- (void)animateTransition;
- (void)setExpanded:(_Bool)arg1;
- (void)setBackground;
- (void)prepareDemoView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

