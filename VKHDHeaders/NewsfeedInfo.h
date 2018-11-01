//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, VKNewsList;

@interface NewsfeedInfo : NSObject
{
    _Bool _loading;
    _Bool _endReached;
    _Bool _isCheckingForUpdate;
    NSString *_name;
    NSMutableArray *_newsfeeds;
    NSMutableDictionary *_newsfeedsIds;
    NSMutableDictionary *_newsfeedsPhotoDays;
    NSNumber *_updateTime;
    NSString *_next_from;
    NSString *_sourceId;
    VKNewsList *_originalList;
    long long _lastKnownNewsItemsCount;
    long long _failedCount;
    NSString *_lastError;
}

@property(copy, nonatomic) NSString *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) _Bool isCheckingForUpdate; // @synthesize isCheckingForUpdate=_isCheckingForUpdate;
@property(nonatomic) long long failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) _Bool endReached; // @synthesize endReached=_endReached;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) long long lastKnownNewsItemsCount; // @synthesize lastKnownNewsItemsCount=_lastKnownNewsItemsCount;
@property(retain, nonatomic) VKNewsList *originalList; // @synthesize originalList=_originalList;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *next_from; // @synthesize next_from=_next_from;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSMutableDictionary *newsfeedsPhotoDays; // @synthesize newsfeedsPhotoDays=_newsfeedsPhotoDays;
@property(retain, nonatomic) NSMutableDictionary *newsfeedsIds; // @synthesize newsfeedsIds=_newsfeedsIds;
@property(retain, nonatomic) NSMutableArray *newsfeeds; // @synthesize newsfeeds=_newsfeeds;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithNewsfeed:(id)arg1;
@property(readonly, nonatomic) NSNumber *start_time;
- (id)initWithName:(id)arg1 andSourceId:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

