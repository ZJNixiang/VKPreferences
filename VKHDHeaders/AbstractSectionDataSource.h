//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITableView;

@interface AbstractSectionDataSource : NSObject
{
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (double)heightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (unsigned long long)numberOfRowsInSection;

@end

