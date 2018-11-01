//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewControllerStyled.h"

#import "UIActionSheetDelegate.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"

@class NSString, NSURL, UIActionSheet, UIActivityIndicatorView, UIButton, UILabel, UIView, UIWebView, VKDocument, WKWebView;

@interface BrowserViewController : UIViewControllerStyled <WKNavigationDelegate, UIWebViewDelegate, UIActionSheetDelegate>
{
    _Bool isOverlayShowing;
    NSURL *currentUrl;
    UIActionSheet *exportSheet;
    _Bool loadingPage;
    NSString *title;
    NSString *preview_page;
    _Bool loading;
    _Bool _processLinks;
    VKDocument *_forwardedDocument;
    NSString *_url;
    UIButton *_closeButton;
    UIButton *_exportButton;
    UIWebView *_webView;
    WKWebView *_wkWebView;
    UIButton *_reloadButton;
    UIButton *_gobackButton;
    UIButton *_goForwardButton;
    UILabel *_titleLabel;
    UILabel *_addressLabel;
    UIView *_topView;
    UIActivityIndicatorView *_activity;
}

+ (id)existingInstance;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *goForwardButton; // @synthesize goForwardButton=_goForwardButton;
@property(retain, nonatomic) UIButton *gobackButton; // @synthesize gobackButton=_gobackButton;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool processLinks; // @synthesize processLinks=_processLinks;
@property(retain, nonatomic) VKDocument *forwardedDocument; // @synthesize forwardedDocument=_forwardedDocument;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)NextButtonPressed:(id)arg1;
- (void)PrevButtonPressed:(id)arg1;
- (void)ReloadButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)ExportButtonPressed:(id)arg1;
- (_Bool)shouldLoadRequest:(id)arg1 navigationType:(long long)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)completeFailWithError:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)completeFinishLoad;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)completeStartLoad;
- (id)pageTitle;
- (void)updateTitle;
- (void)updateReloadButton;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)loadView;
- (void)openPageWithHtmlString:(id)arg1 andBaseUrl:(id)arg2;
@property(readonly, nonatomic) NSURL *effectiveURL;
- (void)reloadPreview;
- (id)buildRequest;
- (id)initWithPreviewPage:(id)arg1 url:(id)arg2;
- (id)initWithOpenURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

