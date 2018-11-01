//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface LikesTargetObject : NSObject
{
    _Bool _loading;
    _Bool _reloading;
    _Bool _endReached;
    NSMutableDictionary *_objectsDict;
    NSMutableArray *_objectsArray;
    NSMutableArray *_sectionsArray;
    long long _totalObjectsCount;
}

@property(nonatomic) _Bool endReached; // @synthesize endReached=_endReached;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) long long totalObjectsCount; // @synthesize totalObjectsCount=_totalObjectsCount;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @synthesize sectionsArray=_sectionsArray;
@property(retain, nonatomic) NSMutableArray *objectsArray; // @synthesize objectsArray=_objectsArray;
@property(retain, nonatomic) NSMutableDictionary *objectsDict; // @synthesize objectsDict=_objectsDict;
- (void).cxx_destruct;
- (void)putWallRepostsResult:(id)arg1;
- (void)putUsersResult:(id)arg1;
- (id)init;

@end

