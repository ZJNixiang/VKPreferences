//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@interface FBGraphObjectArray : NSMutableArray
{
    NSMutableArray *_jsonArray;
}

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)graphObjectifyAll;
- (id)graphObjectifyAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWrappingArray:(id)arg1;

@end

