//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIViewReleasable.h"

@class NSString, SongSlider, UIButton, UILabel, VKAudio;

@interface SongView : UIControl <UIViewReleasable>
{
    _Bool _playing;
    _Bool _preparedToRelease;
    UIButton *playButton;
    UILabel *authorLabel;
    UILabel *timeLabel;
    SongSlider *songSlider;
    VKAudio *_ownerAudio;
    id <SongViewDelegate> delegate;
}

@property _Bool preparedToRelease; // @synthesize preparedToRelease=_preparedToRelease;
@property(nonatomic) id <SongViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) VKAudio *ownerAudio; // @synthesize ownerAudio=_ownerAudio;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) SongSlider *songSlider; // @synthesize songSlider;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton;
- (void).cxx_destruct;
- (void)playButtonPressed:(id)arg1;
- (void)setPlaying:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePlayButtonImage;
- (void)audioProgressDidChanged:(id)arg1;
- (void)audioDidStartPlaying:(id)arg1;
- (void)audioDidStopPlaying:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)setHighlightedTable:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

