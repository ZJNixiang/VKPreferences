//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "AudioProgressViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AudioProgressView, AudioVolumeSlider, BackupImageView, MPVolumeView, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIActionSheet, UIButton, UIButtonHL, UIImageView, UILabel, UINavigationController, UITableView, UITextView, UIView, UIViewController, VKAudio, VKGroup, VKRequest, VKUser, iPadAudioListViewController, iPadAudioViewSlider;

@interface iPadAudioViewController : UIViewControllerStyled <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, AudioProgressViewDelegate>
{
    NSTimer *volumeMonitorTimer;
    float currentVolume;
    UIActionSheet *cacheSheet;
    VKAudio *actionAudio;
    iPadAudioListViewController *currentPlaylistController;
    NSIndexPath *selectedRow;
    _Bool animationStopped;
    VKUser *userAudio;
    VKGroup *groupAudio;
    NSMutableArray *getAlbumsArray;
    NSMutableDictionary *getAlbumsDict;
    _Bool loading;
    _Bool endReached;
    long long totalAlbumsCount;
    NSString *guid;
    VKRequest *lastSendedRequest;
    _Bool _willBeClosed;
    UIImageView *_headerView;
    UIView *_controlsHolder;
    UIImageView *_headerPlaceholderImage;
    UIButton *_closeButton;
    UIButton *_previousButton;
    UIButton *_playButton;
    UIButton *_nextButton;
    UIButtonHL *_albumButton;
    BackupImageView *_albumImage;
    UIImageView *_albumShadowImage;
    UILabel *_authorLabel;
    AudioProgressView *_audioProgressView;
    UILabel *_timeLabel;
    UILabel *_timeLabelBack;
    UIButton *_repeatButton;
    UIButton *_shuffleButton;
    UIButton *_broadcastButton;
    UIButton *_plusButton;
    UIButton *_exportButton;
    iPadAudioViewSlider *_songSlider;
    AudioVolumeSlider *_volumeSlider;
    UITableView *_rightTable;
    UIView *_rightTableViewContainer;
    UINavigationController *_leftNavigationController;
    UIView *_titleClipView;
    MPVolumeView *_volumeView;
    MPVolumeView *_volumeView2;
    UIViewController *_lyricsController;
    UIImageView *_lyricsControllerImage;
    UITextView *_lyricsControllerTextView;
    UIButton *_airPlayButton;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIButton *airPlayButton; // @synthesize airPlayButton=_airPlayButton;
@property(retain, nonatomic) UITextView *lyricsControllerTextView; // @synthesize lyricsControllerTextView=_lyricsControllerTextView;
@property(retain, nonatomic) UIImageView *lyricsControllerImage; // @synthesize lyricsControllerImage=_lyricsControllerImage;
@property(retain, nonatomic) UIViewController *lyricsController; // @synthesize lyricsController=_lyricsController;
@property(retain, nonatomic) MPVolumeView *volumeView2; // @synthesize volumeView2=_volumeView2;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIView *titleClipView; // @synthesize titleClipView=_titleClipView;
@property(retain, nonatomic) UINavigationController *leftNavigationController; // @synthesize leftNavigationController=_leftNavigationController;
@property(retain, nonatomic) UIView *rightTableViewContainer; // @synthesize rightTableViewContainer=_rightTableViewContainer;
@property(retain, nonatomic) UITableView *rightTable; // @synthesize rightTable=_rightTable;
@property(retain, nonatomic) AudioVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) iPadAudioViewSlider *songSlider; // @synthesize songSlider=_songSlider;
@property(retain, nonatomic) UIButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) UIButton *broadcastButton; // @synthesize broadcastButton=_broadcastButton;
@property(retain, nonatomic) UIButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(retain, nonatomic) UIButton *repeatButton; // @synthesize repeatButton=_repeatButton;
@property(retain, nonatomic) UILabel *timeLabelBack; // @synthesize timeLabelBack=_timeLabelBack;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) AudioProgressView *audioProgressView; // @synthesize audioProgressView=_audioProgressView;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UIImageView *albumShadowImage; // @synthesize albumShadowImage=_albumShadowImage;
@property(retain, nonatomic) BackupImageView *albumImage; // @synthesize albumImage=_albumImage;
@property(retain, nonatomic) UIButtonHL *albumButton; // @synthesize albumButton=_albumButton;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *previousButton; // @synthesize previousButton=_previousButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *headerPlaceholderImage; // @synthesize headerPlaceholderImage=_headerPlaceholderImage;
@property(retain, nonatomic) UIView *controlsHolder; // @synthesize controlsHolder=_controlsHolder;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool willBeClosed; // @synthesize willBeClosed=_willBeClosed;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)exportButtonPressed:(id)arg1;
- (void)plusButtonPressed:(id)arg1;
- (void)broadcastButtonPressed:(id)arg1;
- (void)shuffleButtonPressed:(id)arg1;
- (void)repeatButtonPressed:(id)arg1;
- (void)songSliderChanged:(id)arg1;
- (void)nextButtonPressed:(id)arg1;
- (void)playButtonPressed:(id)arg1;
- (void)previousButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)albumButtonPressed:(id)arg1;
- (void)audioDidLoadedLyricText:(id)arg1;
- (void)audioDidStartPlaying:(id)arg1;
- (void)audioDidStopPlaying:(id)arg1;
- (void)audioWillStartPlaying:(id)arg1;
- (void)audioProgressDidChanged:(id)arg1;
- (void)albumsDidFinishLoadingWithStatus:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)processSelectedRow:(id)arg1;
- (void)switchAudioControllerWith:(id)arg1;
- (void)updateButtons;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateBroadcastButton;
- (void)updateRepeatButton;
- (void)updateShuffleButton;
- (void)resetTitlePosition;
- (void)stopTitleScroll;
- (void)startTitleScroll;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)resizeView:(long long)arg1 orSize:(struct CGSize)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)pushAudioOfUser:(id)arg1 group:(id)arg2 album:(id)arg3;
- (void)pushAudioList:(id)arg1 withGuid:(id)arg2;
- (void)cleanUp;
- (void)dealloc;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
