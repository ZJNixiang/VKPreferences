//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDate, NSString, ParallaxCollectionView, SmilesDataSource, StickersBottomPanel, UICollectionViewCell, UILabel, UIPageControl, UISelectiveBorderTableView;

@interface SmilesViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UICollectionViewDelegate>
{
    NSDate *stickersTimeout;
    _Bool _showCategorySelector;
    id <SmilesViewDelegate> _delegate;
    SmilesDataSource *_dataSource;
    ParallaxCollectionView *_collectionView;
    NSString *_referrer;
    long long _nextOrientation;
    UIPageControl *_pageControl;
    UILabel *_statusLabel;
    StickersBottomPanel *_bottomPanelView;
    UISelectiveBorderTableView *_categoriesView;
    UICollectionViewCell *_lastCell;
    long long _lastSelectedCategory;
}

+ (id)instanceWithOrientation:(long long)arg1;
@property(nonatomic) long long lastSelectedCategory; // @synthesize lastSelectedCategory=_lastSelectedCategory;
@property(nonatomic) __weak UICollectionViewCell *lastCell; // @synthesize lastCell=_lastCell;
@property(retain, nonatomic) UISelectiveBorderTableView *categoriesView; // @synthesize categoriesView=_categoriesView;
@property(retain, nonatomic) StickersBottomPanel *bottomPanelView; // @synthesize bottomPanelView=_bottomPanelView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) long long nextOrientation; // @synthesize nextOrientation=_nextOrientation;
@property(retain, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(retain, nonatomic) ParallaxCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SmilesDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool showCategorySelector; // @synthesize showCategorySelector=_showCategorySelector;
@property(nonatomic) __weak id <SmilesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2;
- (void)pageControlChanged:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)selectLastCell;
- (void)actionTap:(id)arg1;
- (void)actionLong:(id)arg1;
- (_Bool)setProductProviderIfPossible:(id)arg1 mayOpenPage:(_Bool)arg2;
- (void)openProductPage:(id)arg1;
- (void)setProductProvider:(id)arg1;
- (void)showStickersRecent;
- (void)showStickersShop;
- (void)setEmojiProvider;
- (void)setBackgroundColor:(id)arg1;
- (void)invalidate;
- (void)invalidateRecent;
- (void)selectCategory:(long long)arg1;
- (void)actionBackspaceKeyboard:(id)arg1;
- (void)actionHideKeyboard:(id)arg1;
- (void)actionNormalKeyboard:(id)arg1;
- (void)selectActiveSticker:(id)arg1;
- (void)selectLoadedProduct:(id)arg1;
- (void)setProductAsActive:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)resizeToOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setFrameWithSize:(struct CGSize)arg1;
- (void)setFrameWithOrientation:(long long)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

