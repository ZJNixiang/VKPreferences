//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StatEvent.h"

@class NSString;

@interface StatEventAudioPlay : StatEvent
{
    NSString *_audio_id;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *audio_id; // @synthesize audio_id=_audio_id;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end

