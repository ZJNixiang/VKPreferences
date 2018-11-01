//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBViewController.h"

#import "FBGraphObjectPagingLoaderDelegate.h"
#import "FBGraphObjectSelectionChangedDelegate.h"

@class FBGraphObjectPagingLoader, FBGraphObjectTableDataSource, FBGraphObjectTableSelection, FBSession, NSSet, UIActivityIndicatorView, UITableView;

@interface FBGraphObjectPickerViewController : FBViewController <FBGraphObjectSelectionChangedDelegate, FBGraphObjectPagingLoaderDelegate>
{
    FBSession *_session;
    _Bool _allowsMultipleSelection;
    _Bool _implicitSession;
    UIActivityIndicatorView *_spinner;
    UITableView *_tableView;
    NSSet *_fieldsForRequest;
    FBGraphObjectTableDataSource *_dataSource;
    FBGraphObjectTableSelection *_selectionManager;
    FBGraphObjectPagingLoader *_loader;
}

+ (id)firstRenderLogString;
+ (double)cacheRefreshDelay;
+ (unsigned long long)graphObjectPagingMode;
@property(retain, nonatomic) FBGraphObjectPagingLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) FBGraphObjectTableSelection *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain, nonatomic) FBGraphObjectTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSSet *fieldsForRequest; // @synthesize fieldsForRequest=_fieldsForRequest;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)pagingLoaderWasCancelled:(id)arg1;
- (void)pagingLoader:(id)arg1 handleError:(id)arg2;
- (void)pagingLoaderDidFinishLoading:(id)arg1;
- (void)pagingLoader:(id)arg1 didLoadData:(id)arg2;
- (void)pagingLoader:(id)arg1 willLoadURL:(id)arg2;
- (void)graphObjectTableSelectionDidChange:(id)arg1;
- (void)_clearData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeSessionObserver:(id)arg1;
- (void)_addSessionObserver:(id)arg1;
- (void)_centerAndStartSpinner;
- (_Bool)delegateIncludesGraphObject:(id)arg1;
- (void)notifyDelegateOfError:(id)arg1;
- (void)notifyDelegateSelectionDidChange;
- (void)notifyDelegateDataDidChange;
- (void)loadDataSkippingRoundTripIfCached:(id)arg1;
- (void)loadDataThrottledSkippingRoundTripIfCached:(id)arg1;
- (void)configureDataSource:(id)arg1;
- (void)clearSelection;
- (void)updateView;
- (void)loadData;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)setSession:(id)arg1 implicit:(_Bool)arg2;
@property(retain, nonatomic) FBSession *session;
@property(nonatomic) _Bool itemPicturesEnabled;
@property(nonatomic) _Bool allowsMultipleSelection;
- (void)dealloc;
- (void)initializeGraphObjectPicker;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

