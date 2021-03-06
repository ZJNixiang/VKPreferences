//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface PullToRefreshView : UIView
{
    int currentType;
    int currentStatus;
    double updateTime;
    UIView *_view;
    UIImageView *_arrowImage;
    UIImageView *_activityIndicator;
}

@property(retain, nonatomic) UIImageView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)checkDidEndDragging:(id)arg1 isPopover:(_Bool)arg2;
- (_Bool)checkDidEndDragging:(id)arg1;
- (void)checkDidScroll:(id)arg1;
@property(nonatomic) int status;
- (void)setImageFlipped:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithType:(int)arg1;

@end

