//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIFastLabelDelegate.h"
#import "UIViewReleasable.h"

@class BackupImageView, ChatAttachView, NSString, UIFastLabel, UILabel, VKMessage;

@interface MessageView : UIView <UIFastLabelDelegate, UIViewReleasable>
{
    VKMessage *_mess;
    _Bool _preparedToRelease;
    ChatAttachView *attachView;
    BackupImageView *avatarImage;
    UIFastLabel *textLabel;
    UILabel *timeLabel;
    UILabel *nameLabel;
    UIView *_lineView;
}

@property _Bool preparedToRelease; // @synthesize preparedToRelease=_preparedToRelease;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel;
@property(retain, nonatomic) UIFastLabel *textLabel; // @synthesize textLabel;
@property(retain, nonatomic) BackupImageView *avatarImage; // @synthesize avatarImage;
@property(retain, nonatomic) ChatAttachView *attachView; // @synthesize attachView;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1;
- (void)fastLabel:(id)arg1 didSelectLink:(id)arg2;
- (void)setHighlightedTable:(_Bool)arg1;
- (void)avatarButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
