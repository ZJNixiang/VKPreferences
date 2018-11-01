//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FriendsLogicViewController.h"

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIBarButtonItem, UICustomSearchBar, UINoDataLoadingView, UISearchDisplayControllerNoHide, UITableView;

@interface iPadChatCreateViewController : FriendsLogicViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    NSString *guid;
    _Bool doneSelect;
    _Bool _canSelectFew;
    id <iPadChatCreateViewControllerDelegate> _delegate;
    NSMutableArray *_selectedFriends;
    UICustomSearchBar *_searchBar;
    UITableView *_table;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_createButton;
    UINoDataLoadingView *_noDataView;
}

@property(retain, nonatomic) UINoDataLoadingView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) UIBarButtonItem *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) UICustomSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSMutableArray *selectedFriends; // @synthesize selectedFriends=_selectedFriends;
@property(nonatomic) _Bool canSelectFew; // @synthesize canSelectFew=_canSelectFew;
@property(nonatomic) id <iPadChatCreateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)chatDidCreated:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)usersDidSearch:(id)arg1;
- (void)refreshControlFiredEvent:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)updateCreateButtonTitle;
- (void)didFinishLoadingData;
- (void)reloadDataSelected;
- (void)reloadData;
- (void)dealloc;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)keyboardChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UISearchDisplayControllerNoHide *searchController; // @dynamic searchController;
@property(readonly) Class superclass;

@end

