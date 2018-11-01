//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UIFastLabelDelegate.h"

@protocol PostViewDelegate <NSObject, UIFastLabelDelegate>
- (void)restoreHiddenPost:(id)arg1;
- (void)restoreRemovedPost:(id)arg1;
- (void)commentButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)likeButtonPressed:(id)arg1;
- (void)showFullButtonClick:(id)arg1;
- (void)actionsButtonClick:(id)arg1;

@optional
- (void)closeDetailPost:(id)arg1;
@end
