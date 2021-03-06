//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfilePhotoVideoView.h"

@class UIButton, UILabel;

@interface VideoCellView : ProfilePhotoVideoView
{
    UIButton *_actionsButton;
    UIButton *_authorButton;
    UILabel *_authorLabel;
}

@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(readonly, nonatomic) UIButton *authorButton; // @synthesize authorButton=_authorButton;
@property(retain, nonatomic) UIButton *actionsButton; // @synthesize actionsButton=_actionsButton;
- (void).cxx_destruct;
- (void)setVideo:(id)arg1;
- (double)nameLabelX;
- (double)counterPointSize;
- (double)namePointSize;
- (double)bottomPanelHeight;
- (void)removeActionsButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

