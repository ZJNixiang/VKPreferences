//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UITableView;

@interface SectionIndex : NSObject
{
    NSArray *_sections;
    UITableView *_table;
}

@property(nonatomic) __weak UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long count;
- (void)reloadSection:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithSections:(id)arg1 tableView:(id)arg2;

@end

