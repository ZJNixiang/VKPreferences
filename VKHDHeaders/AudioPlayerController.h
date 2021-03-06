//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVPlayer, NSMutableArray, NSString, SQDB, UIImage, VKAudio, VKRequest;

@interface AudioPlayerController : NSObject <AVAudioPlayerDelegate>
{
    AVPlayer *player;
    NSMutableArray *indexList;
    id observer;
    _Bool playing;
    _Bool didPlayedAnySong;
    VKRequest *lyricsRequest;
    struct _opaque_pthread_mutex_t cacheMutex;
    SQDB *cacheDB;
    long long cachePort;
    NSString *cachePath;
    long long cacheNum;
    _Bool _isFromCache;
    _Bool _cacheCurrentList;
    _Bool _ignoreRemote;
    _Bool _ignoreAudioProgress;
    UIImage *_previewImage;
    VKAudio *_playingAudio;
    VKAudio *_willPlayingAudio;
    NSString *_currentLyrics;
    NSString *_cacheText;
    NSMutableArray *_audioList;
    unsigned long long _currentSongNumber;
    double _progress;
    NSString *_currentListGuid;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool ignoreAudioProgress; // @synthesize ignoreAudioProgress=_ignoreAudioProgress;
@property(nonatomic) _Bool ignoreRemote; // @synthesize ignoreRemote=_ignoreRemote;
@property(copy, nonatomic) NSString *currentListGuid; // @synthesize currentListGuid=_currentListGuid;
@property(nonatomic) _Bool cacheCurrentList; // @synthesize cacheCurrentList=_cacheCurrentList;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long currentSongNumber; // @synthesize currentSongNumber=_currentSongNumber;
@property(readonly, nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) NSMutableArray *audioList; // @synthesize audioList=_audioList;
@property(copy, nonatomic) NSString *cacheText; // @synthesize cacheText=_cacheText;
@property(copy, nonatomic) NSString *currentLyrics; // @synthesize currentLyrics=_currentLyrics;
@property(retain, nonatomic) VKAudio *willPlayingAudio; // @synthesize willPlayingAudio=_willPlayingAudio;
@property(retain, nonatomic) VKAudio *playingAudio; // @synthesize playingAudio=_playingAudio;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (_Bool)canSeekChapterForward;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)cleanCache;
- (void)audiosDidLoaded:(id)arg1;
- (void)loadAudios:(id)arg1;
- (void)loadAudioWithOffset:(id)arg1 andCount:(id)arg2;
- (void)addAudioToCache:(id)arg1;
- (void)deleteAudioFromCacheWithOid:(id)arg1 andAid:(id)arg2;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)seekToProgress:(float)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)next;
- (void)prev;
- (void)audioCacheUpdatingLink:(id)arg1;
- (void)audioCacheUpdatedLink:(id)arg1;
- (void)audioCacheProgressError:(id)arg1;
- (void)audioCacheProgressEnd:(id)arg1;
- (void)audioCacheProgressChanged:(id)arg1;
- (void)setAudioList:(id)arg1 andSongNumber:(unsigned long long)arg2 andGuid:(id)arg3 play:(_Bool)arg4;
- (void)setAudioList:(id)arg1 andSongNumber:(unsigned long long)arg2 andGuid:(id)arg3;
- (void)addPlayingAudioToMyList;
- (void)buildShuffledIndexArray;
- (_Bool)hasList;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverFromCurrentPlayerItem;
- (void)addObserverToCurrentPlayerItem;
- (void)prepareToPlay;
- (void)toggleBroadcast;
- (void)updateStatusWithAudio:(id)arg1;
- (void)loadLyricsForId:(id)arg1;
- (void)updateInfoCenter;
- (void)remoteControlEvent:(id)arg1;
- (void)dealloc;
- (void)stopAndClear:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

