//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIFastLabelDelegate.h"

@class ChatAttachView, GraySeparatorView, NSString, SingleCommentView, UITableView, UIView, VKComment;

@interface iPadCommentsViewCell : UITableViewCell <UIFastLabelDelegate>
{
    _Bool _grayLineAlwaysHidden;
    UITableView *_parentTable;
    SingleCommentView *_commentView;
    VKComment *_currentComment;
    struct CGPoint _lastTouchPoint;
}

@property(nonatomic) __weak VKComment *currentComment; // @synthesize currentComment=_currentComment;
@property(nonatomic) _Bool grayLineAlwaysHidden; // @synthesize grayLineAlwaysHidden=_grayLineAlwaysHidden;
@property(retain, nonatomic) SingleCommentView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(nonatomic) __weak UITableView *parentTable; // @synthesize parentTable=_parentTable;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)checkNeedReloadComment:(id)arg1;
- (void)fastLabel:(id)arg1 didSelectLink:(id)arg2;
@property(readonly, nonatomic) GraySeparatorView *grayLine;
@property(readonly, nonatomic) ChatAttachView *attachView;
- (void)setComment:(id)arg1 forPost:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UIView *likeTouchView;
- (id)reuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

