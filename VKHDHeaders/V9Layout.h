//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSMutableArray;

@interface V9Layout : UICollectionViewLayout
{
    long long _itemsInOneRow;
    double _lineSpacing;
    double _interitemSpacing;
    NSMutableArray *_frames;
    long long _itemsInOneColumn;
    double _marginX;
    double _marginY;
    double _extraOffsetY;
    double _maxWidth;
    double _maxHeight;
    struct CGSize _itemSize;
    struct CGSize _pageSize;
}

@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double extraOffsetY; // @synthesize extraOffsetY=_extraOffsetY;
@property(nonatomic) double marginY; // @synthesize marginY=_marginY;
@property(nonatomic) double marginX; // @synthesize marginX=_marginX;
@property(nonatomic) long long itemsInOneColumn; // @synthesize itemsInOneColumn=_itemsInOneColumn;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) long long itemsInOneRow; // @synthesize itemsInOneRow=_itemsInOneRow;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (long long)pagesInSection:(long long)arg1;
- (void)calculateLayoutProperties;
- (id)initWithItemsInOneRow:(long long)arg1 oneColumn:(long long)arg2;
- (id)init;

@end

