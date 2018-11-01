//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GraySeparatorView;

@interface iPadStandardCell : UITableViewCell
{
    _Bool _separatorHidden;
    _Bool _keepSeparatorState;
    GraySeparatorView *_separator;
}

@property(nonatomic) _Bool keepSeparatorState; // @synthesize keepSeparatorState=_keepSeparatorState;
@property(nonatomic) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(retain, nonatomic) GraySeparatorView *separator; // @synthesize separator=_separator;
- (void).cxx_destruct;
- (void)setSeparatorState:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @dynamic separatorInset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

