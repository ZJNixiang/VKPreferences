//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MenuViewController.h"

@class NSArray;

@interface NewsfeedListsMenuController : MenuViewController
{
    NSArray *_source;
    long long _currentFeed;
    id <NewsfeedListsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <NewsfeedListsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentFeed; // @synthesize currentFeed=_currentFeed;
@property(retain, nonatomic) NSArray *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

